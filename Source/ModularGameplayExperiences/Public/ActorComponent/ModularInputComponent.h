// Copyright Chronicler.


#pragma once

#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "Components/GameFrameworkInitStateInterface.h"
#include "Components/PawnComponent.h"
#include "GameFeature/GameFeatureAction_AddInputContextMapping.h"
#include "ModularInputComponent.generated.h"

/**
 * Binds modular input configs and mappings to the owning pawn.
 *
 * This component is similar to Lyra's HeroComponent but has been stripped down and focused.
 *
 * @todo See if all inputs can be moved to DefaultGameplayTags.ini for consistency with other tags.
 *
 * @see LyraGame/Character/LyraHeroComponent
 */
UCLASS(Blueprintable, Meta=(BlueprintSpawnableComponent))
class MODULARGAMEPLAYEXPERIENCES_API UModularInputComponent : public UPawnComponent, public IGameFrameworkInitStateInterface
{
	GENERATED_BODY()

public:
	explicit UModularInputComponent(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintPure, Category="Experience")
	static UModularInputComponent* FindExperienceInputComponent(const AActor* Actor)
	{
		return (Actor ? Actor->FindComponentByClass<UModularInputComponent>() : nullptr);
	}

protected:
	virtual void InitializePlayerInput(UInputComponent* PlayerInputComponent);

	void Input_Move(const FInputActionValue& InputActionValue);
	void Input_LookMouse(const FInputActionValue& InputActionValue);
	void Input_LookStick(const FInputActionValue& InputActionValue);
	void Input_Crouch(const FInputActionValue& InputActionValue);

	void InputActionMapping(UInputComponent* PlayerInputComponent, const APawn* Pawn, const APlayerController* PlayerController);

	UPROPERTY(EditAnywhere)
	TArray<FInputMappingContextAndPriority> DefaultInputMappings;

	/** True when player input bindings have been applied, will never be true for non - players */
	bool bReadyToBindInputs;

	/**
	 * @ingroup IGameFrameworkInitStateInterface
	 * @{
	 */
public:
	/** The name of this component-implemented feature */
	static const FName NAME_ActorFeatureName;
	virtual FName GetFeatureName() const override { return NAME_ActorFeatureName; }
	virtual bool CanChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState,
		FGameplayTag DesiredState) const override;
	virtual void CheckDefaultInitialization() override;
	// @todo Remove this, for debugging purposes.
	virtual FGameplayTag ContinueInitStateChain(const TArray<FGameplayTag>& InitStateChain) override;
	virtual void HandleChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState,
		FGameplayTag DesiredState) override;
	virtual void OnActorInitStateChanged(const FActorInitStateChangedParams& Params) override;
	// @todo Remove this, for debugging purposes.
	virtual bool TryToChangeInitState(FGameplayTag DesiredState) override;
	/** @} */

	/** @ingroup UActorComponent @{ */
protected:
	virtual void OnRegister() override;
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	/** @} */
};
