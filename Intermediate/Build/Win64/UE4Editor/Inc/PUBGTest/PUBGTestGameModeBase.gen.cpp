// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PUBGTest/PUBGTestGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePUBGTestGameModeBase() {}
// Cross Module References
	PUBGTEST_API UClass* Z_Construct_UClass_APUBGTestGameModeBase_NoRegister();
	PUBGTEST_API UClass* Z_Construct_UClass_APUBGTestGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PUBGTest();
// End Cross Module References
	void APUBGTestGameModeBase::StaticRegisterNativesAPUBGTestGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_APUBGTestGameModeBase_NoRegister()
	{
		return APUBGTestGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APUBGTestGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APUBGTestGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PUBGTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APUBGTestGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PUBGTestGameModeBase.h" },
		{ "ModuleRelativePath", "PUBGTestGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APUBGTestGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APUBGTestGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APUBGTestGameModeBase_Statics::ClassParams = {
		&APUBGTestGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APUBGTestGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APUBGTestGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APUBGTestGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APUBGTestGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APUBGTestGameModeBase, 3749175534);
	template<> PUBGTEST_API UClass* StaticClass<APUBGTestGameModeBase>()
	{
		return APUBGTestGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APUBGTestGameModeBase(Z_Construct_UClass_APUBGTestGameModeBase, &APUBGTestGameModeBase::StaticClass, TEXT("/Script/PUBGTest"), TEXT("APUBGTestGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APUBGTestGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
