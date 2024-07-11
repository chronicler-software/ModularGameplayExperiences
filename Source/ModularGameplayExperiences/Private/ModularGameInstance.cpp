#include "ModularGameInstance.h"

#include "CommonSessionSubsystem.h"
#include "ModularGameplayTags.h"
#include "Components/GameFrameworkComponentManager.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(ModularGameInstance)

UModularGameInstance::UModularGameInstance(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UModularGameInstance::OnPreClientTravelToSession(FString& URL)
{
}

void UModularGameInstance::Init()
{
	Super::Init();

	// Register our custom init states

	if (UGameFrameworkComponentManager* ComponentManager = GetSubsystem<UGameFrameworkComponentManager>(this);
		ensure(ComponentManager))
	{
		ComponentManager->RegisterInitState(ModularGameplayTags::InitState_Spawned, false, FGameplayTag());
		ComponentManager->RegisterInitState(ModularGameplayTags::InitState_DataAvailable, false, ModularGameplayTags::InitState_Spawned);
		ComponentManager->RegisterInitState(ModularGameplayTags::InitState_DataInitialized, false, ModularGameplayTags::InitState_DataAvailable);
		ComponentManager->RegisterInitState(ModularGameplayTags::InitState_GameplayReady, false, ModularGameplayTags::InitState_DataInitialized);
	}

	if (UCommonSessionSubsystem* SessionSubsystem = GetSubsystem<UCommonSessionSubsystem>())
	{
		SessionSubsystem->OnPreClientTravelEvent.AddUObject(this, &UModularGameInstance::OnPreClientTravelToSession);
	}
}
