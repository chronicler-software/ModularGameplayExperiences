// Copyright Chronicler.


#include "ActorComponent/ModularInputComponent.h"

#include "CommonLocalPlayer.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "ModularGameplayExperiencesLogs.h"
#include "ModularGameplayTags.h"
#include "ModularPlayerController.h"
#include "ModularPlayerState.h"
#include "ActorComponent/ModularInputConfigComponent.h"
#include "ActorComponent/ModularPawnComponent.h"
#include "Components/GameFrameworkComponentManager.h"
#include "GameFramework/Character.h"
#include "GameFramework/PlayerState.h"
#include "Misc/UObjectToken.h"
#include "UserSettings/EnhancedInputUserSettings.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(ModularInputComponent)

const FName UModularInputComponent::NAME_ActorFeatureName("ModularInput");

namespace ModularInputComponent
{
	static constexpr float LookYawRate = 300.0f;
	static constexpr float LookPitchRate = 165.0f;
};

UModularInputComponent::UModularInputComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bReadyToBindInputs = false;
}

bool UModularInputComponent::CanChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState,
	FGameplayTag DesiredState) const
{
	check(Manager);

	APawn* Pawn = GetPawn<APawn>();

	if (!CurrentState.IsValid() && DesiredState == ModularGameplayTags::InitState_Spawned)
	{
		// As long as we have a real pawn, let us transition
		if (Pawn)
		{
			return true;
		}
	}
	else if (CurrentState == ModularGameplayTags::InitState_Spawned
		&& DesiredState == ModularGameplayTags::InitState_DataAvailable)
	{
		// The player state is required.
		if (!GetPlayerState<AModularPlayerState>())
		{
			return false;
		}

		// If we're authority or autonomous, we need to wait for a controller with registered ownership of the player state.
		if (Pawn->GetLocalRole() != ROLE_SimulatedProxy)
		{
			const AController* Controller = GetController<AController>();

			if (const bool bHasControllerPairedWithPS = (Controller != nullptr)
				&& (Controller->PlayerState != nullptr)
				&& (Controller->PlayerState->GetOwner() == Controller); !bHasControllerPairedWithPS)
			{
				return false;
			}
		}

		const bool bIsLocallyControlled = Pawn->IsLocallyControlled();

		if (const bool bIsBot = Pawn->IsBotControlled(); bIsLocallyControlled && !bIsBot)
		{
			// The input component and local player is required when locally controlled.
			if (const AModularPlayerController* ModularPC = GetController<AModularPlayerController>();
				!Pawn->InputComponent || !ModularPC || !ModularPC->GetLocalPlayer())
			{
				return false;
			}
		}

		return true;
	}
	else if (CurrentState == ModularGameplayTags::InitState_DataAvailable && DesiredState == ModularGameplayTags::InitState_DataInitialized)
	{
		// Wait for player state and extension component
		const AModularPlayerState* ModularPS = GetPlayerState<AModularPlayerState>();

		return ModularPS && Manager->HasFeatureReachedInitState(Pawn, UModularPawnComponent::NAME_ActorFeatureName, ModularGameplayTags::InitState_DataInitialized);
	}
	else if (CurrentState == ModularGameplayTags::InitState_DataInitialized && DesiredState == ModularGameplayTags::InitState_GameplayReady)
	{
		// TODO add ability initialization checks?
		return true;
	}

	return false;
}

void UModularInputComponent::CheckDefaultInitialization()
{
	static const TArray<FGameplayTag> StateChain =
	{
		ModularGameplayTags::InitState_Spawned,
		ModularGameplayTags::InitState_DataAvailable,
		ModularGameplayTags::InitState_DataInitialized,
		ModularGameplayTags::InitState_GameplayReady
	};

	// This will try to progress from spawned (which is only set in BeginPlay) through the data initialization stages
	// until it gets to gameplay ready.
	ContinueInitStateChain(StateChain);
}

