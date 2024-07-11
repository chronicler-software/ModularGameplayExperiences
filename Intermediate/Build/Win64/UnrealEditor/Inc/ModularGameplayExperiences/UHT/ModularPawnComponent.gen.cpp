// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayExperiences/Public/ActorComponent/ModularPawnComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularPawnComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UPawnComponent();
MODULARGAMEPLAYDATA_API UClass* Z_Construct_UClass_UModularPawnData_NoRegister();
MODULARGAMEPLAYEXPERIENCES_API UClass* Z_Construct_UClass_UModularPawnComponent();
MODULARGAMEPLAYEXPERIENCES_API UClass* Z_Construct_UClass_UModularPawnComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularGameplayExperiences();
// End Cross Module References

// Begin Class UModularPawnComponent Function FindModularPawnComponent
struct Z_Construct_UFunction_UModularPawnComponent_FindModularPawnComponent_Statics
{
	struct ModularPawnComponent_eventFindModularPawnComponent_Parms
	{
		const AActor* Actor;
		UModularPawnComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the pawn extension component if one exists on the specified actor. */" },
#endif
		{ "ModuleRelativePath", "Public/ActorComponent/ModularPawnComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the pawn extension component if one exists on the specified actor." },
#endif
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModularPawnComponent_FindModularPawnComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularPawnComponent_eventFindModularPawnComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModularPawnComponent_FindModularPawnComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularPawnComponent_eventFindModularPawnComponent_Parms, ReturnValue), Z_Construct_UClass_UModularPawnComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularPawnComponent_FindModularPawnComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularPawnComponent_FindModularPawnComponent_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularPawnComponent_FindModularPawnComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularPawnComponent_FindModularPawnComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularPawnComponent_FindModularPawnComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularPawnComponent, nullptr, "FindModularPawnComponent", nullptr, nullptr, Z_Construct_UFunction_UModularPawnComponent_FindModularPawnComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularPawnComponent_FindModularPawnComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularPawnComponent_FindModularPawnComponent_Statics::ModularPawnComponent_eventFindModularPawnComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularPawnComponent_FindModularPawnComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularPawnComponent_FindModularPawnComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularPawnComponent_FindModularPawnComponent_Statics::ModularPawnComponent_eventFindModularPawnComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularPawnComponent_FindModularPawnComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularPawnComponent_FindModularPawnComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularPawnComponent::execFindModularPawnComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UModularPawnComponent**)Z_Param__Result=UModularPawnComponent::FindModularPawnComponent(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UModularPawnComponent Function FindModularPawnComponent

// Begin Class UModularPawnComponent Function OnRep_PawnData
struct Z_Construct_UFunction_UModularPawnComponent_OnRep_PawnData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorComponent/ModularPawnComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularPawnComponent_OnRep_PawnData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularPawnComponent, nullptr, "OnRep_PawnData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularPawnComponent_OnRep_PawnData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularPawnComponent_OnRep_PawnData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UModularPawnComponent_OnRep_PawnData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularPawnComponent_OnRep_PawnData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularPawnComponent::execOnRep_PawnData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_PawnData();
	P_NATIVE_END;
}
// End Class UModularPawnComponent Function OnRep_PawnData

// Begin Class UModularPawnComponent
void UModularPawnComponent::StaticRegisterNativesUModularPawnComponent()
{
	UClass* Class = UModularPawnComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindModularPawnComponent", &UModularPawnComponent::execFindModularPawnComponent },
		{ "OnRep_PawnData", &UModularPawnComponent::execOnRep_PawnData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModularPawnComponent);
UClass* Z_Construct_UClass_UModularPawnComponent_NoRegister()
{
	return UModularPawnComponent::StaticClass();
}
struct Z_Construct_UClass_UModularPawnComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Component that adds functionality to all Pawn classes so it can be used for characters/vehicles/etc.\n * This coordinates the initialization of other components.\n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ActorComponent/ModularPawnComponent.h" },
		{ "ModuleRelativePath", "Public/ActorComponent/ModularPawnComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component that adds functionality to all Pawn classes so it can be used for characters/vehicles/etc.\nThis coordinates the initialization of other components." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnData_MetaData[] = {
		{ "Category", "Kula|Pawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pawn data used to create the pawn. Specified from a spawn function or on a placed instance. */" },
#endif
		{ "ModuleRelativePath", "Public/ActorComponent/ModularPawnComponent.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn data used to create the pawn. Specified from a spawn function or on a placed instance." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UModularPawnComponent_FindModularPawnComponent, "FindModularPawnComponent" }, // 1090815895
		{ &Z_Construct_UFunction_UModularPawnComponent_OnRep_PawnData, "OnRep_PawnData" }, // 3567181097
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularPawnComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UModularPawnComponent_Statics::NewProp_PawnData = { "PawnData", "OnRep_PawnData", (EPropertyFlags)0x0124080100000821, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularPawnComponent, PawnData), Z_Construct_UClass_UModularPawnData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnData_MetaData), NewProp_PawnData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModularPawnComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularPawnComponent_Statics::NewProp_PawnData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularPawnComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UModularPawnComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayExperiences,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularPawnComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UModularPawnComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister, (int32)VTABLE_OFFSET(UModularPawnComponent, IGameFrameworkInitStateInterface), false },  // 363983679
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModularPawnComponent_Statics::ClassParams = {
	&UModularPawnComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UModularPawnComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UModularPawnComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModularPawnComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UModularPawnComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModularPawnComponent()
{
	if (!Z_Registration_Info_UClass_UModularPawnComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularPawnComponent.OuterSingleton, Z_Construct_UClass_UModularPawnComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularPawnComponent.OuterSingleton;
}
template<> MODULARGAMEPLAYEXPERIENCES_API UClass* StaticClass<UModularPawnComponent>()
{
	return UModularPawnComponent::StaticClass();
}
void UModularPawnComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_PawnData(TEXT("PawnData"));
	const bool bIsValid = true
		&& Name_PawnData == ClassReps[(int32)ENetFields_Private::PawnData].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UModularPawnComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModularPawnComponent);
UModularPawnComponent::~UModularPawnComponent() {}
// End Class UModularPawnComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_ActorComponent_ModularPawnComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularPawnComponent, UModularPawnComponent::StaticClass, TEXT("UModularPawnComponent"), &Z_Registration_Info_UClass_UModularPawnComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularPawnComponent), 2395524011U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_ActorComponent_ModularPawnComponent_h_2876919092(TEXT("/Script/ModularGameplayExperiences"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_ActorComponent_ModularPawnComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_ActorComponent_ModularPawnComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
