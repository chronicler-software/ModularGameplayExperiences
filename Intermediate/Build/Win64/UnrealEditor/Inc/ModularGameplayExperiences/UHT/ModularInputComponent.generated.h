// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorComponent/ModularInputComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UModularInputComponent;
#ifdef MODULARGAMEPLAYEXPERIENCES_ModularInputComponent_generated_h
#error "ModularInputComponent.generated.h already included, missing '#pragma once' in ModularInputComponent.h"
#endif
#define MODULARGAMEPLAYEXPERIENCES_ModularInputComponent_generated_h

#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_ActorComponent_ModularInputComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindExperienceInputComponent);


#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_ActorComponent_ModularInputComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModularInputComponent(); \
	friend struct Z_Construct_UClass_UModularInputComponent_Statics; \
public: \
	DECLARE_CLASS(UModularInputComponent, UPawnComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModularGameplayExperiences"), NO_API) \
	DECLARE_SERIALIZER(UModularInputComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UModularInputComponent*>(this); }


#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_ActorComponent_ModularInputComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UModularInputComponent(UModularInputComponent&&); \
	UModularInputComponent(const UModularInputComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModularInputComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularInputComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularInputComponent) \
	NO_API virtual ~UModularInputComponent();


#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_ActorComponent_ModularInputComponent_h_22_PROLOG
#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_ActorComponent_ModularInputComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_ActorComponent_ModularInputComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_ActorComponent_ModularInputComponent_h_25_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_ActorComponent_ModularInputComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARGAMEPLAYEXPERIENCES_API UClass* StaticClass<class UModularInputComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_ActorComponent_ModularInputComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
