// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayExperiences/Public/GameMode/ModularExperienceManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularExperienceManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
MODULARGAMEPLAYEXPERIENCES_API UClass* Z_Construct_UClass_UModularExperienceManager();
MODULARGAMEPLAYEXPERIENCES_API UClass* Z_Construct_UClass_UModularExperienceManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularGameplayExperiences();
// End Cross Module References

// Begin Class UModularExperienceManager
void UModularExperienceManager::StaticRegisterNativesUModularExperienceManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModularExperienceManager);
UClass* Z_Construct_UClass_UModularExperienceManager_NoRegister()
{
	return UModularExperienceManager::StaticClass();
}
struct Z_Construct_UClass_UModularExperienceManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Manager for experiences - primarily for arbitration between multiple PIE sessions\n */" },
#endif
		{ "IncludePath", "GameMode/ModularExperienceManager.h" },
		{ "ModuleRelativePath", "Public/GameMode/ModularExperienceManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Manager for experiences - primarily for arbitration between multiple PIE sessions" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularExperienceManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UModularExperienceManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayExperiences,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularExperienceManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModularExperienceManager_Statics::ClassParams = {
	&UModularExperienceManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModularExperienceManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UModularExperienceManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModularExperienceManager()
{
	if (!Z_Registration_Info_UClass_UModularExperienceManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularExperienceManager.OuterSingleton, Z_Construct_UClass_UModularExperienceManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularExperienceManager.OuterSingleton;
}
template<> MODULARGAMEPLAYEXPERIENCES_API UClass* StaticClass<UModularExperienceManager>()
{
	return UModularExperienceManager::StaticClass();
}
UModularExperienceManager::UModularExperienceManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModularExperienceManager);
UModularExperienceManager::~UModularExperienceManager() {}
// End Class UModularExperienceManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularExperienceManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularExperienceManager, UModularExperienceManager::StaticClass, TEXT("UModularExperienceManager"), &Z_Registration_Info_UClass_UModularExperienceManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularExperienceManager), 2617292423U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularExperienceManager_h_3469667849(TEXT("/Script/ModularGameplayExperiences"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularExperienceManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularExperienceManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
