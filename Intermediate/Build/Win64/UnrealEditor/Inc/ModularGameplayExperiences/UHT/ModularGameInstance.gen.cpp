// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayExperiences/Public/ModularGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularGameInstance() {}

// Begin Cross Module References
COMMONGAME_API UClass* Z_Construct_UClass_UCommonGameInstance();
MODULARGAMEPLAYEXPERIENCES_API UClass* Z_Construct_UClass_UModularGameInstance();
MODULARGAMEPLAYEXPERIENCES_API UClass* Z_Construct_UClass_UModularGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularGameplayExperiences();
// End Cross Module References

// Begin Class UModularGameInstance
void UModularGameInstance::StaticRegisterNativesUModularGameInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModularGameInstance);
UClass* Z_Construct_UClass_UModularGameInstance_NoRegister()
{
	return UModularGameInstance::StaticClass();
}
struct Z_Construct_UClass_UModularGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Implements a number of base features of CommonGameInstance that are useful for most games.\n *\n * @todo CommonGame classes depend directly on Subsystems. This should be refactored to use Multicast delegates.\n */" },
#endif
		{ "IncludePath", "ModularGameInstance.h" },
		{ "ModuleRelativePath", "Public/ModularGameInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implements a number of base features of CommonGameInstance that are useful for most games.\n\n@todo CommonGame classes depend directly on Subsystems. This should be refactored to use Multicast delegates." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UModularGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayExperiences,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModularGameInstance_Statics::ClassParams = {
	&UModularGameInstance::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModularGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UModularGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModularGameInstance()
{
	if (!Z_Registration_Info_UClass_UModularGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularGameInstance.OuterSingleton, Z_Construct_UClass_UModularGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularGameInstance.OuterSingleton;
}
template<> MODULARGAMEPLAYEXPERIENCES_API UClass* StaticClass<UModularGameInstance>()
{
	return UModularGameInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModularGameInstance);
UModularGameInstance::~UModularGameInstance() {}
// End Class UModularGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_ModularGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularGameInstance, UModularGameInstance::StaticClass, TEXT("UModularGameInstance"), &Z_Registration_Info_UClass_UModularGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularGameInstance), 2580078532U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_ModularGameInstance_h_1023103143(TEXT("/Script/ModularGameplayExperiences"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_ModularGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_ModularGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
