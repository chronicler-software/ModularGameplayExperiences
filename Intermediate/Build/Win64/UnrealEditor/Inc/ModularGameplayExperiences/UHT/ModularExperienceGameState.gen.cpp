// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayExperiences/Public/GameMode/ModularExperienceGameState.h"
#include "ModularGameplayExperiences/Public/Messages/ModularVerbMessage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularExperienceGameState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameStateBase();
MODULARGAMEPLAYEXPERIENCES_API UClass* Z_Construct_UClass_AModularExperienceGameState();
MODULARGAMEPLAYEXPERIENCES_API UClass* Z_Construct_UClass_AModularExperienceGameState_NoRegister();
MODULARGAMEPLAYEXPERIENCES_API UClass* Z_Construct_UClass_UModularExperienceComponent_NoRegister();
MODULARGAMEPLAYEXPERIENCES_API UClass* Z_Construct_UClass_UModularPlayerSpawningComponent_NoRegister();
MODULARGAMEPLAYEXPERIENCES_API UScriptStruct* Z_Construct_UScriptStruct_FModularVerbMessage();
UPackage* Z_Construct_UPackage__Script_ModularGameplayExperiences();
// End Cross Module References

// Begin Class AModularExperienceGameState Function MulticastMessageToClients
struct ModularExperienceGameState_eventMulticastMessageToClients_Parms
{
	FModularVerbMessage Message;
};
static FName NAME_AModularExperienceGameState_MulticastMessageToClients = FName(TEXT("MulticastMessageToClients"));
void AModularExperienceGameState::MulticastMessageToClients(const FModularVerbMessage Message)
{
	ModularExperienceGameState_eventMulticastMessageToClients_Parms Parms;
	Parms.Message=Message;
	ProcessEvent(FindFunctionChecked(NAME_AModularExperienceGameState_MulticastMessageToClients),&Parms);
}
struct Z_Construct_UFunction_AModularExperienceGameState_MulticastMessageToClients_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Send a message that all clients will (probably) get\n// (use only for client notifications like eliminations, server join messages, etc... that can handle being lost)\n" },
#endif
		{ "ModuleRelativePath", "Public/GameMode/ModularExperienceGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send a message that all clients will (probably) get\n(use only for client notifications like eliminations, server join messages, etc... that can handle being lost)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AModularExperienceGameState_MulticastMessageToClients_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularExperienceGameState_eventMulticastMessageToClients_Parms, Message), Z_Construct_UScriptStruct_FModularVerbMessage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) }; // 1882354190
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModularExperienceGameState_MulticastMessageToClients_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModularExperienceGameState_MulticastMessageToClients_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AModularExperienceGameState_MulticastMessageToClients_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AModularExperienceGameState_MulticastMessageToClients_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModularExperienceGameState, nullptr, "MulticastMessageToClients", nullptr, nullptr, Z_Construct_UFunction_AModularExperienceGameState_MulticastMessageToClients_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModularExperienceGameState_MulticastMessageToClients_Statics::PropPointers), sizeof(ModularExperienceGameState_eventMulticastMessageToClients_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AModularExperienceGameState_MulticastMessageToClients_Statics::Function_MetaDataParams), Z_Construct_UFunction_AModularExperienceGameState_MulticastMessageToClients_Statics::Function_MetaDataParams) };
static_assert(sizeof(ModularExperienceGameState_eventMulticastMessageToClients_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AModularExperienceGameState_MulticastMessageToClients()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AModularExperienceGameState_MulticastMessageToClients_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AModularExperienceGameState::execMulticastMessageToClients)
{
	P_GET_STRUCT(FModularVerbMessage,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastMessageToClients_Implementation(Z_Param_Message);
	P_NATIVE_END;
}
// End Class AModularExperienceGameState Function MulticastMessageToClients

// Begin Class AModularExperienceGameState Function MulticastReliableMessageToClients
struct ModularExperienceGameState_eventMulticastReliableMessageToClients_Parms
{
	FModularVerbMessage Message;
};
static FName NAME_AModularExperienceGameState_MulticastReliableMessageToClients = FName(TEXT("MulticastReliableMessageToClients"));
void AModularExperienceGameState::MulticastReliableMessageToClients(const FModularVerbMessage Message)
{
	ModularExperienceGameState_eventMulticastReliableMessageToClients_Parms Parms;
	Parms.Message=Message;
	ProcessEvent(FindFunctionChecked(NAME_AModularExperienceGameState_MulticastReliableMessageToClients),&Parms);
}
struct Z_Construct_UFunction_AModularExperienceGameState_MulticastReliableMessageToClients_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GameState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Send a message that all clients will be guaranteed to get\n// (use only for client notifications that cannot handle being lost)\n" },
#endif
		{ "ModuleRelativePath", "Public/GameMode/ModularExperienceGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send a message that all clients will be guaranteed to get\n(use only for client notifications that cannot handle being lost)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AModularExperienceGameState_MulticastReliableMessageToClients_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularExperienceGameState_eventMulticastReliableMessageToClients_Parms, Message), Z_Construct_UScriptStruct_FModularVerbMessage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) }; // 1882354190
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModularExperienceGameState_MulticastReliableMessageToClients_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModularExperienceGameState_MulticastReliableMessageToClients_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AModularExperienceGameState_MulticastReliableMessageToClients_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AModularExperienceGameState_MulticastReliableMessageToClients_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModularExperienceGameState, nullptr, "MulticastReliableMessageToClients", nullptr, nullptr, Z_Construct_UFunction_AModularExperienceGameState_MulticastReliableMessageToClients_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModularExperienceGameState_MulticastReliableMessageToClients_Statics::PropPointers), sizeof(ModularExperienceGameState_eventMulticastReliableMessageToClients_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AModularExperienceGameState_MulticastReliableMessageToClients_Statics::Function_MetaDataParams), Z_Construct_UFunction_AModularExperienceGameState_MulticastReliableMessageToClients_Statics::Function_MetaDataParams) };
static_assert(sizeof(ModularExperienceGameState_eventMulticastReliableMessageToClients_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AModularExperienceGameState_MulticastReliableMessageToClients()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AModularExperienceGameState_MulticastReliableMessageToClients_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AModularExperienceGameState::execMulticastReliableMessageToClients)
{
	P_GET_STRUCT(FModularVerbMessage,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastReliableMessageToClients_Implementation(Z_Param_Message);
	P_NATIVE_END;
}
// End Class AModularExperienceGameState Function MulticastReliableMessageToClients

// Begin Class AModularExperienceGameState Function OnRep_RecorderPlayerState
struct Z_Construct_UFunction_AModularExperienceGameState_OnRep_RecorderPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameMode/ModularExperienceGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AModularExperienceGameState_OnRep_RecorderPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModularExperienceGameState, nullptr, "OnRep_RecorderPlayerState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AModularExperienceGameState_OnRep_RecorderPlayerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AModularExperienceGameState_OnRep_RecorderPlayerState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AModularExperienceGameState_OnRep_RecorderPlayerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AModularExperienceGameState_OnRep_RecorderPlayerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AModularExperienceGameState::execOnRep_RecorderPlayerState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_RecorderPlayerState();
	P_NATIVE_END;
}
// End Class AModularExperienceGameState Function OnRep_RecorderPlayerState

// Begin Class AModularExperienceGameState
void AModularExperienceGameState::StaticRegisterNativesAModularExperienceGameState()
{
	UClass* Class = AModularExperienceGameState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MulticastMessageToClients", &AModularExperienceGameState::execMulticastMessageToClients },
		{ "MulticastReliableMessageToClients", &AModularExperienceGameState::execMulticastReliableMessageToClients },
		{ "OnRep_RecorderPlayerState", &AModularExperienceGameState::execOnRep_RecorderPlayerState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AModularExperienceGameState);
UClass* Z_Construct_UClass_AModularExperienceGameState_NoRegister()
{
	return AModularExperienceGameState::StaticClass();
}
struct Z_Construct_UClass_AModularExperienceGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * AModularGameState\n *\n *\x09The base game state class used by this project.\n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMode/ModularExperienceGameState.h" },
		{ "ModuleRelativePath", "Public/GameMode/ModularExperienceGameState.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AModularGameState\n\n    The base game state class used by this project." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModularExperienceComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Handles loading and managing the current gameplay experience\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameMode/ModularExperienceGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles loading and managing the current gameplay experience" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModularPlayerSpawningComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameMode/ModularExperienceGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerFPS_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameMode/ModularExperienceGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecorderPlayerState_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The player state that recorded a replay, it is used to select the right pawn to follow\n// This is only set in replay streams and is not replicated normally\n" },
#endif
		{ "ModuleRelativePath", "Public/GameMode/ModularExperienceGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The player state that recorded a replay, it is used to select the right pawn to follow\nThis is only set in replay streams and is not replicated normally" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ModularExperienceComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ModularPlayerSpawningComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerFPS;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RecorderPlayerState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AModularExperienceGameState_MulticastMessageToClients, "MulticastMessageToClients" }, // 2842959561
		{ &Z_Construct_UFunction_AModularExperienceGameState_MulticastReliableMessageToClients, "MulticastReliableMessageToClients" }, // 3737606305
		{ &Z_Construct_UFunction_AModularExperienceGameState_OnRep_RecorderPlayerState, "OnRep_RecorderPlayerState" }, // 2405129684
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModularExperienceGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModularExperienceGameState_Statics::NewProp_ModularExperienceComponent = { "ModularExperienceComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModularExperienceGameState, ModularExperienceComponent), Z_Construct_UClass_UModularExperienceComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModularExperienceComponent_MetaData), NewProp_ModularExperienceComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModularExperienceGameState_Statics::NewProp_ModularPlayerSpawningComponent = { "ModularPlayerSpawningComponent", nullptr, (EPropertyFlags)0x0144000000080028, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModularExperienceGameState, ModularPlayerSpawningComponent), Z_Construct_UClass_UModularPlayerSpawningComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModularPlayerSpawningComponent_MetaData), NewProp_ModularPlayerSpawningComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AModularExperienceGameState_Statics::NewProp_ServerFPS = { "ServerFPS", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModularExperienceGameState, ServerFPS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerFPS_MetaData), NewProp_ServerFPS_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModularExperienceGameState_Statics::NewProp_RecorderPlayerState = { "RecorderPlayerState", "OnRep_RecorderPlayerState", (EPropertyFlags)0x0124080100002020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModularExperienceGameState, RecorderPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecorderPlayerState_MetaData), NewProp_RecorderPlayerState_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AModularExperienceGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularExperienceGameState_Statics::NewProp_ModularExperienceComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularExperienceGameState_Statics::NewProp_ModularPlayerSpawningComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularExperienceGameState_Statics::NewProp_ServerFPS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularExperienceGameState_Statics::NewProp_RecorderPlayerState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModularExperienceGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AModularExperienceGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AModularGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayExperiences,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModularExperienceGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AModularExperienceGameState_Statics::ClassParams = {
	&AModularExperienceGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AModularExperienceGameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AModularExperienceGameState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AModularExperienceGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_AModularExperienceGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AModularExperienceGameState()
{
	if (!Z_Registration_Info_UClass_AModularExperienceGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AModularExperienceGameState.OuterSingleton, Z_Construct_UClass_AModularExperienceGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AModularExperienceGameState.OuterSingleton;
}
template<> MODULARGAMEPLAYEXPERIENCES_API UClass* StaticClass<AModularExperienceGameState>()
{
	return AModularExperienceGameState::StaticClass();
}
void AModularExperienceGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_ModularPlayerSpawningComponent(TEXT("ModularPlayerSpawningComponent"));
	static const FName Name_ServerFPS(TEXT("ServerFPS"));
	static const FName Name_RecorderPlayerState(TEXT("RecorderPlayerState"));
	const bool bIsValid = true
		&& Name_ModularPlayerSpawningComponent == ClassReps[(int32)ENetFields_Private::ModularPlayerSpawningComponent].Property->GetFName()
		&& Name_ServerFPS == ClassReps[(int32)ENetFields_Private::ServerFPS].Property->GetFName()
		&& Name_RecorderPlayerState == ClassReps[(int32)ENetFields_Private::RecorderPlayerState].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AModularExperienceGameState"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AModularExperienceGameState);
AModularExperienceGameState::~AModularExperienceGameState() {}
// End Class AModularExperienceGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularExperienceGameState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AModularExperienceGameState, AModularExperienceGameState::StaticClass, TEXT("AModularExperienceGameState"), &Z_Registration_Info_UClass_AModularExperienceGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AModularExperienceGameState), 119040609U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularExperienceGameState_h_1088441840(TEXT("/Script/ModularGameplayExperiences"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularExperienceGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularExperienceGameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
