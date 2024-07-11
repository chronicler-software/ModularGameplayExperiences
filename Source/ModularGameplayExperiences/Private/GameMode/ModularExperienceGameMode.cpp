// Copyright Chronicler.


#include "GameMode/ModularExperienceGameMode.h"

#include "GameMapsSettings.h"
#include "ModularGameplayExperiencesLogs.h"
#include "ActorComponent/ModularExperienceComponent.h"
#include "ActorComponent/ModularPawnComponent.h"
#include "ActorComponent/ModularPlayerSpawningComponent.h"
#include "DataAsset/ModularAssetManager.h"
#include "GameMode/ModularExperienceDefinition.h"
#include "GameMode/ModularWorldSettings.h"
#include "Kismet/GameplayStatics.h"
#include "Player/ModularExperiencePlayerState.h"
#include "CommonUserSubsystem.h"
#include "GameMode/ModularUserFacingExperienceDefinition.h"


AModularExperienceGameMode::AModularExperienceGameMode(const FObjectInitializer& ObjectInitializer)
{
}

const UModularPawnData* AModularExperienceGameMode::GetPawnDataForController(const AController* InController) const
{
	// See if pawn data is already set on the player state.
	if (InController != nullptr)
	{
		if (const AModularExperiencePlayerState* PlayerState = InController->GetPlayerState<AModularExperiencePlayerState>())
		{
			if (const UModularPawnData* PawnData = PlayerState->GetPawnData<UModularPawnData>())
			{
				return PawnData;
			}
		}
	}

	// If not, fall back to the the default for the current experience
	check(GameState);
	const UModularExperienceComponent* ExperienceComponent = GameState->FindComponentByClass<UModularExperienceComponent>();
	check(ExperienceComponent);

	if (ExperienceComponent->IsExperienceLoaded())
	{
		if (const UModularExperienceDefinition* Experience = ExperienceComponent->GetCurrentExperienceChecked();
			Experience->DefaultPawnData != nullptr)
		{
			return Experience->DefaultPawnData;
		}

		// Experience is loaded and there's still no pawn data, fall back to the default for now
		return UModularAssetManager::Get().GetDefaultPawnData();
	}

	// Experience not loaded yet, so there is no pawn data to be had
	return nullptr;
}

void AModularExperienceGameMode::RequestPlayerRestartNextFrame(AController* Controller, bool bForceReset)
{
	if (bForceReset && (Controller != nullptr))
	{
		Controller->Reset();
	}

	if (APlayerController* PC = Cast<APlayerController>(Controller))
	{
		GetWorldTimerManager().SetTimerForNextTick(PC, &APlayerController::ServerRestartPlayer_Implementation);
	}
	// @todo Add support for generic bots.
}

bool AModularExperienceGameMode::ControllerCanRestart(AController* Controller)
{
	if (APlayerController* PC = Cast<APlayerController>(Controller))
	{
		if (!Super::PlayerCanRestart_Implementation(PC))
		{
			return false;
		}
	}
	else
	{
		// Bot version of Super::PlayerCanRestart_Implementation
		if ((Controller == nullptr) || Controller->IsPendingKillPending())
		{
			return false;
		}
	}

	if (UModularPlayerSpawningComponent* PlayerSpawningComponent = GameState->FindComponentByClass<UModularPlayerSpawningComponent>())
	{
		return PlayerSpawningComponent->ControllerCanRestart(Controller);
	}

	return true;
}

UClass* AModularExperienceGameMode::GetDefaultPawnClassForController_Implementation(AController* InController)
{
	if (const UModularPawnData* PawnData = GetPawnDataForController(InController))
	{
		if (PawnData->PawnClass)
		{
			return PawnData->PawnClass;
		}
	}

	return Super::GetDefaultPawnClassForController_Implementation(InController);
}

void AModularExperienceGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);

	// Wait for the next frame to give time to initialize startup settings.
	GetWorld()->GetTimerManager().SetTimerForNextTick(this, &ThisClass::HandleMatchAssignmentIfNotExpectingOne);
}

