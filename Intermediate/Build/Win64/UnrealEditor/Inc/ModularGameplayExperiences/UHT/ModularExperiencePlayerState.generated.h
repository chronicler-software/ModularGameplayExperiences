// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/ModularExperiencePlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODULARGAMEPLAYEXPERIENCES_ModularExperiencePlayerState_generated_h
#error "ModularExperiencePlayerState.generated.h already included, missing '#pragma once' in ModularExperiencePlayerState.h"
#endif
#define MODULARGAMEPLAYEXPERIENCES_ModularExperiencePlayerState_generated_h

#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_Player_ModularExperiencePlayerState_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_PawnData);


#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_Player_ModularExperiencePlayerState_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAModularExperiencePlayerState(); \
	friend struct Z_Construct_UClass_AModularExperiencePlayerState_Statics; \
public: \
	DECLARE_CLASS(AModularExperiencePlayerState, AModularPlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModularGameplayExperiences"), NO_API) \
	DECLARE_SERIALIZER(AModularExperiencePlayerState) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PawnData=NETFIELD_REP_START, \
		MyPlayerConnectionType, \
		StatTags, \
		ReplicatedViewRotation, \
		NETFIELD_REP_END=ReplicatedViewRotation	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_Player_ModularExperiencePlayerState_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AModularExperiencePlayerState(AModularExperiencePlayerState&&); \
	AModularExperiencePlayerState(const AModularExperiencePlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AModularExperiencePlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AModularExperiencePlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AModularExperiencePlayerState) \
	NO_API virtual ~AModularExperiencePlayerState();


#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_Player_ModularExperiencePlayerState_h_33_PROLOG
#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_Player_ModularExperiencePlayerState_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_Player_ModularExperiencePlayerState_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_Player_ModularExperiencePlayerState_h_36_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_Player_ModularExperiencePlayerState_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARGAMEPLAYEXPERIENCES_API UClass* StaticClass<class AModularExperiencePlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_Player_ModularExperiencePlayerState_h


#define FOREACH_ENUM_EMODULARPLAYERCONNECTIONTYPE(op) \
	op(EModularPlayerConnectionType::Player) \
	op(EModularPlayerConnectionType::LiveSpectator) \
	op(EModularPlayerConnectionType::ReplaySpectator) \
	op(EModularPlayerConnectionType::InactivePlayer) 

enum class EModularPlayerConnectionType : uint8;
template<> struct TIsUEnumClass<EModularPlayerConnectionType> { enum { Value = true }; };
template<> MODULARGAMEPLAYEXPERIENCES_API UEnum* StaticEnum<EModularPlayerConnectionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
