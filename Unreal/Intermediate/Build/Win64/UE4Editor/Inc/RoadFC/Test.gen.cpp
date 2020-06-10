// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RoadFC/Test.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTest() {}
// Cross Module References
	ROADFC_API UClass* Z_Construct_UClass_ATest_NoRegister();
	ROADFC_API UClass* Z_Construct_UClass_ATest();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RoadFC();
// End Cross Module References
	void ATest::StaticRegisterNativesATest()
	{
	}
	UClass* Z_Construct_UClass_ATest_NoRegister()
	{
		return ATest::StaticClass();
	}
	struct Z_Construct_UClass_ATest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RoadFC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Test.h" },
		{ "ModuleRelativePath", "Test.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATest_Statics::ClassParams = {
		&ATest::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATest, 3050472048);
	template<> ROADFC_API UClass* StaticClass<ATest>()
	{
		return ATest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATest(Z_Construct_UClass_ATest, &ATest::StaticClass, TEXT("/Script/RoadFC"), TEXT("ATest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