APawn* AModularExperienceGameMode::SpawnDefaultPawnAtTransform_Implementation(AController* NewPlayer, const FTransform& SpawnTransform)
{
	FActorSpawnParameters SpawnInfo;
	SpawnInfo.Instigator = GetInstigator();
	SpawnInfo.ObjectFlags |= RF_Transient;	// Never save the default player pawns into a map.
	SpawnInfo.bDeferConstruction = true;

	if (UClass* PawnClass = GetDefaultPawnClassForController(NewPlayer))
	{
		if (APawn* SpawnedPawn = GetWorld()->SpawnActor<APawn>(PawnClass, SpawnTransform, SpawnInfo))
		{
			if (UModularPawnComponent* PawnExtComp = UModularPawnComponent::FindModularPawnComponent(SpawnedPawn))
			{
				if (const UModularPawnData* PawnData = GetPawnDataForController(NewPlayer))
				{
					PawnExtComp->SetPawnData(PawnData);
				}
				else
				{
					UE_LOG(LogModularGameplayExperiences, Error, TEXT("Game mode was unable to set PawnData on the spawned pawn [%s]."), *GetNameSafe(SpawnedPawn));
				}
			}

			SpawnedPawn->FinishSpawning(SpawnTransform);

			return SpawnedPawn;
		}
		UE_LOG(LogModularGameplayExperiences, Error, TEXT("Game mode was unable to spawn Pawn of class [%s] at [%s]."), *GetNameSafe(PawnClass), *SpawnTransform.ToHumanReadableString());
	}
	else
	{
		UE_LOG(LogModularGameplayExperiences, Error, TEXT("Game mode was unable to spawn Pawn due to NULL pawn class."));
	}

	return nullptr;
}

bool AModularExperienceGameMode::ShouldSpawnAtStartSpot(AController* Player)
{
	return false;
}

void AModularExperienceGameMode::HandleStartingNewPlayer_Implementation(APlayerController* NewPlayer)
{
	// Delay starting new players until the experience has been loaded
	// (players who log in prior to that will be started by OnExperienceLoaded)
	if (IsExperienceLoaded())
	{
		Super::HandleStartingNewPlayer_Implementation(NewPlayer);
	}
}

AActor* AModularExperienceGameMode::ChoosePlayerStart_Implementation(AController* Player)
{
	if (UModularPlayerSpawningComponent* PlayerSpawningComponent = GameState->FindComponentByClass<UModularPlayerSpawningComponent>())
	{
		return PlayerSpawningComponent->ChoosePlayerStart(Player);
	}

	return Super::ChoosePlayerStart_Implementation(Player);
}

void AModularExperienceGameMode::FinishRestartPlayer(AController* NewPlayer, const FRotator& StartRotation)
{
	if (UModularPlayerSpawningComponent* PlayerSpawningComponent = GameState->FindComponentByClass<UModularPlayerSpawningComponent>())
	{
		PlayerSpawningComponent->FinishRestartPlayer(NewPlayer, StartRotation);
	}

	Super::FinishRestartPlayer(NewPlayer, StartRotation);
}

bool AModularExperienceGameMode::PlayerCanRestart_Implementation(APlayerController* Player)
{
	return ControllerCanRestart(Player);
}

void AModularExperienceGameMode::InitGameState()
{
	Super::InitGameState();

	// Listen for the experience load to complete.
	// @todo Ensure there is a default ExperienceComponent shipped.
	// Right now, if the project GameMode doesn't have a ExperienceComponent, this will crash.
	UModularExperienceComponent* ExperienceComponent = GameState->FindComponentByClass<UModularExperienceComponent>();
	check(ExperienceComponent);
	ExperienceComponent->CallOrRegister_OnExperienceLoaded(FOnModularExperienceLoaded::FDelegate::CreateUObject(this, &ThisClass::OnExperienceLoaded));
}

bool AModularExperienceGameMode::UpdatePlayerStartSpot(AController* Player, const FString& Portal,
	FString& OutErrorMessage)
{
	// Do nothing, we'll wait until PostLogin when we try to spawn the player for real.
	// Doing anything right now is no good, systems like team assignment haven't even occurred yet.
	return true;
}

