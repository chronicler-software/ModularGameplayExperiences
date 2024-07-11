// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorComponent/ModularPawnComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UModularPawnComponent;
#ifdef MODULARGAMEPLAYEXPERIENCES_ModularPawnComponent_generated_h
#error "ModularPawnComponent.generated.h already included, missing '#pragma once' in ModularPawnComponent.h"
#endif
#define MODULARGAMEPLAYEXPERIENCES_ModularPawnComponent_generated_h

#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_ActorComponent_ModularPawnComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_PawnData); \
	DECLARE_FUNCTION(execFindModularPawnComponent);


#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_ActorComponent_ModularPawnComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModularPawnComponent(); \
	friend struct Z_Construct_UClass_UModularPawnComponent_Statics; \
public: \
	DECLARE_CLASS(UModularPawnComponent, UPawnComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModularGameplayExperiences"), NO_API) \
	DECLARE_SERIALIZER(UModularPawnComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UModularPawnComponent*>(this); } \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PawnData=NETFIELD_REP_START, \
		NETFIELD_REP_END=PawnData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_ActorComponent_ModularPawnComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UModularPawnComponent(UModularPawnComponent&&); \
	UModularPawnComponent(const UModularPawnComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModularPawnComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularPawnComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularPawnComponent) \
	NO_API virtual ~UModularPawnComponent();


#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_ActorComponent_ModularPawnComponent_h_16_PROLOG
#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_ActorComponent_ModularPawnComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_ActorComponent_ModularPawnComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_ActorComponent_ModularPawnComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_ActorComponent_ModularPawnComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARGAMEPLAYEXPERIENCES_API UClass* StaticClass<class UModularPawnComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_ActorComponent_ModularPawnComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
