// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayExperiences/Public/GameMode/ModularUserFacingExperienceDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularUserFacingExperienceDefinition() {}

// Begin Cross Module References
COMMONUSER_API UClass* Z_Construct_UClass_UCommonSession_HostSessionRequest_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
MODULARGAMEPLAYEXPERIENCES_API UClass* Z_Construct_UClass_UModularUserFacingExperienceDefinition();
MODULARGAMEPLAYEXPERIENCES_API UClass* Z_Construct_UClass_UModularUserFacingExperienceDefinition_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularGameplayExperiences();
// End Cross Module References

// Begin Class UModularUserFacingExperienceDefinition Function CreateHostingRequest
struct Z_Construct_UFunction_UModularUserFacingExperienceDefinition_CreateHostingRequest_Statics
{
	struct ModularUserFacingExperienceDefinition_eventCreateHostingRequest_Parms
	{
		UCommonSession_HostSessionRequest* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Create a request object that is used to actually start a session with these settings */" },
#endif
		{ "ModuleRelativePath", "Public/GameMode/ModularUserFacingExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Create a request object that is used to actually start a session with these settings" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModularUserFacingExperienceDefinition_CreateHostingRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularUserFacingExperienceDefinition_eventCreateHostingRequest_Parms, ReturnValue), Z_Construct_UClass_UCommonSession_HostSessionRequest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularUserFacingExperienceDefinition_CreateHostingRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularUserFacingExperienceDefinition_CreateHostingRequest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularUserFacingExperienceDefinition_CreateHostingRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularUserFacingExperienceDefinition_CreateHostingRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularUserFacingExperienceDefinition, nullptr, "CreateHostingRequest", nullptr, nullptr, Z_Construct_UFunction_UModularUserFacingExperienceDefinition_CreateHostingRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularUserFacingExperienceDefinition_CreateHostingRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularUserFacingExperienceDefinition_CreateHostingRequest_Statics::ModularUserFacingExperienceDefinition_eventCreateHostingRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularUserFacingExperienceDefinition_CreateHostingRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularUserFacingExperienceDefinition_CreateHostingRequest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularUserFacingExperienceDefinition_CreateHostingRequest_Statics::ModularUserFacingExperienceDefinition_eventCreateHostingRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularUserFacingExperienceDefinition_CreateHostingRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularUserFacingExperienceDefinition_CreateHostingRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularUserFacingExperienceDefinition::execCreateHostingRequest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCommonSession_HostSessionRequest**)Z_Param__Result=P_THIS->CreateHostingRequest();
	P_NATIVE_END;
}
// End Class UModularUserFacingExperienceDefinition Function CreateHostingRequest

