// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayExperiences/Public/GameMode/ModularExperienceGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularExperienceGameMode() {}

// Begin Cross Module References
COMMONUSER_API UClass* Z_Construct_UClass_UCommonUserInfo_NoRegister();
COMMONUSER_API UEnum* Z_Construct_UEnum_CommonUser_ECommonUserOnlineContext();
COMMONUSER_API UEnum* Z_Construct_UEnum_CommonUser_ECommonUserPrivilege();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameModeBase();
MODULARGAMEPLAYDATA_API UClass* Z_Construct_UClass_UModularPawnData_NoRegister();
MODULARGAMEPLAYEXPERIENCES_API UClass* Z_Construct_UClass_AModularExperienceGameMode();
MODULARGAMEPLAYEXPERIENCES_API UClass* Z_Construct_UClass_AModularExperienceGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularGameplayExperiences();
// End Cross Module References

// Begin Class AModularExperienceGameMode Function GetPawnDataForController
struct Z_Construct_UFunction_AModularExperienceGameMode_GetPawnDataForController_Statics
{
	struct ModularExperienceGameMode_eventGetPawnDataForController_Parms
	{
		const AController* InController;
		const UModularPawnData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|Pawn" },
		{ "ModuleRelativePath", "Public/GameMode/ModularExperienceGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InController_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AModularExperienceGameMode_GetPawnDataForController_Statics::NewProp_InController = { "InController", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularExperienceGameMode_eventGetPawnDataForController_Parms, InController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InController_MetaData), NewProp_InController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AModularExperienceGameMode_GetPawnDataForController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularExperienceGameMode_eventGetPawnDataForController_Parms, ReturnValue), Z_Construct_UClass_UModularPawnData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModularExperienceGameMode_GetPawnDataForController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModularExperienceGameMode_GetPawnDataForController_Statics::NewProp_InController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModularExperienceGameMode_GetPawnDataForController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AModularExperienceGameMode_GetPawnDataForController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AModularExperienceGameMode_GetPawnDataForController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModularExperienceGameMode, nullptr, "GetPawnDataForController", nullptr, nullptr, Z_Construct_UFunction_AModularExperienceGameMode_GetPawnDataForController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModularExperienceGameMode_GetPawnDataForController_Statics::PropPointers), sizeof(Z_Construct_UFunction_AModularExperienceGameMode_GetPawnDataForController_Statics::ModularExperienceGameMode_eventGetPawnDataForController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AModularExperienceGameMode_GetPawnDataForController_Statics::Function_MetaDataParams), Z_Construct_UFunction_AModularExperienceGameMode_GetPawnDataForController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AModularExperienceGameMode_GetPawnDataForController_Statics::ModularExperienceGameMode_eventGetPawnDataForController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AModularExperienceGameMode_GetPawnDataForController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AModularExperienceGameMode_GetPawnDataForController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AModularExperienceGameMode::execGetPawnDataForController)
{
	P_GET_OBJECT(AController,Z_Param_InController);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UModularPawnData**)Z_Param__Result=P_THIS->GetPawnDataForController(Z_Param_InController);
	P_NATIVE_END;
}
// End Class AModularExperienceGameMode Function GetPawnDataForController

// Begin Class AModularExperienceGameMode Function OnUserInitializedForDedicatedServer
struct Z_Construct_UFunction_AModularExperienceGameMode_OnUserInitializedForDedicatedServer_Statics
{
	struct ModularExperienceGameMode_eventOnUserInitializedForDedicatedServer_Parms
	{
		const UCommonUserInfo* UserInfo;
		bool bSuccess;
		FText Error;
		ECommonUserPrivilege RequestedPrivilege;
		ECommonUserOnlineContext OnlineContext;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameMode/ModularExperienceGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UserInfo;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Error;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RequestedPrivilege_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RequestedPrivilege;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OnlineContext_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OnlineContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AModularExperienceGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_UserInfo = { "UserInfo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularExperienceGameMode_eventOnUserInitializedForDedicatedServer_Parms, UserInfo), Z_Construct_UClass_UCommonUserInfo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserInfo_MetaData), NewProp_UserInfo_MetaData) };
void Z_Construct_UFunction_AModularExperienceGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((ModularExperienceGameMode_eventOnUserInitializedForDedicatedServer_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AModularExperienceGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularExperienceGameMode_eventOnUserInitializedForDedicatedServer_Parms), &Z_Construct_UFunction_AModularExperienceGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AModularExperienceGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularExperienceGameMode_eventOnUserInitializedForDedicatedServer_Parms, Error), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AModularExperienceGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_RequestedPrivilege_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AModularExperienceGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_RequestedPrivilege = { "RequestedPrivilege", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularExperienceGameMode_eventOnUserInitializedForDedicatedServer_Parms, RequestedPrivilege), Z_Construct_UEnum_CommonUser_ECommonUserPrivilege, METADATA_PARAMS(0, nullptr) }; // 3165184135
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AModularExperienceGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_OnlineContext_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AModularExperienceGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_OnlineContext = { "OnlineContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularExperienceGameMode_eventOnUserInitializedForDedicatedServer_Parms, OnlineContext), Z_Construct_UEnum_CommonUser_ECommonUserOnlineContext, METADATA_PARAMS(0, nullptr) }; // 3178011620
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModularExperienceGameMode_OnUserInitializedForDedicatedServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModularExperienceGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_UserInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModularExperienceGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModularExperienceGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_Error,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModularExperienceGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_RequestedPrivilege_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModularExperienceGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_RequestedPrivilege,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModularExperienceGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_OnlineContext_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModularExperienceGameMode_OnUserInitializedForDedicatedServer_Statics::NewProp_OnlineContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AModularExperienceGameMode_OnUserInitializedForDedicatedServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AModularExperienceGameMode_OnUserInitializedForDedicatedServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModularExperienceGameMode, nullptr, "OnUserInitializedForDedicatedServer", nullptr, nullptr, Z_Construct_UFunction_AModularExperienceGameMode_OnUserInitializedForDedicatedServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModularExperienceGameMode_OnUserInitializedForDedicatedServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AModularExperienceGameMode_OnUserInitializedForDedicatedServer_Statics::ModularExperienceGameMode_eventOnUserInitializedForDedicatedServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AModularExperienceGameMode_OnUserInitializedForDedicatedServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AModularExperienceGameMode_OnUserInitializedForDedicatedServer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AModularExperienceGameMode_OnUserInitializedForDedicatedServer_Statics::ModularExperienceGameMode_eventOnUserInitializedForDedicatedServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AModularExperienceGameMode_OnUserInitializedForDedicatedServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AModularExperienceGameMode_OnUserInitializedForDedicatedServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AModularExperienceGameMode::execOnUserInitializedForDedicatedServer)
{
	P_GET_OBJECT(UCommonUserInfo,Z_Param_UserInfo);
	P_GET_UBOOL(Z_Param_bSuccess);
	P_GET_PROPERTY(FTextProperty,Z_Param_Error);
	P_GET_ENUM(ECommonUserPrivilege,Z_Param_RequestedPrivilege);
	P_GET_ENUM(ECommonUserOnlineContext,Z_Param_OnlineContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnUserInitializedForDedicatedServer(Z_Param_UserInfo,Z_Param_bSuccess,Z_Param_Error,ECommonUserPrivilege(Z_Param_RequestedPrivilege),ECommonUserOnlineContext(Z_Param_OnlineContext));
	P_NATIVE_END;
}
// End Class AModularExperienceGameMode Function OnUserInitializedForDedicatedServer

// Begin Class AModularExperienceGameMode Function RequestPlayerRestartNextFrame
struct Z_Construct_UFunction_AModularExperienceGameMode_RequestPlayerRestartNextFrame_Statics
{
	struct ModularExperienceGameMode_eventRequestPlayerRestartNextFrame_Parms
	{
		AController* Controller;
		bool bForceReset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Restart (respawn) the specified player or bot next frame\n// - If bForceReset is true, the controller will be reset this frame (abandoning the currently possessed pawn, if any)\n" },
#endif
		{ "CPP_Default_bForceReset", "false" },
		{ "ModuleRelativePath", "Public/GameMode/ModularExperienceGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Restart (respawn) the specified player or bot next frame\n- If bForceReset is true, the controller will be reset this frame (abandoning the currently possessed pawn, if any)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static void NewProp_bForceReset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceReset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AModularExperienceGameMode_RequestPlayerRestartNextFrame_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularExperienceGameMode_eventRequestPlayerRestartNextFrame_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AModularExperienceGameMode_RequestPlayerRestartNextFrame_Statics::NewProp_bForceReset_SetBit(void* Obj)
{
	((ModularExperienceGameMode_eventRequestPlayerRestartNextFrame_Parms*)Obj)->bForceReset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AModularExperienceGameMode_RequestPlayerRestartNextFrame_Statics::NewProp_bForceReset = { "bForceReset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularExperienceGameMode_eventRequestPlayerRestartNextFrame_Parms), &Z_Construct_UFunction_AModularExperienceGameMode_RequestPlayerRestartNextFrame_Statics::NewProp_bForceReset_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModularExperienceGameMode_RequestPlayerRestartNextFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModularExperienceGameMode_RequestPlayerRestartNextFrame_Statics::NewProp_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModularExperienceGameMode_RequestPlayerRestartNextFrame_Statics::NewProp_bForceReset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AModularExperienceGameMode_RequestPlayerRestartNextFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AModularExperienceGameMode_RequestPlayerRestartNextFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModularExperienceGameMode, nullptr, "RequestPlayerRestartNextFrame", nullptr, nullptr, Z_Construct_UFunction_AModularExperienceGameMode_RequestPlayerRestartNextFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModularExperienceGameMode_RequestPlayerRestartNextFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_AModularExperienceGameMode_RequestPlayerRestartNextFrame_Statics::ModularExperienceGameMode_eventRequestPlayerRestartNextFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AModularExperienceGameMode_RequestPlayerRestartNextFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AModularExperienceGameMode_RequestPlayerRestartNextFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AModularExperienceGameMode_RequestPlayerRestartNextFrame_Statics::ModularExperienceGameMode_eventRequestPlayerRestartNextFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AModularExperienceGameMode_RequestPlayerRestartNextFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AModularExperienceGameMode_RequestPlayerRestartNextFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AModularExperienceGameMode::execRequestPlayerRestartNextFrame)
{
	P_GET_OBJECT(AController,Z_Param_Controller);
	P_GET_UBOOL(Z_Param_bForceReset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestPlayerRestartNextFrame(Z_Param_Controller,Z_Param_bForceReset);
	P_NATIVE_END;
}
// End Class AModularExperienceGameMode Function RequestPlayerRestartNextFrame

// Begin Class AModularExperienceGameMode
void AModularExperienceGameMode::StaticRegisterNativesAModularExperienceGameMode()
{
	UClass* Class = AModularExperienceGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPawnDataForController", &AModularExperienceGameMode::execGetPawnDataForController },
		{ "OnUserInitializedForDedicatedServer", &AModularExperienceGameMode::execOnUserInitializedForDedicatedServer },
		{ "RequestPlayerRestartNextFrame", &AModularExperienceGameMode::execRequestPlayerRestartNextFrame },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AModularExperienceGameMode);
UClass* Z_Construct_UClass_AModularExperienceGameMode_NoRegister()
{
	return AModularExperienceGameMode::StaticClass();
}
struct Z_Construct_UClass_AModularExperienceGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Game mode that defers to Gameplay Experiences for flexible functionality.\n *\n * Automatically sets up Pawn spawning data from ModularPawnData applied with the ModularPawnComponent.\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMode/ModularExperienceGameMode.h" },
		{ "ModuleRelativePath", "Public/GameMode/ModularExperienceGameMode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "The base game mode class used by this project." },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Game mode that defers to Gameplay Experiences for flexible functionality.\n\nAutomatically sets up Pawn spawning data from ModularPawnData applied with the ModularPawnComponent." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AModularExperienceGameMode_GetPawnDataForController, "GetPawnDataForController" }, // 2415912480
		{ &Z_Construct_UFunction_AModularExperienceGameMode_OnUserInitializedForDedicatedServer, "OnUserInitializedForDedicatedServer" }, // 3759776534
		{ &Z_Construct_UFunction_AModularExperienceGameMode_RequestPlayerRestartNextFrame, "RequestPlayerRestartNextFrame" }, // 1122106484
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModularExperienceGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AModularExperienceGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AModularGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayExperiences,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModularExperienceGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AModularExperienceGameMode_Statics::ClassParams = {
	&AModularExperienceGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AModularExperienceGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AModularExperienceGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AModularExperienceGameMode()
{
	if (!Z_Registration_Info_UClass_AModularExperienceGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AModularExperienceGameMode.OuterSingleton, Z_Construct_UClass_AModularExperienceGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AModularExperienceGameMode.OuterSingleton;
}
template<> MODULARGAMEPLAYEXPERIENCES_API UClass* StaticClass<AModularExperienceGameMode>()
{
	return AModularExperienceGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AModularExperienceGameMode);
AModularExperienceGameMode::~AModularExperienceGameMode() {}
// End Class AModularExperienceGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularExperienceGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AModularExperienceGameMode, AModularExperienceGameMode::StaticClass, TEXT("AModularExperienceGameMode"), &Z_Registration_Info_UClass_AModularExperienceGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AModularExperienceGameMode), 312470093U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularExperienceGameMode_h_1519545679(TEXT("/Script/ModularGameplayExperiences"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularExperienceGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularExperienceGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
