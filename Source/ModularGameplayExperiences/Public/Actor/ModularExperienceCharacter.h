// Copyright Chronicler.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagAssetInterface.h"
#include "ModularCharacter.h"
#include "ActorComponent/ModularPawnComponent.h"
#include "ModularExperienceCharacter.generated.h"

UCLASS(Blueprintable, BlueprintType, Config="Game", meta=(ShortTooltip="The player character base class."))
class MODULARGAMEPLAYEXPERIENCES_API AModularExperienceCharacter : public AModularCharacter, public IGameplayTagAssetInterface
{
	GENERATED_BODY()

public:
	explicit AModularExperienceCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override;
	virtual bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override;
	virtual bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override;
	virtual bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	virtual void PossessedBy(AController* NewController) override;
	virtual void UnPossessed() override;
	virtual void OnRep_Controller() override;
	virtual void OnRep_PlayerState() override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Character", meta=(AllowPrivateAccess="true"))
	TObjectPtr<UModularPawnComponent> PawnExtensionComponent;

};
