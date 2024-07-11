// Copyright Chronicler.


#pragma once

#include "GameplayTagStack.h"
#include "ModularPlayerState.h"
#include "DataAsset/ModularPawnData.h"
#include "GameMode/ModularExperienceDefinition.h"

#include "ModularExperiencePlayerState.generated.h"

/** Defines the types of client connected */
UENUM()
enum class EModularPlayerConnectionType : uint8
{
	// An active player.
	Player = 0,

	// Spectator connected to a running game.
	LiveSpectator,

	// Spectating a demo recording offline.
	ReplaySpectator,

	// A deactivated player (disconnected).
	InactivePlayer
};

/**
 * Player state that supports custom Pawn data.
 */
UCLASS(Config="Game", Blueprintable)
class MODULARGAMEPLAYEXPERIENCES_API AModularExperiencePlayerState : public AModularPlayerState
{
	GENERATED_BODY()

public:
	explicit AModularExperiencePlayerState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	template <class T>
	const T* GetPawnData() const { return Cast<T>(PawnData); }

	virtual void SetPawnData(const UModularPawnData* InPawnData);

	// Gets the replicated view rotation of this player, used for spectating.
	FRotator GetReplicatedViewRotation() const;

	// Sets the replicated view rotation, only valid on the server.
	void SetReplicatedViewRotation(const FRotator& NewRotation);

	/**
	 * @ingroup APlayerState
	 * @{
	 */
	virtual void ClientInitialize(AController* Controller) override;
	/**
	 * @}
	 */

	/**
	 * @ingroup AActor
	 * @{
	 */
	virtual void PreInitializeComponents() override;
	virtual void PostInitializeComponents() override;
	/**
	 * @}
	 */

protected:
	void OnExperienceLoaded(const UModularExperienceDefinition* CurrentExperience);

	UFUNCTION()
	void OnRep_PawnData();

	UPROPERTY(ReplicatedUsing=OnRep_PawnData)
	TObjectPtr<const UModularPawnData> PawnData;

private:
	UPROPERTY(Replicated)
	EModularPlayerConnectionType MyPlayerConnectionType;

	UPROPERTY(Replicated)
	FGameplayTagStackContainer StatTags;

	UPROPERTY(Replicated)
	FRotator ReplicatedViewRotation;

};