void AModularExperienceGameMode::GenericPlayerInitialization(AController* NewPlayer)
{
	Super::GenericPlayerInitialization(NewPlayer);

	OnGameModePlayerInitialized.Broadcast(this, NewPlayer);
}

void AModularExperienceGameMode::FailedToRestartPlayer(AController* NewPlayer)
{
	Super::FailedToRestartPlayer(NewPlayer);

	// If we tried to spawn a pawn and it failed, lets try again *note* check if there's actually a pawn class
	// before we try this forever.
	if (GetDefaultPawnClassForController(NewPlayer))
	{
		if (APlayerController* NewPC = Cast<APlayerController>(NewPlayer))
		{
			// If it's a player don't loop forever, maybe something changed and they can no longer restart if so stop trying.
			if (PlayerCanRestart(NewPC))
			{
				RequestPlayerRestartNextFrame(NewPlayer, false);
			}
			else
			{
				UE_LOG(LogModularGameplayExperiences, Verbose,
					TEXT("FailedToRestartPlayer(%s) and PlayerCanRestart returned false, so we're not going to try again."),
					*GetPathNameSafe(NewPlayer));
			}
		}
		else
		{
			RequestPlayerRestartNextFrame(NewPlayer, false);
		}
	}
	else
	{
		UE_LOG(LogModularGameplayExperiences, Verbose,
			TEXT("FailedToRestartPlayer(%s) but there's no pawn class so giving up."),
			*GetPathNameSafe(NewPlayer));
	}
}

void AModularExperienceGameMode::OnUserInitializedForDedicatedServer(const UCommonUserInfo* UserInfo, bool bSuccess,
	FText Error, ECommonUserPrivilege RequestedPrivilege, ECommonUserOnlineContext OnlineContext)
{
	if (const UGameInstance* GameInstance = GetGameInstance())
	{
		// Unbind.
		UCommonUserSubsystem* UserSubsystem = GameInstance->GetSubsystem<UCommonUserSubsystem>();
		UserSubsystem->OnUserInitializeComplete.RemoveDynamic(this, &AModularExperienceGameMode::OnUserInitializedForDedicatedServer);

		if (bSuccess)
		{
			// Online login worked, start a full online game.
			UE_LOG(LogModularGameplayExperiences, Log, TEXT("Dedicated server online login succeeded, starting online server"));
			HostDedicatedServerMatch(ECommonSessionOnlineMode::Online);
		}
		else
		{
			// Go ahead and try to host anyway, but without online support.
			// This behavior is fairly game specific, but this behavior provides the most flexibility for testing.
			UE_LOG(LogModularGameplayExperiences, Log, TEXT("Dedicated server online login failed, starting LAN-only server"));
			HostDedicatedServerMatch(ECommonSessionOnlineMode::LAN);
		}
	}
}

void AModularExperienceGameMode::OnExperienceLoaded(const UModularExperienceDefinition* CurrentExperience)
{
	// Spawn any players that are already attached.
	// @todo Here we're handling only *player* controllers,
	// but in GetDefaultPawnClassForController_Implementation we skipped all controllers.
	// GetDefaultPawnClassForController_Implementation might only be getting called for players anyways.
	for (FConstPlayerControllerIterator Iterator = GetWorld()->GetPlayerControllerIterator(); Iterator; ++Iterator)
	{
		APlayerController* PlayerController = Cast<APlayerController>(*Iterator);
		if ((PlayerController == nullptr) || (PlayerController->GetPawn() != nullptr))
		{
			continue;
		}
		if (!PlayerCanRestart(PlayerController))
		{
			continue;
		}
		RestartPlayer(PlayerController);
	}
}

bool AModularExperienceGameMode::IsExperienceLoaded() const
{
	check(GameState);
	const UModularExperienceComponent* ExperienceComponent = GameState->FindComponentByClass<UModularExperienceComponent>();
	check(ExperienceComponent);

	return ExperienceComponent->IsExperienceLoaded();
}