// Begin Class UModularUserFacingExperienceDefinition
void UModularUserFacingExperienceDefinition::StaticRegisterNativesUModularUserFacingExperienceDefinition()
{
	UClass* Class = UModularUserFacingExperienceDefinition::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateHostingRequest", &UModularUserFacingExperienceDefinition::execCreateHostingRequest },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModularUserFacingExperienceDefinition);
UClass* Z_Construct_UClass_UModularUserFacingExperienceDefinition_NoRegister()
{
	return UModularUserFacingExperienceDefinition::StaticClass();
}
struct Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Description of settings used to display experiences in the UI and start a new session */" },
#endif
		{ "IncludePath", "GameMode/ModularUserFacingExperienceDefinition.h" },
		{ "ModuleRelativePath", "Public/GameMode/ModularUserFacingExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Description of settings used to display experiences in the UI and start a new session" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapID_MetaData[] = {
		{ "AllowedTypes", "Map" },
		{ "Category", "Experience" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The specific map to load */" },
#endif
		{ "ModuleRelativePath", "Public/GameMode/ModularUserFacingExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The specific map to load" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExperienceID_MetaData[] = {
		{ "AllowedTypes", "ModularExperienceDefinition" },
		{ "Category", "Experience" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The gameplay experience to load */" },
#endif
		{ "ModuleRelativePath", "Public/GameMode/ModularUserFacingExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The gameplay experience to load" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtraArgs_MetaData[] = {
		{ "Category", "Experience" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Extra arguments passed as URL options to the game */" },
#endif
		{ "ModuleRelativePath", "Public/GameMode/ModularUserFacingExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extra arguments passed as URL options to the game" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileTitle_MetaData[] = {
		{ "Category", "Experience" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Primary title in the UI */" },
#endif
		{ "ModuleRelativePath", "Public/GameMode/ModularUserFacingExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Primary title in the UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSubTitle_MetaData[] = {
		{ "Category", "Experience" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Secondary title */" },
#endif
		{ "ModuleRelativePath", "Public/GameMode/ModularUserFacingExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Secondary title" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileDescription_MetaData[] = {
		{ "Category", "Experience" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Full description */" },
#endif
		{ "ModuleRelativePath", "Public/GameMode/ModularUserFacingExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Full description" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileIcon_MetaData[] = {
		{ "Category", "Experience" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Icon used in the UI */" },
#endif
		{ "ModuleRelativePath", "Public/GameMode/ModularUserFacingExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Icon used in the UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingScreenWidget_MetaData[] = {
		{ "Category", "LoadingScreen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The loading screen widget to show when loading into (or back out of) a given experience */" },
#endif
		{ "ModuleRelativePath", "Public/GameMode/ModularUserFacingExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The loading screen widget to show when loading into (or back out of) a given experience" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDefaultExperience_MetaData[] = {
		{ "Category", "Experience" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, this is a default experience that should be used for quick play and given priority in the UI */" },
#endif
		{ "ModuleRelativePath", "Public/GameMode/ModularUserFacingExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, this is a default experience that should be used for quick play and given priority in the UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowInFrontEnd_MetaData[] = {
		{ "Category", "Experience" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, this will show up in the experiences list in the front-end */" },
#endif
		{ "ModuleRelativePath", "Public/GameMode/ModularUserFacingExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, this will show up in the experiences list in the front-end" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecordReplay_MetaData[] = {
		{ "Category", "Experience" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, a replay will be recorded of the game */" },
#endif
		{ "ModuleRelativePath", "Public/GameMode/ModularUserFacingExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, a replay will be recorded of the game" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlayerCount_MetaData[] = {
		{ "Category", "Experience" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Max number of players for this session */" },
#endif
		{ "ModuleRelativePath", "Public/GameMode/ModularUserFacingExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max number of players for this session" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MapID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExperienceID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExtraArgs_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExtraArgs_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ExtraArgs;
	static const UECodeGen_Private::FTextPropertyParams NewProp_TileTitle;
	static const UECodeGen_Private::FTextPropertyParams NewProp_TileSubTitle;
	static const UECodeGen_Private::FTextPropertyParams NewProp_TileDescription;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TileIcon;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_LoadingScreenWidget;
	static void NewProp_bIsDefaultExperience_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDefaultExperience;
	static void NewProp_bShowInFrontEnd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowInFrontEnd;
	static void NewProp_bRecordReplay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordReplay;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayerCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UModularUserFacingExperienceDefinition_CreateHostingRequest, "CreateHostingRequest" }, // 3165146800
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularUserFacingExperienceDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::NewProp_MapID = { "MapID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularUserFacingExperienceDefinition, MapID), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapID_MetaData), NewProp_MapID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::NewProp_ExperienceID = { "ExperienceID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularUserFacingExperienceDefinition, ExperienceID), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExperienceID_MetaData), NewProp_ExperienceID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::NewProp_ExtraArgs_ValueProp = { "ExtraArgs", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::NewProp_ExtraArgs_Key_KeyProp = { "ExtraArgs_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::NewProp_ExtraArgs = { "ExtraArgs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularUserFacingExperienceDefinition, ExtraArgs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtraArgs_MetaData), NewProp_ExtraArgs_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::NewProp_TileTitle = { "TileTitle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularUserFacingExperienceDefinition, TileTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileTitle_MetaData), NewProp_TileTitle_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::NewProp_TileSubTitle = { "TileSubTitle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularUserFacingExperienceDefinition, TileSubTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSubTitle_MetaData), NewProp_TileSubTitle_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::NewProp_TileDescription = { "TileDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularUserFacingExperienceDefinition, TileDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileDescription_MetaData), NewProp_TileDescription_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::NewProp_TileIcon = { "TileIcon", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularUserFacingExperienceDefinition, TileIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileIcon_MetaData), NewProp_TileIcon_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::NewProp_LoadingScreenWidget = { "LoadingScreenWidget", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularUserFacingExperienceDefinition, LoadingScreenWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingScreenWidget_MetaData), NewProp_LoadingScreenWidget_MetaData) };
void Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::NewProp_bIsDefaultExperience_SetBit(void* Obj)
{
	((UModularUserFacingExperienceDefinition*)Obj)->bIsDefaultExperience = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::NewProp_bIsDefaultExperience = { "bIsDefaultExperience", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UModularUserFacingExperienceDefinition), &Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::NewProp_bIsDefaultExperience_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDefaultExperience_MetaData), NewProp_bIsDefaultExperience_MetaData) };
void Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::NewProp_bShowInFrontEnd_SetBit(void* Obj)
{
	((UModularUserFacingExperienceDefinition*)Obj)->bShowInFrontEnd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::NewProp_bShowInFrontEnd = { "bShowInFrontEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UModularUserFacingExperienceDefinition), &Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::NewProp_bShowInFrontEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowInFrontEnd_MetaData), NewProp_bShowInFrontEnd_MetaData) };
void Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::NewProp_bRecordReplay_SetBit(void* Obj)
{
	((UModularUserFacingExperienceDefinition*)Obj)->bRecordReplay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::NewProp_bRecordReplay = { "bRecordReplay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UModularUserFacingExperienceDefinition), &Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::NewProp_bRecordReplay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecordReplay_MetaData), NewProp_bRecordReplay_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::NewProp_MaxPlayerCount = { "MaxPlayerCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularUserFacingExperienceDefinition, MaxPlayerCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPlayerCount_MetaData), NewProp_MaxPlayerCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::NewProp_MapID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::NewProp_ExperienceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::NewProp_ExtraArgs_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::NewProp_ExtraArgs_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::NewProp_ExtraArgs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::NewProp_TileTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::NewProp_TileSubTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::NewProp_TileDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::NewProp_TileIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::NewProp_LoadingScreenWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::NewProp_bIsDefaultExperience,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::NewProp_bShowInFrontEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::NewProp_bRecordReplay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::NewProp_MaxPlayerCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayExperiences,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::ClassParams = {
	&UModularUserFacingExperienceDefinition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModularUserFacingExperienceDefinition()
{
	if (!Z_Registration_Info_UClass_UModularUserFacingExperienceDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularUserFacingExperienceDefinition.OuterSingleton, Z_Construct_UClass_UModularUserFacingExperienceDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularUserFacingExperienceDefinition.OuterSingleton;
}
template<> MODULARGAMEPLAYEXPERIENCES_API UClass* StaticClass<UModularUserFacingExperienceDefinition>()
{
	return UModularUserFacingExperienceDefinition::StaticClass();
}
UModularUserFacingExperienceDefinition::UModularUserFacingExperienceDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModularUserFacingExperienceDefinition);
UModularUserFacingExperienceDefinition::~UModularUserFacingExperienceDefinition() {}
// End Class UModularUserFacingExperienceDefinition

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularUserFacingExperienceDefinition_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularUserFacingExperienceDefinition, UModularUserFacingExperienceDefinition::StaticClass, TEXT("UModularUserFacingExperienceDefinition"), &Z_Registration_Info_UClass_UModularUserFacingExperienceDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularUserFacingExperienceDefinition), 231199144U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularUserFacingExperienceDefinition_h_3087408334(TEXT("/Script/ModularGameplayExperiences"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularUserFacingExperienceDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularUserFacingExperienceDefinition_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
