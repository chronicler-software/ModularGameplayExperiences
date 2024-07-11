// Copyright Chronicler.


#include "Player/ModularExperiencePlayerState.h"

#include "Engine/World.h"
#include "ModularGameplayExperiencesLogs.h"
#include "ActorComponent/ModularExperienceComponent.h"
#include "ActorComponent/ModularPawnComponent.h"
#include "GameMode/ModularExperienceGameMode.h"
#include "Net/UnrealNetwork.h"
#include "Net/Core/PushModel/PushModel.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(ModularExperiencePlayerState)

AModularExperiencePlayerState::AModularExperiencePlayerState(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, MyPlayerConnectionType(EModularPlayerConnectionType::Player)
{
}

void AModularExperiencePlayerState::SetPawnData(const UModularPawnData* InPawnData)
{
	check(InPawnData);

	if (GetLocalRole() != ROLE_Authority)
	{
		return;
	}

	if (PawnData)
	{
		UE_LOG(LogModularGameplayExperiences, Error,
			TEXT("Trying to set PawnData [%s] on player state [%s] that already has valid PawnData [%s]."),
			*GetNameSafe(InPawnData),
			*GetNameSafe(this),
			*GetNameSafe(PawnData));
		return;
	}

	MARK_PROPERTY_DIRTY_FROM_NAME(ThisClass, PawnData, this);
	PawnData = InPawnData;

	ForceNetUpdate();
}

FRotator AModularExperiencePlayerState::GetReplicatedViewRotation() const
{
	// Could replace this with custom replication
	return ReplicatedViewRotation;
}

/**
 * Sets the replicated view rotation, only valid on the server.
 *
 * @param NewRotation
 */
void AModularExperiencePlayerState::SetReplicatedViewRotation(const FRotator& NewRotation)
{
	if (NewRotation != ReplicatedViewRotation)
	{
		MARK_PROPERTY_DIRTY_FROM_NAME(ThisClass, ReplicatedViewRotation, this);
		ReplicatedViewRotation = NewRotation;
	}
}

void AModularExperiencePlayerState::OnRep_PawnData()
{
}

/**
 * Required for replication.
 *
 * @param OutLifetimeProps
 *
 * @see https://unrealcommunity.wiki/replication-vyrv8r37
 */
void AModularExperiencePlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	FDoRepLifetimeParams SharedParams;
	SharedParams.bIsPushBased = true;

	DOREPLIFETIME_WITH_PARAMS_FAST(ThisClass, PawnData, SharedParams);
	DOREPLIFETIME_WITH_PARAMS_FAST(ThisClass, MyPlayerConnectionType, SharedParams)

	SharedParams.Condition = ELifetimeCondition::COND_SkipOwner;
	DOREPLIFETIME_WITH_PARAMS_FAST(ThisClass, ReplicatedViewRotation, SharedParams);

	DOREPLIFETIME(ThisClass, StatTags);
}

void AModularExperiencePlayerState::OnExperienceLoaded(const UModularExperienceDefinition* CurrentExperience)
{
	if (const AModularExperienceGameMode* GameMode = GetWorld()->GetAuthGameMode<AModularExperienceGameMode>())
	{
		if (const UModularPawnData* NewPawnData = GameMode->GetPawnDataForController(GetOwningController()))
		{
			SetPawnData(NewPawnData);
		}
		else
		{
			UE_LOG(LogModularGameplayExperiences, Error, TEXT("AModularExperiencePlayerState::OnExperienceLoaded(): Unable to find PawnData to initialize player state [%s]!"), *GetNameSafe(this));
		}
	}
}

void AModularExperiencePlayerState::ClientInitialize(AController* Controller)
{
	Super::ClientInitialize(Controller);

	if (UModularPawnComponent* PawnComponent = UModularPawnComponent::FindModularPawnComponent(GetPawn()))
	{
		PawnComponent->CheckDefaultInitialization();
	}
}

void AModularExperiencePlayerState::PreInitializeComponents()
{
	Super::PreInitializeComponents();
}

void AModularExperiencePlayerState::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	if (const UWorld* World = GetWorld(); World && World->IsGameWorld() && World->GetNetMode() != NM_Client)
	{
		const AGameStateBase* GameState = GetWorld()->GetGameState();
		check(GameState);
		UModularExperienceComponent* ExperienceComponent = GameState->FindComponentByClass<UModularExperienceComponent>();
		check(ExperienceComponent);
		ExperienceComponent->CallOrRegister_OnExperienceLoaded(FOnModularExperienceLoaded::FDelegate::CreateUObject(this, &ThisClass::OnExperienceLoaded));
	}
}
