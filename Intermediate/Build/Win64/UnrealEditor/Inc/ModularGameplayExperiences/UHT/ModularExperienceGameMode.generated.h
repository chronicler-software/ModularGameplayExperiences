// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameMode/ModularExperienceGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
class UCommonUserInfo;
class UModularPawnData;
enum class ECommonUserOnlineContext : uint8;
enum class ECommonUserPrivilege : uint8;
#ifdef MODULARGAMEPLAYEXPERIENCES_ModularExperienceGameMode_generated_h
#error "ModularExperienceGameMode.generated.h already included, missing '#pragma once' in ModularExperienceGameMode.h"
#endif
#define MODULARGAMEPLAYEXPERIENCES_ModularExperienceGameMode_generated_h

#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularExperienceGameMode_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnUserInitializedForDedicatedServer); \
	DECLARE_FUNCTION(execRequestPlayerRestartNextFrame); \
	DECLARE_FUNCTION(execGetPawnDataForController);


#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularExperienceGameMode_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAModularExperienceGameMode(); \
	friend struct Z_Construct_UClass_AModularExperienceGameMode_Statics; \
public: \
	DECLARE_CLASS(AModularExperienceGameMode, AModularGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModularGameplayExperiences"), NO_API) \
	DECLARE_SERIALIZER(AModularExperienceGameMode)


#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularExperienceGameMode_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AModularExperienceGameMode(AModularExperienceGameMode&&); \
	AModularExperienceGameMode(const AModularExperienceGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AModularExperienceGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AModularExperienceGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AModularExperienceGameMode) \
	NO_API virtual ~AModularExperienceGameMode();


#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularExperienceGameMode_h_26_PROLOG
#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularExperienceGameMode_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularExperienceGameMode_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularExperienceGameMode_h_29_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularExperienceGameMode_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARGAMEPLAYEXPERIENCES_API UClass* StaticClass<class AModularExperienceGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularExperienceGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