FGameplayTag UModularInputComponent::ContinueInitStateChain(const TArray<FGameplayTag>& InitStateChain)
{
	UObject* ThisObject = Cast<UObject>(this);
	AActor* MyActor = GetOwningActor();
	UGameFrameworkComponentManager* Manager = UGameFrameworkComponentManager::GetForActor(MyActor);
	const FName MyFeatureName = GetFeatureName();

	if (!Manager || !ThisObject || !MyActor)
	{
		return FGameplayTag();
	}

	int32 ChainIndex = 0;
	FGameplayTag CurrentState = Manager->GetInitStateForFeature(MyActor, MyFeatureName);

	// For each state in chain before the last, see if we can transition to the next state
	while (ChainIndex < InitStateChain.Num() - 1)
	{
		if (CurrentState == InitStateChain[ChainIndex])
		{
			FGameplayTag DesiredState = InitStateChain[ChainIndex + 1];
			if (CanChangeInitState(Manager, CurrentState, DesiredState))
			{
				UE_LOG(LogModularGameplayExperiences, Verbose, TEXT("ContinueInitStateChain: Transitioning %s:%s (role %d) from %s to %s"),
					*MyActor->GetName(), *MyFeatureName.ToString(), MyActor->GetLocalRole(), *CurrentState.ToString(), *DesiredState.ToString());

				// Perform the local change
				HandleChangeInitState(Manager, CurrentState, DesiredState);

				// The local change has completed, notify the system to register change and execute callbacks
				ensure(Manager->ChangeFeatureInitState(MyActor, MyFeatureName, ThisObject, DesiredState));

				// Update state and check again
				CurrentState = Manager->GetInitStateForFeature(MyActor, MyFeatureName);
			}
			else
			{
				UE_LOG(LogModularGameplayExperiences, Verbose, TEXT("ContinueInitStateChain: Cannot transition %s:%s (role %d) from %s to %s"),
					*MyActor->GetName(), *MyFeatureName.ToString(), MyActor->GetLocalRole(), *CurrentState.ToString(), *DesiredState.ToString());
			}
		}

		ChainIndex++;
	}

	return CurrentState;
}

void UModularInputComponent::HandleChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState, FGameplayTag DesiredState)
{
	if (CurrentState != ModularGameplayTags::InitState_DataAvailable
		|| DesiredState != ModularGameplayTags::InitState_DataInitialized)
	{
		return;
	}
	const APawn* Pawn = GetPawn<APawn>();
	if (const APlayerState* PlayerState = GetPlayerState<APlayerState>();
		!ensure(Pawn && PlayerState))
	{
		return;
	}

	if (!GetController<APlayerController>())
	{
		return;
	}
	if (Pawn->InputComponent != nullptr)
	{
		InitializePlayerInput(Pawn->InputComponent);
	}
}

void UModularInputComponent::OnActorInitStateChanged(const FActorInitStateChangedParams& Params)
{
	if (Params.FeatureName == UModularPawnComponent::NAME_ActorFeatureName)
	{
		if (Params.FeatureState == ModularGameplayTags::InitState_DataInitialized)
		{
			// If the extension component says all all other components are initialized, try to progress to next state.
			CheckDefaultInitialization();
		}
	}
}

bool UModularInputComponent::TryToChangeInitState(FGameplayTag DesiredState)
{
	UObject* ThisObject = Cast<UObject>(this);
	AActor* MyActor = GetOwningActor();
	UGameFrameworkComponentManager* Manager = UGameFrameworkComponentManager::GetForActor(MyActor);
	const FName MyFeatureName = GetFeatureName();

	if (!Manager || !ThisObject || !MyActor)
	{
		return false;
	}

	const FGameplayTag CurrentState = Manager->GetInitStateForFeature(MyActor, MyFeatureName);

	// If we're already in that state, just return
	if (CurrentState == DesiredState)
	{
		return false;
	}

	if (!CanChangeInitState(Manager, CurrentState, DesiredState))
	{
		UE_LOG(LogModularGameplayExperiences, Verbose, TEXT("TryToChangeInitState: Cannot transition %s:%s (role %d) from %s to %s"),
			*MyActor->GetName(), *MyFeatureName.ToString(), MyActor->GetLocalRole(), *CurrentState.ToString(), *DesiredState.ToString());
		return false;
	}

	UE_LOG(LogModularGameplayExperiences, Verbose, TEXT("TryToChangeInitState: Transitioning %s:%s (role %d) from %s to %s"),
		*MyActor->GetName(), *MyFeatureName.ToString(), MyActor->GetLocalRole(), *CurrentState.ToString(), *DesiredState.ToString());

	// Perform the local change
	HandleChangeInitState(Manager, CurrentState, DesiredState);

	// The local change has completed, notify the system to register change and execute callbacks
	return ensure(Manager->ChangeFeatureInitState(MyActor, MyFeatureName, ThisObject, DesiredState));
}

