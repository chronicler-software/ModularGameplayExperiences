// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayExperiences/Public/Player/ModularExperiencePlayerState.h"
#include "ModularGameplayExperiences/Public/GameplayTagStack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularExperiencePlayerState() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularPlayerState();
MODULARGAMEPLAYDATA_API UClass* Z_Construct_UClass_UModularPawnData_NoRegister();
MODULARGAMEPLAYEXPERIENCES_API UClass* Z_Construct_UClass_AModularExperiencePlayerState();
MODULARGAMEPLAYEXPERIENCES_API UClass* Z_Construct_UClass_AModularExperiencePlayerState_NoRegister();
MODULARGAMEPLAYEXPERIENCES_API UEnum* Z_Construct_UEnum_ModularGameplayExperiences_EModularPlayerConnectionType();
MODULARGAMEPLAYEXPERIENCES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagStackContainer();
UPackage* Z_Construct_UPackage__Script_ModularGameplayExperiences();
// End Cross Module References

// Begin Enum EModularPlayerConnectionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModularPlayerConnectionType;
static UEnum* EModularPlayerConnectionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModularPlayerConnectionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModularPlayerConnectionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModularGameplayExperiences_EModularPlayerConnectionType, (UObject*)Z_Construct_UPackage__Script_ModularGameplayExperiences(), TEXT("EModularPlayerConnectionType"));
	}
	return Z_Registration_Info_UEnum_EModularPlayerConnectionType.OuterSingleton;
}
template<> MODULARGAMEPLAYEXPERIENCES_API UEnum* StaticEnum<EModularPlayerConnectionType>()
{
	return EModularPlayerConnectionType_StaticEnum();
}
struct Z_Construct_UEnum_ModularGameplayExperiences_EModularPlayerConnectionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Defines the types of client connected */" },
#endif
		{ "InactivePlayer.Comment", "// A deactivated player (disconnected).\n" },
		{ "InactivePlayer.Name", "EModularPlayerConnectionType::InactivePlayer" },
		{ "InactivePlayer.ToolTip", "A deactivated player (disconnected)." },
		{ "LiveSpectator.Comment", "// Spectator connected to a running game.\n" },
		{ "LiveSpectator.Name", "EModularPlayerConnectionType::LiveSpectator" },
		{ "LiveSpectator.ToolTip", "Spectator connected to a running game." },
		{ "ModuleRelativePath", "Public/Player/ModularExperiencePlayerState.h" },
		{ "Player.Comment", "// An active player.\n" },
		{ "Player.Name", "EModularPlayerConnectionType::Player" },
		{ "Player.ToolTip", "An active player." },
		{ "ReplaySpectator.Comment", "// Spectating a demo recording offline.\n" },
		{ "ReplaySpectator.Name", "EModularPlayerConnectionType::ReplaySpectator" },
		{ "ReplaySpectator.ToolTip", "Spectating a demo recording offline." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines the types of client connected" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModularPlayerConnectionType::Player", (int64)EModularPlayerConnectionType::Player },
		{ "EModularPlayerConnectionType::LiveSpectator", (int64)EModularPlayerConnectionType::LiveSpectator },
		{ "EModularPlayerConnectionType::ReplaySpectator", (int64)EModularPlayerConnectionType::ReplaySpectator },
		{ "EModularPlayerConnectionType::InactivePlayer", (int64)EModularPlayerConnectionType::InactivePlayer },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModularGameplayExperiences_EModularPlayerConnectionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ModularGameplayExperiences,
	nullptr,
	"EModularPlayerConnectionType",
	"EModularPlayerConnectionType",
	Z_Construct_UEnum_ModularGameplayExperiences_EModularPlayerConnectionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ModularGameplayExperiences_EModularPlayerConnectionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModularGameplayExperiences_EModularPlayerConnectionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModularGameplayExperiences_EModularPlayerConnectionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ModularGameplayExperiences_EModularPlayerConnectionType()
{
	if (!Z_Registration_Info_UEnum_EModularPlayerConnectionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModularPlayerConnectionType.InnerSingleton, Z_Construct_UEnum_ModularGameplayExperiences_EModularPlayerConnectionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModularPlayerConnectionType.InnerSingleton;
}
// End Enum EModularPlayerConnectionType

// Begin Class AModularExperiencePlayerState Function OnRep_PawnData
struct Z_Construct_UFunction_AModularExperiencePlayerState_OnRep_PawnData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/ModularExperiencePlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AModularExperiencePlayerState_OnRep_PawnData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModularExperiencePlayerState, nullptr, "OnRep_PawnData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AModularExperiencePlayerState_OnRep_PawnData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AModularExperiencePlayerState_OnRep_PawnData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AModularExperiencePlayerState_OnRep_PawnData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AModularExperiencePlayerState_OnRep_PawnData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AModularExperiencePlayerState::execOnRep_PawnData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_PawnData();
	P_NATIVE_END;
}
// End Class AModularExperiencePlayerState Function OnRep_PawnData

