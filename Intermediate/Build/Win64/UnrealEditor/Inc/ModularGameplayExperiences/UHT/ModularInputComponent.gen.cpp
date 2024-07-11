// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayExperiences/Public/ActorComponent/ModularInputComponent.h"
#include "ModularGameplayData/Public/GameFeature/GameFeatureAction_AddInputContextMapping.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularInputComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UPawnComponent();
MODULARGAMEPLAYDATA_API UScriptStruct* Z_Construct_UScriptStruct_FInputMappingContextAndPriority();
MODULARGAMEPLAYEXPERIENCES_API UClass* Z_Construct_UClass_UModularInputComponent();
MODULARGAMEPLAYEXPERIENCES_API UClass* Z_Construct_UClass_UModularInputComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularGameplayExperiences();
// End Cross Module References

// Begin Class UModularInputComponent Function FindExperienceInputComponent
struct Z_Construct_UFunction_UModularInputComponent_FindExperienceInputComponent_Statics
{
	struct ModularInputComponent_eventFindExperienceInputComponent_Parms
	{
		const AActor* Actor;
		UModularInputComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Experience" },
		{ "ModuleRelativePath", "Public/ActorComponent/ModularInputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModularInputComponent_FindExperienceInputComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularInputComponent_eventFindExperienceInputComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModularInputComponent_FindExperienceInputComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularInputComponent_eventFindExperienceInputComponent_Parms, ReturnValue), Z_Construct_UClass_UModularInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularInputComponent_FindExperienceInputComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularInputComponent_FindExperienceInputComponent_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularInputComponent_FindExperienceInputComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularInputComponent_FindExperienceInputComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularInputComponent_FindExperienceInputComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularInputComponent, nullptr, "FindExperienceInputComponent", nullptr, nullptr, Z_Construct_UFunction_UModularInputComponent_FindExperienceInputComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularInputComponent_FindExperienceInputComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularInputComponent_FindExperienceInputComponent_Statics::ModularInputComponent_eventFindExperienceInputComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularInputComponent_FindExperienceInputComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularInputComponent_FindExperienceInputComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularInputComponent_FindExperienceInputComponent_Statics::ModularInputComponent_eventFindExperienceInputComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularInputComponent_FindExperienceInputComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularInputComponent_FindExperienceInputComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularInputComponent::execFindExperienceInputComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UModularInputComponent**)Z_Param__Result=UModularInputComponent::FindExperienceInputComponent(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UModularInputComponent Function FindExperienceInputComponent

// Begin Class UModularInputComponent
void UModularInputComponent::StaticRegisterNativesUModularInputComponent()
{
	UClass* Class = UModularInputComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindExperienceInputComponent", &UModularInputComponent::execFindExperienceInputComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModularInputComponent);
UClass* Z_Construct_UClass_UModularInputComponent_NoRegister()
{
	return UModularInputComponent::StaticClass();
}
struct Z_Construct_UClass_UModularInputComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Binds modular input configs and mappings to the owning pawn.\n *\n * This component is similar to Lyra's HeroComponent but has been stripped down and focused.\n *\n * @todo See if all inputs can be moved to DefaultGameplayTags.ini for consistency with other tags.\n *\n * @see LyraGame/Character/LyraHeroComponent\n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ActorComponent/ModularInputComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ActorComponent/ModularInputComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Binds modular input configs and mappings to the owning pawn.\n\nThis component is similar to Lyra's HeroComponent but has been stripped down and focused.\n\n@todo See if all inputs can be moved to DefaultGameplayTags.ini for consistency with other tags.\n\n@see LyraGame/Character/LyraHeroComponent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInputMappings_MetaData[] = {
		{ "Category", "ModularInputComponent" },
		{ "ModuleRelativePath", "Public/ActorComponent/ModularInputComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultInputMappings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultInputMappings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UModularInputComponent_FindExperienceInputComponent, "FindExperienceInputComponent" }, // 302944946
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularInputComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModularInputComponent_Statics::NewProp_DefaultInputMappings_Inner = { "DefaultInputMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputMappingContextAndPriority, METADATA_PARAMS(0, nullptr) }; // 2636457257
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModularInputComponent_Statics::NewProp_DefaultInputMappings = { "DefaultInputMappings", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularInputComponent, DefaultInputMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultInputMappings_MetaData), NewProp_DefaultInputMappings_MetaData) }; // 2636457257
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModularInputComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularInputComponent_Statics::NewProp_DefaultInputMappings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularInputComponent_Statics::NewProp_DefaultInputMappings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularInputComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UModularInputComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayExperiences,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularInputComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UModularInputComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister, (int32)VTABLE_OFFSET(UModularInputComponent, IGameFrameworkInitStateInterface), false },  // 363983679
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModularInputComponent_Statics::ClassParams = {
	&UModularInputComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UModularInputComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UModularInputComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModularInputComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UModularInputComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModularInputComponent()
{
	if (!Z_Registration_Info_UClass_UModularInputComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularInputComponent.OuterSingleton, Z_Construct_UClass_UModularInputComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularInputComponent.OuterSingleton;
}
template<> MODULARGAMEPLAYEXPERIENCES_API UClass* StaticClass<UModularInputComponent>()
{
	return UModularInputComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModularInputComponent);
UModularInputComponent::~UModularInputComponent() {}
// End Class UModularInputComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_ActorComponent_ModularInputComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularInputComponent, UModularInputComponent::StaticClass, TEXT("UModularInputComponent"), &Z_Registration_Info_UClass_UModularInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularInputComponent), 2484110903U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_ActorComponent_ModularInputComponent_h_2521911530(TEXT("/Script/ModularGameplayExperiences"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_ActorComponent_ModularInputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_ActorComponent_ModularInputComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
