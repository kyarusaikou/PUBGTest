// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestPluginEditor/Public/MyFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyFactory() {}
// Cross Module References
	TESTPLUGINEDITOR_API UClass* Z_Construct_UClass_UMyFactory_NoRegister();
	TESTPLUGINEDITOR_API UClass* Z_Construct_UClass_UMyFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_TestPluginEditor();
// End Cross Module References
	void UMyFactory::StaticRegisterNativesUMyFactory()
	{
	}
	UClass* Z_Construct_UClass_UMyFactory_NoRegister()
	{
		return UMyFactory::StaticClass();
	}
	struct Z_Construct_UClass_UMyFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_TestPluginEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyFactory.h" },
		{ "ModuleRelativePath", "Public/MyFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyFactory_Statics::ClassParams = {
		&UMyFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyFactory, 1453140731);
	template<> TESTPLUGINEDITOR_API UClass* StaticClass<UMyFactory>()
	{
		return UMyFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyFactory(Z_Construct_UClass_UMyFactory, &UMyFactory::StaticClass, TEXT("/Script/TestPluginEditor"), TEXT("UMyFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
