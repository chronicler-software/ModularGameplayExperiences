// Copyright Chronicler.


#include "Actor/ModularExperienceCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

AModularExperienceCharacter::AModularExperienceCharacter(const FObjectInitializer& ObjectInitializer)
  : Super(ObjectInitializer.SetDefaultSubobjectClass<UCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
{
 	// Avoid ticking this character every frame.
	// @todo Add blueprint warnings for the default.
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	PawnExtensionComponent = CreateDefaultSubobject<UModularPawnComponent>(TEXT("ModularPawnComponent"));
}

void AModularExperienceCharacter::GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const
{
}

bool AModularExperienceCharacter::HasMatchingGameplayTag(FGameplayTag TagToCheck) const
{
	return false;
}

bool AModularExperienceCharacter::HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const
{
	return false;
}

bool AModularExperienceCharacter::HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const
{
	return false;
}

void AModularExperienceCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AModularExperienceCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AModularExperienceCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	PawnExtensionComponent->HandleControllerChanged();
}

void AModularExperienceCharacter::UnPossessed()
{
	PawnExtensionComponent->HandleControllerChanged();

	Super::UnPossessed();
}


void AModularExperienceCharacter::OnRep_Controller()
{
	Super::OnRep_Controller();

	PawnExtensionComponent->HandleControllerChanged();
}

void AModularExperienceCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	PawnExtensionComponent->HandlePlayerStateReplicated();
}

void AModularExperienceCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PawnExtensionComponent->SetupPlayerInputComponent();
}
