// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayExperiences/Public/ActorComponent/ModularPlayerSpawningComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularPlayerSpawningComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameStateComponent();
MODULARGAMEPLAYEXPERIENCES_API UClass* Z_Construct_UClass_AModularPlayerStart_NoRegister();
MODULARGAMEPLAYEXPERIENCES_API UClass* Z_Construct_UClass_UModularPlayerSpawningComponent();
MODULARGAMEPLAYEXPERIENCES_API UClass* Z_Construct_UClass_UModularPlayerSpawningComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularGameplayExperiences();
// End Cross Module References

// Begin Class UModularPlayerSpawningComponent Function K2_OnFinishRestartPlayer
struct ModularPlayerSpawningComponent_eventK2_OnFinishRestartPlayer_Parms
{
	AController* Player;
	FRotator StartRotation;
};
static FName NAME_UModularPlayerSpawningComponent_K2_OnFinishRestartPlayer = FName(TEXT("K2_OnFinishRestartPlayer"));
void UModularPlayerSpawningComponent::K2_OnFinishRestartPlayer(AController* Player, FRotator const& StartRotation)
{
	ModularPlayerSpawningComponent_eventK2_OnFinishRestartPlayer_Parms Parms;
	Parms.Player=Player;
	Parms.StartRotation=StartRotation;
	ProcessEvent(FindFunctionChecked(NAME_UModularPlayerSpawningComponent_K2_OnFinishRestartPlayer),&Parms);
}
struct Z_Construct_UFunction_UModularPlayerSpawningComponent_K2_OnFinishRestartPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "OnFinishRestartPlayer" },
		{ "ModuleRelativePath", "Public/ActorComponent/ModularPlayerSpawningComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModularPlayerSpawningComponent_K2_OnFinishRestartPlayer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularPlayerSpawningComponent_eventK2_OnFinishRestartPlayer_Parms, Player), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModularPlayerSpawningComponent_K2_OnFinishRestartPlayer_Statics::NewProp_StartRotation = { "StartRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularPlayerSpawningComponent_eventK2_OnFinishRestartPlayer_Parms, StartRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartRotation_MetaData), NewProp_StartRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularPlayerSpawningComponent_K2_OnFinishRestartPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularPlayerSpawningComponent_K2_OnFinishRestartPlayer_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularPlayerSpawningComponent_K2_OnFinishRestartPlayer_Statics::NewProp_StartRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularPlayerSpawningComponent_K2_OnFinishRestartPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularPlayerSpawningComponent_K2_OnFinishRestartPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularPlayerSpawningComponent, nullptr, "K2_OnFinishRestartPlayer", nullptr, nullptr, Z_Construct_UFunction_UModularPlayerSpawningComponent_K2_OnFinishRestartPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularPlayerSpawningComponent_K2_OnFinishRestartPlayer_Statics::PropPointers), sizeof(ModularPlayerSpawningComponent_eventK2_OnFinishRestartPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C80800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularPlayerSpawningComponent_K2_OnFinishRestartPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularPlayerSpawningComponent_K2_OnFinishRestartPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(ModularPlayerSpawningComponent_eventK2_OnFinishRestartPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularPlayerSpawningComponent_K2_OnFinishRestartPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularPlayerSpawningComponent_K2_OnFinishRestartPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UModularPlayerSpawningComponent Function K2_OnFinishRestartPlayer

// Begin Class UModularPlayerSpawningComponent
void UModularPlayerSpawningComponent::StaticRegisterNativesUModularPlayerSpawningComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModularPlayerSpawningComponent);
UClass* Z_Construct_UClass_UModularPlayerSpawningComponent_NoRegister()
{
	return UModularPlayerSpawningComponent::StaticClass();
}
struct Z_Construct_UClass_UModularPlayerSpawningComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ActorComponent/ModularPlayerSpawningComponent.h" },
		{ "ModuleRelativePath", "Public/ActorComponent/ModularPlayerSpawningComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedPlayerStarts_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorComponent/ModularPlayerSpawningComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CachedPlayerStarts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedPlayerStarts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UModularPlayerSpawningComponent_K2_OnFinishRestartPlayer, "K2_OnFinishRestartPlayer" }, // 87189390
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularPlayerSpawningComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UModularPlayerSpawningComponent_Statics::NewProp_CachedPlayerStarts_Inner = { "CachedPlayerStarts", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AModularPlayerStart_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModularPlayerSpawningComponent_Statics::NewProp_CachedPlayerStarts = { "CachedPlayerStarts", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularPlayerSpawningComponent, CachedPlayerStarts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedPlayerStarts_MetaData), NewProp_CachedPlayerStarts_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModularPlayerSpawningComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularPlayerSpawningComponent_Statics::NewProp_CachedPlayerStarts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularPlayerSpawningComponent_Statics::NewProp_CachedPlayerStarts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularPlayerSpawningComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UModularPlayerSpawningComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameStateComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayExperiences,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularPlayerSpawningComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModularPlayerSpawningComponent_Statics::ClassParams = {
	&UModularPlayerSpawningComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UModularPlayerSpawningComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UModularPlayerSpawningComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModularPlayerSpawningComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UModularPlayerSpawningComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModularPlayerSpawningComponent()
{
	if (!Z_Registration_Info_UClass_UModularPlayerSpawningComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularPlayerSpawningComponent.OuterSingleton, Z_Construct_UClass_UModularPlayerSpawningComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularPlayerSpawningComponent.OuterSingleton;
}
template<> MODULARGAMEPLAYEXPERIENCES_API UClass* StaticClass<UModularPlayerSpawningComponent>()
{
	return UModularPlayerSpawningComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModularPlayerSpawningComponent);
UModularPlayerSpawningComponent::~UModularPlayerSpawningComponent() {}
// End Class UModularPlayerSpawningComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_ActorComponent_ModularPlayerSpawningComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularPlayerSpawningComponent, UModularPlayerSpawningComponent::StaticClass, TEXT("UModularPlayerSpawningComponent"), &Z_Registration_Info_UClass_UModularPlayerSpawningComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularPlayerSpawningComponent), 2830837637U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_ActorComponent_ModularPlayerSpawningComponent_h_355771152(TEXT("/Script/ModularGameplayExperiences"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_ActorComponent_ModularPlayerSpawningComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_ActorComponent_ModularPlayerSpawningComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