void UModularInputComponent::OnRegister()
{
	Super::OnRegister();

	if (!GetPawn<APawn>())
	{
		UE_LOG(LogModularGameplayExperiences, Error,
			TEXT("[UModularInputComponent::OnRegister] This component has been added to a blueprint whose base class is not a Pawn. To use this component, it MUST be placed on a Pawn Blueprint."));

#if WITH_EDITOR
		if (GIsEditor)
		{
			static const FText Message = NSLOCTEXT("ModularInputComponent", "NotOnPawnError", "has been added to a blueprint whose base class is not a Pawn. To use this component, it MUST be placed on a Pawn Blueprint. This will cause a crash if you PIE!");
			static const FName MessageLogName = TEXT("ModularInputComponent");

			FMessageLog(MessageLogName).Error()
				->AddToken(FUObjectToken::Create(this, FText::FromString(GetNameSafe(this))))
				->AddToken(FTextToken::Create(Message));

			FMessageLog(MessageLogName).Open();
		}
#endif
	}
	else
	{
		// Register with the init state system early, this will only work if this is a game world.
		RegisterInitStateFeature();
	}
}

void UModularInputComponent::BeginPlay()
{
	Super::BeginPlay();

	// Listen for when the pawn extension component changes init state
	BindOnActorInitStateChanged(UModularInputComponent::NAME_ActorFeatureName, FGameplayTag(), false);

	// Notifies that we are done spawning, then try the rest of initialization
	ensure(TryToChangeInitState(ModularGameplayTags::InitState_Spawned));
	CheckDefaultInitialization();
}

void UModularInputComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	UnregisterInitStateFeature();

	Super::EndPlay(EndPlayReason);
}

void UModularInputComponent::InitializePlayerInput(UInputComponent* PlayerInputComponent)
{
	const APawn* Pawn = GetPawn<APawn>();
	if (!Pawn) return;

	const APlayerController* PlayerController = GetController<APlayerController>();
	if (!PlayerController) return;

	InputActionMapping(PlayerInputComponent, Pawn, PlayerController);

	if (ensure(!bReadyToBindInputs))
	{
		bReadyToBindInputs = true;
	}

	UGameFrameworkComponentManager::SendGameFrameworkComponentExtensionEvent(const_cast<APlayerController*>(PlayerController), UModularInputConfigComponent::NAME_BindInputsNow);
	UGameFrameworkComponentManager::SendGameFrameworkComponentExtensionEvent(const_cast<APawn*>(Pawn), UModularInputConfigComponent::NAME_BindInputsNow);
}

