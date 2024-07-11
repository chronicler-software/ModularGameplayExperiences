// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayExperiences/Public/GameMode/ModularExperienceActionSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularExperienceActionSet() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction_NoRegister();
MODULARGAMEPLAYEXPERIENCES_API UClass* Z_Construct_UClass_UModularExperienceActionSet();
MODULARGAMEPLAYEXPERIENCES_API UClass* Z_Construct_UClass_UModularExperienceActionSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularGameplayExperiences();
// End Cross Module References

// Begin Class UModularExperienceActionSet
void UModularExperienceActionSet::StaticRegisterNativesUModularExperienceActionSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModularExperienceActionSet);
UClass* Z_Construct_UClass_UModularExperienceActionSet_NoRegister()
{
	return UModularExperienceActionSet::StaticClass();
}
struct Z_Construct_UClass_UModularExperienceActionSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GameMode/ModularExperienceActionSet.h" },
		{ "ModuleRelativePath", "Public/GameMode/ModularExperienceActionSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actions_Inner_MetaData[] = {
		{ "Category", "Actions to Perform" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameMode/ModularExperienceActionSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[] = {
		{ "Category", "Actions to Perform" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameMode/ModularExperienceActionSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameFeaturesToEnable_MetaData[] = {
		{ "Category", "Feature Dependencies" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of Game Feature Plugins this Action Set wants to have active\n" },
#endif
		{ "ModuleRelativePath", "Public/GameMode/ModularExperienceActionSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of Game Feature Plugins this Action Set wants to have active" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameFeaturesToEnable_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameFeaturesToEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularExperienceActionSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UModularExperienceActionSet_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGameFeatureAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actions_Inner_MetaData), NewProp_Actions_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModularExperienceActionSet_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0114008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularExperienceActionSet, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actions_MetaData), NewProp_Actions_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModularExperienceActionSet_Statics::NewProp_GameFeaturesToEnable_Inner = { "GameFeaturesToEnable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModularExperienceActionSet_Statics::NewProp_GameFeaturesToEnable = { "GameFeaturesToEnable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularExperienceActionSet, GameFeaturesToEnable), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameFeaturesToEnable_MetaData), NewProp_GameFeaturesToEnable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModularExperienceActionSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularExperienceActionSet_Statics::NewProp_Actions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularExperienceActionSet_Statics::NewProp_Actions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularExperienceActionSet_Statics::NewProp_GameFeaturesToEnable_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularExperienceActionSet_Statics::NewProp_GameFeaturesToEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularExperienceActionSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UModularExperienceActionSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayExperiences,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularExperienceActionSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModularExperienceActionSet_Statics::ClassParams = {
	&UModularExperienceActionSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UModularExperienceActionSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UModularExperienceActionSet_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModularExperienceActionSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UModularExperienceActionSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModularExperienceActionSet()
{
	if (!Z_Registration_Info_UClass_UModularExperienceActionSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularExperienceActionSet.OuterSingleton, Z_Construct_UClass_UModularExperienceActionSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularExperienceActionSet.OuterSingleton;
}
template<> MODULARGAMEPLAYEXPERIENCES_API UClass* StaticClass<UModularExperienceActionSet>()
{
	return UModularExperienceActionSet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModularExperienceActionSet);
UModularExperienceActionSet::~UModularExperienceActionSet() {}
// End Class UModularExperienceActionSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularExperienceActionSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularExperienceActionSet, UModularExperienceActionSet::StaticClass, TEXT("UModularExperienceActionSet"), &Z_Registration_Info_UClass_UModularExperienceActionSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularExperienceActionSet), 2589069620U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularExperienceActionSet_h_1505222551(TEXT("/Script/ModularGameplayExperiences"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularExperienceActionSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularExperienceActionSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
