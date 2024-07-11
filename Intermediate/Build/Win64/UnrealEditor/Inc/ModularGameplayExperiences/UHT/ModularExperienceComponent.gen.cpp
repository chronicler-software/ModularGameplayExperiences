// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayExperiences/Public/ActorComponent/ModularExperienceComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularExperienceComponent() {}

// Begin Cross Module References
COMMONLOADINGSCREEN_API UClass* Z_Construct_UClass_ULoadingProcessInterface_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameStateComponent();
MODULARGAMEPLAYEXPERIENCES_API UClass* Z_Construct_UClass_UModularExperienceComponent();
MODULARGAMEPLAYEXPERIENCES_API UClass* Z_Construct_UClass_UModularExperienceComponent_NoRegister();
MODULARGAMEPLAYEXPERIENCES_API UClass* Z_Construct_UClass_UModularExperienceDefinition_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularGameplayExperiences();
// End Cross Module References

// Begin Class UModularExperienceComponent Function OnRep_CurrentExperience
struct Z_Construct_UFunction_UModularExperienceComponent_OnRep_CurrentExperience_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponent/ModularExperienceComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularExperienceComponent_OnRep_CurrentExperience_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularExperienceComponent, nullptr, "OnRep_CurrentExperience", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularExperienceComponent_OnRep_CurrentExperience_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularExperienceComponent_OnRep_CurrentExperience_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UModularExperienceComponent_OnRep_CurrentExperience()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularExperienceComponent_OnRep_CurrentExperience_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularExperienceComponent::execOnRep_CurrentExperience)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentExperience();
	P_NATIVE_END;
}
// End Class UModularExperienceComponent Function OnRep_CurrentExperience

// Begin Class UModularExperienceComponent
void UModularExperienceComponent::StaticRegisterNativesUModularExperienceComponent()
{
	UClass* Class = UModularExperienceComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_CurrentExperience", &UModularExperienceComponent::execOnRep_CurrentExperience },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModularExperienceComponent);
UClass* Z_Construct_UClass_UModularExperienceComponent_NoRegister()
{
	return UModularExperienceComponent::StaticClass();
}
struct Z_Construct_UClass_UModularExperienceComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Component that manages the current experience, either a UI or gameplay one.\n *\n * Intended for GameState actors, but can be used anywhere.\n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ActorComponent/ModularExperienceComponent.h" },
		{ "ModuleRelativePath", "Public/ActorComponent/ModularExperienceComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component that manages the current experience, either a UI or gameplay one.\n\nIntended for GameState actors, but can be used anywhere." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentExperience_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorComponent/ModularExperienceComponent.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentExperience;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UModularExperienceComponent_OnRep_CurrentExperience, "OnRep_CurrentExperience" }, // 3232625939
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularExperienceComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UModularExperienceComponent_Statics::NewProp_CurrentExperience = { "CurrentExperience", "OnRep_CurrentExperience", (EPropertyFlags)0x0144000100000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularExperienceComponent, CurrentExperience), Z_Construct_UClass_UModularExperienceDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentExperience_MetaData), NewProp_CurrentExperience_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModularExperienceComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularExperienceComponent_Statics::NewProp_CurrentExperience,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularExperienceComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UModularExperienceComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameStateComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayExperiences,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularExperienceComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UModularExperienceComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_ULoadingProcessInterface_NoRegister, (int32)VTABLE_OFFSET(UModularExperienceComponent, ILoadingProcessInterface), false },  // 3535459782
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModularExperienceComponent_Statics::ClassParams = {
	&UModularExperienceComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UModularExperienceComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UModularExperienceComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModularExperienceComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UModularExperienceComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModularExperienceComponent()
{
	if (!Z_Registration_Info_UClass_UModularExperienceComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularExperienceComponent.OuterSingleton, Z_Construct_UClass_UModularExperienceComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularExperienceComponent.OuterSingleton;
}
template<> MODULARGAMEPLAYEXPERIENCES_API UClass* StaticClass<UModularExperienceComponent>()
{
	return UModularExperienceComponent::StaticClass();
}
void UModularExperienceComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_CurrentExperience(TEXT("CurrentExperience"));
	const bool bIsValid = true
		&& Name_CurrentExperience == ClassReps[(int32)ENetFields_Private::CurrentExperience].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UModularExperienceComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModularExperienceComponent);
UModularExperienceComponent::~UModularExperienceComponent() {}
// End Class UModularExperienceComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_ActorComponent_ModularExperienceComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularExperienceComponent, UModularExperienceComponent::StaticClass, TEXT("UModularExperienceComponent"), &Z_Registration_Info_UClass_UModularExperienceComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularExperienceComponent), 460677242U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_ActorComponent_ModularExperienceComponent_h_2778727870(TEXT("/Script/ModularGameplayExperiences"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_ActorComponent_ModularExperienceComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_ActorComponent_ModularExperienceComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
