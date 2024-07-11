// Copyright Chronicler.


#pragma once

#include "GameFeatureAction.h"
#include "ModularExperienceActionSet.generated.h"

UCLASS()
class UModularExperienceActionSet : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UModularExperienceActionSet();

#if WITH_EDITOR
	virtual EDataValidationResult IsDataValid(class FDataValidationContext& Context) const override;
#endif

#if WITH_EDITORONLY_DATA
	virtual void UpdateAssetBundleData() override;
#endif

public:
	UPROPERTY(EditAnywhere, Instanced, Category="Actions to Perform")
	TArray<TObjectPtr<UGameFeatureAction>> Actions;

	// List of Game Feature Plugins this Action Set wants to have active
	UPROPERTY(EditAnywhere, Category="Feature Dependencies")
	TArray<FString> GameFeaturesToEnable;
};
