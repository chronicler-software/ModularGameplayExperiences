// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameMode/ModularExperienceGameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FModularVerbMessage;
#ifdef MODULARGAMEPLAYEXPERIENCES_ModularExperienceGameState_generated_h
#error "ModularExperienceGameState.generated.h already included, missing '#pragma once' in ModularExperienceGameState.h"
#endif
#define MODULARGAMEPLAYEXPERIENCES_ModularExperienceGameState_generated_h

#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularExperienceGameState_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastReliableMessageToClients_Implementation(const FModularVerbMessage Message); \
	virtual void MulticastMessageToClients_Implementation(const FModularVerbMessage Message); \
	DECLARE_FUNCTION(execOnRep_RecorderPlayerState); \
	DECLARE_FUNCTION(execMulticastReliableMessageToClients); \
	DECLARE_FUNCTION(execMulticastMessageToClients);


#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularExperienceGameState_h_19_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularExperienceGameState_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAModularExperienceGameState(); \
	friend struct Z_Construct_UClass_AModularExperienceGameState_Statics; \
public: \
	DECLARE_CLASS(AModularExperienceGameState, AModularGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModularGameplayExperiences"), NO_API) \
	DECLARE_SERIALIZER(AModularExperienceGameState) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ModularPlayerSpawningComponent=NETFIELD_REP_START, \
		ServerFPS, \
		RecorderPlayerState, \
		NETFIELD_REP_END=RecorderPlayerState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularExperienceGameState_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AModularExperienceGameState(AModularExperienceGameState&&); \
	AModularExperienceGameState(const AModularExperienceGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AModularExperienceGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AModularExperienceGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AModularExperienceGameState) \
	NO_API virtual ~AModularExperienceGameState();


#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularExperienceGameState_h_16_PROLOG
#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularExperienceGameState_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularExperienceGameState_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularExperienceGameState_h_19_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularExperienceGameState_h_19_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularExperienceGameState_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARGAMEPLAYEXPERIENCES_API UClass* StaticClass<class AModularExperienceGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameMode_ModularExperienceGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