void UModularInputComponent::InputActionMapping(UInputComponent* PlayerInputComponent, const APawn* Pawn, const APlayerController* PlayerController)
{
	const ULocalPlayer* LocalPlayer = (PlayerController ? PlayerController->GetLocalPlayer() : nullptr);
	if (!LocalPlayer) return;
	UEnhancedInputLocalPlayerSubsystem* Subsystem = LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();

	Subsystem->ClearAllMappings();

	for (const auto& [InputMapping, Priority, bRegisterWithSettings] : DefaultInputMappings)
	{
		const UInputMappingContext* InputMappingContext = InputMapping.Get();
		if (!InputMappingContext || !bRegisterWithSettings) continue;

		if (UEnhancedInputUserSettings* Settings = Subsystem->GetUserSettings())
		{
			Settings->RegisterInputMappingContext(InputMappingContext);
		}

		FModifyContextOptions Options = {};
		Options.bIgnoreAllPressedKeysUntilRelease = false;
		// Actually add the config to the local player.
		Subsystem->AddMappingContext(InputMappingContext, Priority, Options);
	}

	const UModularPawnComponent* PawnExtComp = UModularPawnComponent::FindModularPawnComponent(Pawn);
	if (!PawnExtComp) return;
	const UModularPawnData* PawnData = PawnExtComp->GetPawnData<UModularPawnData>();
	if (!PawnData) return;
	const UModularInputConfig* InputConfig = PawnData->InputConfig;
	if (!InputConfig) return;
	if (UModularInputConfigComponent* InputConfigComponent = Cast<UModularInputConfigComponent>(PlayerInputComponent);
		ensureMsgf(InputConfigComponent, TEXT("Unexpected Input Component class! The Input Mappings will not be bound to their inputs. Change the input component to UInputConfigComponent or a subclass of it.")))
	{
		// Add the key mappings that may have been set by the player
		InputConfigComponent->AddInputMappings(InputConfig, Subsystem);

		InputConfigComponent->BindNativeAction(InputConfig, ModularGameplayTags::InputTag_Move, ETriggerEvent::Triggered, this, &ThisClass::Input_Move, /*bLogIfNotFound=*/ false);
		InputConfigComponent->BindNativeAction(InputConfig, ModularGameplayTags::InputTag_Look_Mouse, ETriggerEvent::Triggered, this, &ThisClass::Input_LookMouse, /*bLogIfNotFound=*/ false);
		InputConfigComponent->BindNativeAction(InputConfig, ModularGameplayTags::InputTag_Look_Stick, ETriggerEvent::Triggered, this, &ThisClass::Input_LookStick, /*bLogIfNotFound=*/ false);
		InputConfigComponent->BindNativeAction(InputConfig, ModularGameplayTags::InputTag_Crouch, ETriggerEvent::Triggered, this, &ThisClass::Input_Crouch, /*bLogIfNotFound=*/ false);
	}
}

void UModularInputComponent::Input_Move(const FInputActionValue& InputActionValue)
{
	APawn* Pawn = GetPawn<APawn>();

	if (const AController* Controller = Pawn ? Pawn->GetController() : nullptr)
	{
		const FVector2D Value = InputActionValue.Get<FVector2D>();
		const FRotator MovementRotation(0.0f, Controller->GetControlRotation().Yaw, 0.0f);

		if (Value.X != 0.0f)
		{
			const FVector MovementDirection = MovementRotation.RotateVector(FVector::RightVector);
			Pawn->AddMovementInput(MovementDirection, Value.X);
		}

		if (Value.Y != 0.0f)
		{
			const FVector MovementDirection = MovementRotation.RotateVector(FVector::ForwardVector);
			Pawn->AddMovementInput(MovementDirection, Value.Y);
		}
	}
}

void UModularInputComponent::Input_LookMouse(const FInputActionValue& InputActionValue)
{
	APawn* Pawn = GetPawn<APawn>();

	if (!Pawn)
	{
		return;
	}
	
	const FVector2D Value = InputActionValue.Get<FVector2D>();

	if (Value.X != 0.0f)
	{
		Pawn->AddControllerYawInput(Value.X);
	}

	if (Value.Y != 0.0f)
	{
		Pawn->AddControllerPitchInput(Value.Y);
	}
}

void UModularInputComponent::Input_LookStick(const FInputActionValue& InputActionValue)
{
	APawn* Pawn = GetPawn<APawn>();

	if (!Pawn)
	{
		return;
	}
	
	const FVector2D Value = InputActionValue.Get<FVector2D>();

	const UWorld* World = GetWorld();
	check(World);

	if (Value.X != 0.0f)
	{
		Pawn->AddControllerYawInput(Value.X * ModularInputComponent::LookYawRate * World->GetDeltaSeconds());
	}

	if (Value.Y != 0.0f)
	{
		Pawn->AddControllerPitchInput(Value.Y * ModularInputComponent::LookPitchRate * World->GetDeltaSeconds());
	}
}

void UModularInputComponent::Input_Crouch(const FInputActionValue& InputActionValue)
{
	if (ACharacter* Character = GetPawn<ACharacter>())
	{
		if (Character->bIsCrouched)
		{
			Character->Crouch();
		}
		else
		{
			Character->UnCrouch();
		}
	}
}
