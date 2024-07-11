// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayExperiences/Public/GameplayTagStack.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTagStack() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
MODULARGAMEPLAYEXPERIENCES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagStack();
MODULARGAMEPLAYEXPERIENCES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagStackContainer();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
UPackage* Z_Construct_UPackage__Script_ModularGameplayExperiences();
// End Cross Module References

// Begin ScriptStruct FGameplayTagStack
static_assert(std::is_polymorphic<FGameplayTagStack>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FGameplayTagStack cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagStack;
class UScriptStruct* FGameplayTagStack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagStack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagStack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagStack, (UObject*)Z_Construct_UPackage__Script_ModularGameplayExperiences(), TEXT("GameplayTagStack"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagStack.OuterSingleton;
}
template<> MODULARGAMEPLAYEXPERIENCES_API UScriptStruct* StaticStruct<FGameplayTagStack>()
{
	return FGameplayTagStack::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameplayTagStack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Represents one stack of a gameplay tag (tag + count)\n */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayTagStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents one stack of a gameplay tag (tag + count)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayTagStack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayTagStack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagStack>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagStack_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTagStack, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayTagStack_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTagStack, StackCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackCount_MetaData), NewProp_StackCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagStack_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagStack_Statics::NewProp_StackCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagStack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagStack_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayExperiences,
	Z_Construct_UScriptStruct_FFastArraySerializerItem,
	&NewStructOps,
	"GameplayTagStack",
	Z_Construct_UScriptStruct_FGameplayTagStack_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagStack_Statics::PropPointers),
	sizeof(FGameplayTagStack),
	alignof(FGameplayTagStack),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagStack_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayTagStack_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagStack()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagStack.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagStack.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagStack_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagStack.InnerSingleton;
}
// End ScriptStruct FGameplayTagStack

// Begin ScriptStruct FGameplayTagStackContainer
static_assert(std::is_polymorphic<FGameplayTagStackContainer>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FGameplayTagStackContainer cannot be polymorphic unless super FFastArraySerializer is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagStackContainer;
class UScriptStruct* FGameplayTagStackContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagStackContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagStackContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagStackContainer, (UObject*)Z_Construct_UPackage__Script_ModularGameplayExperiences(), TEXT("GameplayTagStackContainer"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagStackContainer.OuterSingleton;
}
template<> MODULARGAMEPLAYEXPERIENCES_API UScriptStruct* StaticStruct<FGameplayTagStackContainer>()
{
	return FGameplayTagStackContainer::StaticStruct();
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
UE_NET_IMPLEMENT_FASTARRAY(FGameplayTagStackContainer);
#else
UE_NET_IMPLEMENT_FASTARRAY_STUB(FGameplayTagStackContainer);
#endif
struct Z_Construct_UScriptStruct_FGameplayTagStackContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Container of gameplay tag stacks */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayTagStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Container of gameplay tag stacks" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stacks_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Replicated list of gameplay tag stacks\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayTagStack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replicated list of gameplay tag stacks" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stacks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Stacks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagStackContainer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagStackContainer_Statics::NewProp_Stacks_Inner = { "Stacks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTagStack, METADATA_PARAMS(0, nullptr) }; // 4031991426
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayTagStackContainer_Statics::NewProp_Stacks = { "Stacks", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameplayTagStackContainer, Stacks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stacks_MetaData), NewProp_Stacks_MetaData) }; // 4031991426
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagStackContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagStackContainer_Statics::NewProp_Stacks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagStackContainer_Statics::NewProp_Stacks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagStackContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagStackContainer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayExperiences,
	Z_Construct_UScriptStruct_FFastArraySerializer,
	&NewStructOps,
	"GameplayTagStackContainer",
	Z_Construct_UScriptStruct_FGameplayTagStackContainer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagStackContainer_Statics::PropPointers),
	sizeof(FGameplayTagStackContainer),
	alignof(FGameplayTagStackContainer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagStackContainer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameplayTagStackContainer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagStackContainer()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagStackContainer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagStackContainer.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagStackContainer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagStackContainer.InnerSingleton;
}
// End ScriptStruct FGameplayTagStackContainer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameplayTagStack_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGameplayTagStack::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagStack_Statics::NewStructOps, TEXT("GameplayTagStack"), &Z_Registration_Info_UScriptStruct_GameplayTagStack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagStack), 4031991426U) },
		{ FGameplayTagStackContainer::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagStackContainer_Statics::NewStructOps, TEXT("GameplayTagStackContainer"), &Z_Registration_Info_UScriptStruct_GameplayTagStackContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagStackContainer), 997298907U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameplayTagStack_h_3597747374(TEXT("/Script/ModularGameplayExperiences"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameplayTagStack_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayExperiences_Source_ModularGameplayExperiences_Public_GameplayTagStack_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
