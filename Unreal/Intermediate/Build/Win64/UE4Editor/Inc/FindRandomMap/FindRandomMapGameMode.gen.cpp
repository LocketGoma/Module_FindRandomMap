// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FindRandomMap/FindRandomMapGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFindRandomMapGameMode() {}
// Cross Module References
	FINDRANDOMMAP_API UClass* Z_Construct_UClass_AFindRandomMapGameMode_NoRegister();
	FINDRANDOMMAP_API UClass* Z_Construct_UClass_AFindRandomMapGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FindRandomMap();
// End Cross Module References
	void AFindRandomMapGameMode::StaticRegisterNativesAFindRandomMapGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFindRandomMapGameMode_NoRegister()
	{
		return AFindRandomMapGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFindRandomMapGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFindRandomMapGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FindRandomMap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFindRandomMapGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FindRandomMapGameMode.h" },
		{ "ModuleRelativePath", "FindRandomMapGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFindRandomMapGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFindRandomMapGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFindRandomMapGameMode_Statics::ClassParams = {
		&AFindRandomMapGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFindRandomMapGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFindRandomMapGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFindRandomMapGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFindRandomMapGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFindRandomMapGameMode, 85636450);
	template<> FINDRANDOMMAP_API UClass* StaticClass<AFindRandomMapGameMode>()
	{
		return AFindRandomMapGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFindRandomMapGameMode(Z_Construct_UClass_AFindRandomMapGameMode, &AFindRandomMapGameMode::StaticClass, TEXT("/Script/FindRandomMap"), TEXT("AFindRandomMapGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFindRandomMapGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
