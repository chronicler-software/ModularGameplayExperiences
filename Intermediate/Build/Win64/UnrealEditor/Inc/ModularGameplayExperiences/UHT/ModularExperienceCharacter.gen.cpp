// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayExperiences/Public/Actor/ModularExperienceCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularExperienceCharacter() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularCharacter();
MODULARGAMEPLAYEXPERIENCES_API UClass* Z_Construct_UClass_AModularExperienceCharacter();
MODULARGAMEPLAYEXPERIENCES_API UClass* Z_Construct_UClass_AModularExperienceCharacter_NoRegister();
MODULARGAMEPLAYEXPERIENCES_API UClass* Z_Construct_UClass_UModularPawnComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularGameplayExperiences();
// End Cross Module References

// Begin Class AModularExperienceCharacter
void AModularExperienceCharacter::StaticRegisterNativesAModularExperienceCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AModularExperienceCharacter);
UClass* Z_Construct_UClass_AModularExperienceCharacter_NoRegister()
{
	return AModularExperienceCharacter::StaticClass();
}
struct Z_Construct_UClass_AModularExperienceCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Actor/ModularExperienceCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actor/ModularExperienceCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "The player character base class." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnExtensionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/ModularExperienceCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnExtensionComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModularExperienceCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModularExperienceCharacter_Statics::NewProp_PawnExtensionComponent = { "PawnExtensionComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModularExperienceCharacter, PawnExtensionComponent), Z_Construct_UClass_UModularPawnComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnExtensionComponent_MetaData), NewProp_PawnExtensionComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AModularExperienceCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularExperienceCharacter_Statics::NewProp_PawnExtensionComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModularExperienceCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AModularExperienceCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AModularCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayExperiences,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModularExperienceCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AModularExperienceCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, (int32)VTABLE_OFFSET(AModularExperienceCharacter, IGameplayTagAssetInterface), false },  // 2863124436
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AModularExperienceCharacter_Statics::ClassParams = {
	&AModularExperienceCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AModularExperienceCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AModularExperienceCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AModularExperienceCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AModularExperienceCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AModularExperienceCharacter()
{
	if (!Z_Registration_Info_UClass_AModularExperienceCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AModularExperienceCharacter.OuterSingleton, Z_Construct_UClass_AModularExperienceCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AModularExperienceCharacter.OuterSingleton;
}
template<> MODULARGAMEPLAYEXPERIENCES_API UClass* StaticClass<AModularExperienceCharacter>()
{
	return AModularExperienceCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AModularExperienceCharacter);
AModularExperienceCharacter::~AModularExperienceCharacter() {}
// End Class AModularExperienceCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_Actor_ModularExperienceCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AModularExperienceCharacter, AModularExperienceCharacter::StaticClass, TEXT("AModularExperienceCharacter"), &Z_Registration_Info_UClass_AModularExperienceCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AModularExperienceCharacter), 1464142559U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_Actor_ModularExperienceCharacter_h_1715255395(TEXT("/Script/ModularGameplayExperiences"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_Actor_ModularExperienceCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_Actor_ModularExperienceCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