void AModularExperienceGameMode::OnMatchAssignmentGiven(FPrimaryAssetId ExperienceId, const FString& ExperienceIdSource)
{
	if (ExperienceId.IsValid())
	{
		UE_LOG(LogModularGameplayExperiences, Log,
			TEXT("Identified experience %s (Source: %s)"),
			*ExperienceId.ToString(),
			*ExperienceIdSource);

		UModularExperienceComponent* ExperienceComponent = GameState->FindComponentByClass<UModularExperienceComponent>();
		check(ExperienceComponent);
		ExperienceComponent->SetCurrentExperience(ExperienceId);
	}
	else
	{
		UE_LOG(LogModularGameplayExperiences, Error,
			TEXT("Failed to identify experience, loading screen will stay up forever"));
	}
}

void AModularExperienceGameMode::HandleMatchAssignmentIfNotExpectingOne()
{
	FPrimaryAssetId ExperienceId;
	FString ExperienceIdSource;

	// Precedence order (highest wins)
	//  - Matchmaking assignment (if present)
	//  - URL Options override
	//  - Developer Settings (PIE only)
	//  - Command Line override
	//  - World Settings
	//  - Dedicated server
	//  - Default experience

	if (UWorld* World = GetWorld(); !World) { return; }

	if (!ExperienceId.IsValid() && UGameplayStatics::HasOption(OptionsString, TEXT("Experience")))
	{
		const FString ExperienceFromOptions = UGameplayStatics::ParseOption(OptionsString, TEXT("Experience"));
		ExperienceId = FPrimaryAssetId(FPrimaryAssetType(UModularExperienceDefinition::StaticClass()->GetFName()), FName(*ExperienceFromOptions));
		ExperienceIdSource = TEXT("OptionsString");
	}

	// @todo Add support for developer settings.
	// if (!ExperienceId.IsValid() && World->IsPlayInEditor())
	// {
	// 	ExperienceId = GetDefault<UModularGameplayExperiencesDeveloperSettings>()->ExperienceOverride;
	// 	ExperienceIdSource = TEXT("DeveloperSettings");
	// }

	// See if the command line wants to set the experience
	if (!ExperienceId.IsValid())
	{
		FString ExperienceFromCommandLine;
		if (FParse::Value(FCommandLine::Get(), TEXT("Experience="), ExperienceFromCommandLine))
		{
			ExperienceId = FPrimaryAssetId::ParseTypeAndName(ExperienceFromCommandLine);
			if (!ExperienceId.PrimaryAssetType.IsValid())
			{
				ExperienceId = FPrimaryAssetId(FPrimaryAssetType(UModularExperienceDefinition::StaticClass()->GetFName()), FName(*ExperienceFromCommandLine));
			}
			ExperienceIdSource = TEXT("CommandLine");
		}
	}

	// See if the world settings has a default experience.
	if (!ExperienceId.IsValid())
	{
		if (AModularWorldSettings* TypedWorldSettings = Cast<AModularWorldSettings>(GetWorldSettings()))
		{
			ExperienceId = TypedWorldSettings->GetDefaultGameplayExperience();
			ExperienceIdSource = TEXT("WorldSettings");
		}
	}

	UModularAssetManager& AssetManager = UModularAssetManager::Get();
	FAssetData Dummy;
	if (ExperienceId.IsValid() && !AssetManager.GetPrimaryAssetData(ExperienceId, /*out*/ Dummy))
	{
		UE_LOG(LogModularGameplayExperiences, Error,
			TEXT("EXPERIENCE: Wanted to use %s but couldn't find it, falling back to the default)"),
			*ExperienceId.ToString());
		ExperienceId = FPrimaryAssetId();
	}

	// Final fallback to the default experience
	if (!ExperienceId.IsValid())
	{
		if (TryDedicatedServerLogin())
		{
			// This will start to host as a dedicated server
			return;
		}

		//@TODO: Pull this from a config setting or something
		ExperienceId = FPrimaryAssetId(FPrimaryAssetType("ModularExperienceDefinition"), FName("B_ModularDefaultExperience"));
		ExperienceIdSource = TEXT("Default");
	}

	OnMatchAssignmentGiven(ExperienceId, ExperienceIdSource);
}

