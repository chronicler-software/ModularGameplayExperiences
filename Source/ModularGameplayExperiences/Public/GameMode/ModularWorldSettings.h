// Copyright Chronicler.


#pragma once

#include "ModularExperienceDefinition.h"
#include "ModularWorldSettings.generated.h"

/**
 * Extends default world settings to include Lyra-type Gameplay Experiences.
 *
 * Set 'Engine - General Settings/Default Classes/World Settings Class' to this class to use it.
 */
UCLASS()
class MODULARGAMEPLAYEXPERIENCES_API AModularWorldSettings : public AWorldSettings
{
	GENERATED_BODY()

public:
	explicit AModularWorldSettings(const FObjectInitializer& ObjectInitializer);

public:
	/**
	 * Returns the Default GameplayExperience for the level.
	 *
	 * Can be overridden by the user-facing experience.
	 */
	FPrimaryAssetId GetDefaultGameplayExperience() const;

protected:
	/**
	 * The Gameplay Experience replaces much of the GameMode functionality with more flexible and modular systems.
	 */
	UPROPERTY(EditDefaultsOnly, Category="GameMode")
	TSoftClassPtr<UModularExperienceDefinition> DefaultGameplayExperience;
};
