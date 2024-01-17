// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PUBGTest/MatExIndirectTextureSample.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatExIndirectTextureSample() {}
// Cross Module References
	PUBGTEST_API UClass* Z_Construct_UClass_UMatExIndirectTextureSample_NoRegister();
	PUBGTEST_API UClass* Z_Construct_UClass_UMatExIndirectTextureSample();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSample();
	UPackage* Z_Construct_UPackage__Script_PUBGTest();
	TESTPLUGIN_API UClass* Z_Construct_UClass_UIndirectTexture_NoRegister();
// End Cross Module References
	void UMatExIndirectTextureSample::StaticRegisterNativesUMatExIndirectTextureSample()
	{
	}
	UClass* Z_Construct_UClass_UMatExIndirectTextureSample_NoRegister()
	{
		return UMatExIndirectTextureSample::StaticClass();
	}
	struct Z_Construct_UClass_UMatExIndirectTextureSample_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndirectTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IndirectTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMatExIndirectTextureSample_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionTextureSample,
		(UObject* (*)())Z_Construct_UPackage__Script_PUBGTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatExIndirectTextureSample_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "MatExIndirectTextureSample.h" },
		{ "ModuleRelativePath", "MatExIndirectTextureSample.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatExIndirectTextureSample_Statics::NewProp_IndirectTexture_MetaData[] = {
		{ "Category", "MatExIndirectTextureSample" },
		{ "ModuleRelativePath", "MatExIndirectTextureSample.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMatExIndirectTextureSample_Statics::NewProp_IndirectTexture = { "IndirectTexture", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMatExIndirectTextureSample, IndirectTexture), Z_Construct_UClass_UIndirectTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMatExIndirectTextureSample_Statics::NewProp_IndirectTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatExIndirectTextureSample_Statics::NewProp_IndirectTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMatExIndirectTextureSample_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatExIndirectTextureSample_Statics::NewProp_IndirectTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMatExIndirectTextureSample_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMatExIndirectTextureSample>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMatExIndirectTextureSample_Statics::ClassParams = {
		&UMatExIndirectTextureSample::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMatExIndirectTextureSample_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMatExIndirectTextureSample_Statics::PropPointers),
		0,
		0x001020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMatExIndirectTextureSample_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMatExIndirectTextureSample_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMatExIndirectTextureSample()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMatExIndirectTextureSample_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMatExIndirectTextureSample, 2779816917);
	template<> PUBGTEST_API UClass* StaticClass<UMatExIndirectTextureSample>()
	{
		return UMatExIndirectTextureSample::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMatExIndirectTextureSample(Z_Construct_UClass_UMatExIndirectTextureSample, &UMatExIndirectTextureSample::StaticClass, TEXT("/Script/PUBGTest"), TEXT("UMatExIndirectTextureSample"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatExIndirectTextureSample);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