// Begin Class AModularExperiencePlayerState
void AModularExperiencePlayerState::StaticRegisterNativesAModularExperiencePlayerState()
{
	UClass* Class = AModularExperiencePlayerState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_PawnData", &AModularExperiencePlayerState::execOnRep_PawnData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AModularExperiencePlayerState);
UClass* Z_Construct_UClass_AModularExperiencePlayerState_NoRegister()
{
	return AModularExperiencePlayerState::StaticClass();
}
struct Z_Construct_UClass_AModularExperiencePlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Player state that supports custom Pawn data.\n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Player/ModularExperiencePlayerState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Player/ModularExperiencePlayerState.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player state that supports custom Pawn data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/ModularExperiencePlayerState.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyPlayerConnectionType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/ModularExperiencePlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatTags_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/ModularExperiencePlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedViewRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/ModularExperiencePlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnData;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MyPlayerConnectionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MyPlayerConnectionType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedViewRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AModularExperiencePlayerState_OnRep_PawnData, "OnRep_PawnData" }, // 984740159
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModularExperiencePlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModularExperiencePlayerState_Statics::NewProp_PawnData = { "PawnData", "OnRep_PawnData", (EPropertyFlags)0x0124080100000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModularExperiencePlayerState, PawnData), Z_Construct_UClass_UModularPawnData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnData_MetaData), NewProp_PawnData_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AModularExperiencePlayerState_Statics::NewProp_MyPlayerConnectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AModularExperiencePlayerState_Statics::NewProp_MyPlayerConnectionType = { "MyPlayerConnectionType", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModularExperiencePlayerState, MyPlayerConnectionType), Z_Construct_UEnum_ModularGameplayExperiences_EModularPlayerConnectionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyPlayerConnectionType_MetaData), NewProp_MyPlayerConnectionType_MetaData) }; // 2699088590
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AModularExperiencePlayerState_Statics::NewProp_StatTags = { "StatTags", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModularExperiencePlayerState, StatTags), Z_Construct_UScriptStruct_FGameplayTagStackContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatTags_MetaData), NewProp_StatTags_MetaData) }; // 997298907
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AModularExperiencePlayerState_Statics::NewProp_ReplicatedViewRotation = { "ReplicatedViewRotation", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModularExperiencePlayerState, ReplicatedViewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicatedViewRotation_MetaData), NewProp_ReplicatedViewRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AModularExperiencePlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularExperiencePlayerState_Statics::NewProp_PawnData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularExperiencePlayerState_Statics::NewProp_MyPlayerConnectionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularExperiencePlayerState_Statics::NewProp_MyPlayerConnectionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularExperiencePlayerState_Statics::NewProp_StatTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularExperiencePlayerState_Statics::NewProp_ReplicatedViewRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModularExperiencePlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AModularExperiencePlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AModularPlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayExperiences,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModularExperiencePlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AModularExperiencePlayerState_Statics::ClassParams = {
	&AModularExperiencePlayerState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AModularExperiencePlayerState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AModularExperiencePlayerState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AModularExperiencePlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AModularExperiencePlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AModularExperiencePlayerState()
{
	if (!Z_Registration_Info_UClass_AModularExperiencePlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AModularExperiencePlayerState.OuterSingleton, Z_Construct_UClass_AModularExperiencePlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AModularExperiencePlayerState.OuterSingleton;
}
template<> MODULARGAMEPLAYEXPERIENCES_API UClass* StaticClass<AModularExperiencePlayerState>()
{
	return AModularExperiencePlayerState::StaticClass();
}
void AModularExperiencePlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_PawnData(TEXT("PawnData"));
	static const FName Name_MyPlayerConnectionType(TEXT("MyPlayerConnectionType"));
	static const FName Name_StatTags(TEXT("StatTags"));
	static const FName Name_ReplicatedViewRotation(TEXT("ReplicatedViewRotation"));
	const bool bIsValid = true
		&& Name_PawnData == ClassReps[(int32)ENetFields_Private::PawnData].Property->GetFName()
		&& Name_MyPlayerConnectionType == ClassReps[(int32)ENetFields_Private::MyPlayerConnectionType].Property->GetFName()
		&& Name_StatTags == ClassReps[(int32)ENetFields_Private::StatTags].Property->GetFName()
		&& Name_ReplicatedViewRotation == ClassReps[(int32)ENetFields_Private::ReplicatedViewRotation].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AModularExperiencePlayerState"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AModularExperiencePlayerState);
AModularExperiencePlayerState::~AModularExperiencePlayerState() {}
// End Class AModularExperiencePlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_Player_ModularExperiencePlayerState_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EModularPlayerConnectionType_StaticEnum, TEXT("EModularPlayerConnectionType"), &Z_Registration_Info_UEnum_EModularPlayerConnectionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2699088590U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AModularExperiencePlayerState, AModularExperiencePlayerState::StaticClass, TEXT("AModularExperiencePlayerState"), &Z_Registration_Info_UClass_AModularExperiencePlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AModularExperiencePlayerState), 3808508204U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_Player_ModularExperiencePlayerState_h_1036431415(TEXT("/Script/ModularGameplayExperiences"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_Player_ModularExperiencePlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_Player_ModularExperiencePlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_Player_ModularExperiencePlayerState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_Player_ModularExperiencePlayerState_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
