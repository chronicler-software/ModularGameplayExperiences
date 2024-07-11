// Copyright Chronicler.


#pragma once

#include "ModularExperienceActionSet.h"
#include "DataAsset/ModularPawnData.h"
#include "ModularExperienceDefinition.generated.h"

/**
 * @todo Ensure a B_ModularDefaultExperience asset exists in the project.
 */
UCLASS()
class MODULARGAMEPLAYEXPERIENCES_API UModularExperienceDefinition : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UModularExperienceDefinition();
	virtual EDataValidationResult IsDataValid(FDataValidationContext& Context) const override;
	virtual void UpdateAssetBundleData() override;

	// The default pawn class to spawn for players.
	//@TODO: Make soft?
	UPROPERTY(EditDefaultsOnly, Category="Gameplay")
	TObjectPtr<const UModularPawnData> DefaultPawnData;

	// List of actions to perform as this experience is loaded/activated/deactivated/unloaded.
	UPROPERTY(EditDefaultsOnly, Category="Actions")
	TArray<TObjectPtr<UGameFeatureAction>> Actions;

	UPROPERTY(EditDefaultsOnly, Category="Gameplay")
	TArray<TObjectPtr<UModularExperienceActionSet>> ActionSets;

	// List of Game Feature Plugins this experience wants to have active.
	UPROPERTY(EditDefaultsOnly, Category="Gameplay")
	TArray<FString> GameFeaturesToEnable;
};