bool AModularExperienceGameMode::TryDedicatedServerLogin()
{
	// Some basic code to register as an active dedicated server, this would be heavily modified by the game
	const FString DefaultMap = UGameMapsSettings::GetGameDefaultMap();
	const UWorld* World = GetWorld();
	if (const UGameInstance* GameInstance = GetGameInstance();
		GameInstance
		&& World
		&& World->GetNetMode() == NM_DedicatedServer
		&& World->URL.Map == DefaultMap)
	{
		// Only register if this is the default map on a dedicated server
		UCommonUserSubsystem* UserSubsystem = GameInstance->GetSubsystem<UCommonUserSubsystem>();

		// Dedicated servers may need to do an online login
		UserSubsystem->OnUserInitializeComplete.AddDynamic(this, &AModularExperienceGameMode::OnUserInitializedForDedicatedServer);

		// There are no local users on dedicated server,
		// but index 0 means the default platform user which is handled by the online login code.
		if (!UserSubsystem->TryToLoginForOnlinePlay(0))
		{
			OnUserInitializedForDedicatedServer(nullptr, false, FText(), ECommonUserPrivilege::CanPlayOnline, ECommonUserOnlineContext::Default);
		}

		return true;
	}

	return false;
}

void AModularExperienceGameMode::HostDedicatedServerMatch(ECommonSessionOnlineMode OnlineMode)
{
	FPrimaryAssetType UserExperienceType = UModularUserFacingExperienceDefinition::StaticClass()->GetFName();

	// Figure out what UserFacingExperience to load
	FPrimaryAssetId UserExperienceId;
	if (FString UserExperienceFromCommandLine;
		FParse::Value(FCommandLine::Get(), TEXT("UserExperience="), UserExperienceFromCommandLine)
		|| FParse::Value(FCommandLine::Get(), TEXT("Playlist="), UserExperienceFromCommandLine))
	{
		UserExperienceId = FPrimaryAssetId::ParseTypeAndName(UserExperienceFromCommandLine);
		if (!UserExperienceId.PrimaryAssetType.IsValid())
		{
			UserExperienceId = FPrimaryAssetId(FPrimaryAssetType(UserExperienceType), FName(*UserExperienceFromCommandLine));
		}
	}

	// Search for the matching experience, it's fine to force load them because we're in dedicated server startup
	UModularAssetManager& AssetManager = UModularAssetManager::Get();
	if (const TSharedPtr<FStreamableHandle> Handle = AssetManager.LoadPrimaryAssetsWithType(UserExperienceType);
		ensure(Handle.IsValid()))
	{
		Handle->WaitUntilComplete();
	}

	TArray<UObject*> UserExperiences;
	AssetManager.GetPrimaryAssetObjectList(UserExperienceType, UserExperiences);
	const UModularUserFacingExperienceDefinition* FoundExperience = nullptr;
	const UModularUserFacingExperienceDefinition* DefaultExperience = nullptr;

	for (UObject* Object : UserExperiences)
	{
		if (const UModularUserFacingExperienceDefinition* UserExperience = Cast<UModularUserFacingExperienceDefinition>(Object);
			ensure(UserExperience))
		{
			if (UserExperience->GetPrimaryAssetId() == UserExperienceId)
			{
				FoundExperience = UserExperience;
				break;
			}

			if (UserExperience->bIsDefaultExperience && DefaultExperience == nullptr)
			{
				DefaultExperience = UserExperience;
			}
		}
	}

	if (FoundExperience == nullptr)
	{
		FoundExperience = DefaultExperience;
	}

	if (const UGameInstance* GameInstance = GetGameInstance(); ensure(FoundExperience && GameInstance))
	{
		// Actually host the game.
		if (UCommonSession_HostSessionRequest* HostRequest = FoundExperience->CreateHostingRequest(); ensure(HostRequest))
		{
			HostRequest->OnlineMode = OnlineMode;

			// TODO override other parameters?

			UCommonSessionSubsystem* SessionSubsystem = GameInstance->GetSubsystem<UCommonSessionSubsystem>();
			SessionSubsystem->HostSession(nullptr, HostRequest);

			// This will handle the map travel.
		}
	}
}
