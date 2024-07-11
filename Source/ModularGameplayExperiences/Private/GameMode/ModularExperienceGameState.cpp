// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameMode/ModularExperienceGameState.h"

#include "ModularGameplayExperiencesLogs.h"
#include "ActorComponent/ModularExperienceComponent.h"
#include "ActorComponent/ModularPlayerSpawningComponent.h"
#include "Async/TaskGraphInterfaces.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "GameFramework/PlayerState.h"
#include "Messages/ModularVerbMessage.h"
#include "Net/UnrealNetwork.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(ModularExperienceGameState)

class APlayerState;
class FLifetimeProperty;

extern ENGINE_API float GAverageFPS;


AModularExperienceGameState::AModularExperienceGameState(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	ModularExperienceComponent = CreateDefaultSubobject<UModularExperienceComponent>(TEXT("ModularExperienceComponent"));
	ModularPlayerSpawningComponent = CreateDefaultSubobject<UModularPlayerSpawningComponent>(TEXT("ModularPlayerSpawningComponent"));

	ServerFPS = 0.0f;
}

void AModularExperienceGameState::PreInitializeComponents()
{
	Super::PreInitializeComponents();
}

void AModularExperienceGameState::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

void AModularExperienceGameState::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

void AModularExperienceGameState::AddPlayerState(APlayerState* PlayerState)
{
	Super::AddPlayerState(PlayerState);
}

void AModularExperienceGameState::RemovePlayerState(APlayerState* PlayerState)
{
	//@TODO: This isn't getting called right now (only the 'rich' AGameMode uses it, not AGameModeBase)
	// Need to at least comment the engine code, and possibly move things around
	Super::RemovePlayerState(PlayerState);
}

void AModularExperienceGameState::SeamlessTravelTransitionCheckpoint(bool bToTransitionMap)
{
	// Remove inactive and bots
	for (int32 i = PlayerArray.Num() - 1; i >= 0; i--)
	{
		if (APlayerState* PlayerState = PlayerArray[i];
			PlayerState && (PlayerState->IsABot() || PlayerState->IsInactive()))
		{
			RemovePlayerState(PlayerState);
		}
	}
}

void AModularExperienceGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, ServerFPS);
	DOREPLIFETIME_CONDITION(ThisClass, RecorderPlayerState, COND_ReplayOnly);
}

void AModularExperienceGameState::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (GetLocalRole() == ROLE_Authority)
	{
		ServerFPS = GAverageFPS;
	}
}

void AModularExperienceGameState::MulticastMessageToClients_Implementation(const FModularVerbMessage Message)
{
	if (GetNetMode() == NM_Client)
	{
		UGameplayMessageSubsystem::Get(this).BroadcastMessage(Message.Verb, Message);
	}
}

void AModularExperienceGameState::MulticastReliableMessageToClients_Implementation(const FModularVerbMessage Message)
{
	MulticastMessageToClients_Implementation(Message);
}

float AModularExperienceGameState::GetServerFPS() const
{
	return ServerFPS;
}

void AModularExperienceGameState::SetRecorderPlayerState(APlayerState* NewPlayerState)
{
	if (RecorderPlayerState == nullptr)
	{
		// Set it and call the rep callback so it can do any record-time setup
		RecorderPlayerState = NewPlayerState;
		OnRep_RecorderPlayerState();
	}
	else
	{
		UE_LOG(LogModularGameplayExperiences, Warning, TEXT("SetRecorderPlayerState was called on %s but should only be called once per game on the primary user"), *GetName());
	}
}

APlayerState* AModularExperienceGameState::GetRecorderPlayerState() const
{
	// TODO: Maybe auto select it if null?

	return RecorderPlayerState;
}

void AModularExperienceGameState::OnRep_RecorderPlayerState()
{
	OnRecorderPlayerStateChangedEvent.Broadcast(RecorderPlayerState);
}
