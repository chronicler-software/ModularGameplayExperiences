// Copyright Chronicler.

#pragma once

#include "Components/GameStateComponent.h"
#include "Player/ModularPlayerStart.h"

#include "ModularPlayerSpawningComponent.generated.h"

class AController;
class APlayerController;
class APlayerState;
class APlayerStart;
class AActor;

UCLASS()
class MODULARGAMEPLAYEXPERIENCES_API UModularPlayerSpawningComponent : public UGameStateComponent
{
	GENERATED_BODY()

public:
	explicit UModularPlayerSpawningComponent(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(Transient)
	TArray<TWeakObjectPtr<AModularPlayerStart>> CachedPlayerStarts;

	/**
	 * @ingroup UActorComponent
	 * @{
	 */
	virtual void InitializeComponent() override;

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	/**
	 * @}
	 */

public:
	/** We proxy these calls from ALyraGameMode, to this component so that each experience can more easily customize the respawn system they want. */
	AActor* ChoosePlayerStart(AController* Player);
	bool ControllerCanRestart(AController* Player);
	void FinishRestartPlayer(AController* NewPlayer, const FRotator& StartRotation);
	friend class ALyraGameMode;
	/** ~ALyraGameMode */

protected:
	// Utility
	APlayerStart* GetFirstRandomUnoccupiedPlayerStart(AController* Controller, const TArray<AModularPlayerStart*>& FoundStartPoints) const;
	
	virtual AActor* OnChoosePlayerStart(AController* Player, TArray<AModularPlayerStart*>& PlayerStarts) { return nullptr; }
	virtual void OnFinishRestartPlayer(AController* Player, const FRotator& StartRotation) { }

	UFUNCTION(BlueprintImplementableEvent, meta=(DisplayName=OnFinishRestartPlayer))
	void K2_OnFinishRestartPlayer(AController* Player, const FRotator& StartRotation);

private:
	void OnLevelAdded(ULevel* InLevel, UWorld* InWorld);
	void HandleOnActorSpawned(AActor* SpawnedActor);

#if WITH_EDITOR
	APlayerStart* FindPlayFromHereStart(AController* Player);
#endif
};
