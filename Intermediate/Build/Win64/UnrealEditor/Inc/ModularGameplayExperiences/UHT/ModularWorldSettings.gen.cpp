// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayExperiences/Public/GameMode/ModularWorldSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularWorldSettings() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AWorldSettings();
MODULARGAMEPLAYEXPERIENCES_API UClass* Z_Construct_UClass_AModularWorldSettings();
MODULARGAMEPLAYEXPERIENCES_API UClass* Z_Construct_UClass_AModularWorldSettings_NoRegister();
MODULARGAMEPLAYEXPERIENCES_API UClass* Z_Construct_UClass_UModularExperienceDefinition_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularGameplayExperiences();
// End Cross Module References

// Begin Class AModularWorldSettings
void AModularWorldSettings::StaticRegisterNativesAModularWorldSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AModularWorldSettings);
UClass* Z_Construct_UClass_AModularWorldSettings_NoRegister()
{
	return AModularWorldSettings::StaticClass();
}
struct Z_Construct_UClass_AModularWorldSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Extends default world settings to include Lyra-type Gameplay Experiences.\n *\n * Set 'Engine - General Settings/Default Classes/World Settings Class' to this class to use it.\n */" },
#endif
		{ "HideCategories", "Actor Advanced Display Events Object Attachment Info Input Blueprint Layers Tags Replication LevelInstance Input Movement Collision Transformation HLOD DataLayers" },
		{ "IncludePath", "GameMode/ModularWorldSettings.h" },
		{ "ModuleRelativePath", "Public/GameMode/ModularWorldSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extends default world settings to include Lyra-type Gameplay Experiences.\n\nSet 'Engine - General Settings/Default Classes/World Settings Class' to this class to use it." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGameplayExperience_MetaData[] = {
		{ "Category", "GameMode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The Gameplay Experience replaces much of the GameMode functionality with more flexible and modular systems.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GameMode/ModularWorldSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Gameplay Experience replaces much of the GameMode functionality with more flexible and modular systems." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefaultGameplayExperience;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModularWorldSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_AModularWorldSettings_Statics::NewProp_DefaultGameplayExperience = { "DefaultGameplayExperience", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModularWorldSettings, DefaultGameplayExperience), Z_Construct_UClass_UModularExperienceDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultGameplayExperience_MetaData), NewProp_DefaultGameplayExperience_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AModularWorldSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularWorldSettings_Statics::NewProp_DefaultGameplayExperience,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModularWorldSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AModularWorldSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWorldSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayExperiences,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModularWorldSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AModularWorldSettings_Statics::ClassParams = {
	&AModularWorldSettings::StaticClass,
	"game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AModularWorldSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AModularWorldSettings_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AModularWorldSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_AModularWorldSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AModularWorldSettings()
{
	if (!Z_Registration_Info_UClass_AModularWorldSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AModularWorldSettings.OuterSingleton, Z_Construct_UClass_AModularWorldSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AModularWorldSettings.OuterSingleton;
}
template<> MODULARGAMEPLAYEXPERIENCES_API UClass* StaticClass<AModularWorldSettings>()
{
	return AModularWorldSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AModularWorldSettings);
AModularWorldSettings::~AModularWorldSettings() {}
// End Class AModularWorldSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularWorldSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AModularWorldSettings, AModularWorldSettings::StaticClass, TEXT("AModularWorldSettings"), &Z_Registration_Info_UClass_AModularWorldSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AModularWorldSettings), 1610711548U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularWorldSettings_h_4182618397(TEXT("/Script/ModularGameplayExperiences"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularWorldSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularWorldSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
