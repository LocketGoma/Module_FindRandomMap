// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROADFC_Test_generated_h
#error "Test.generated.h already included, missing '#pragma once' in Test.h"
#endif
#define ROADFC_Test_generated_h

#define FindRandomMap_Source_RoadFC_Test_h_12_SPARSE_DATA
#define FindRandomMap_Source_RoadFC_Test_h_12_RPC_WRAPPERS
#define FindRandomMap_Source_RoadFC_Test_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FindRandomMap_Source_RoadFC_Test_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATest(); \
	friend struct Z_Construct_UClass_ATest_Statics; \
public: \
	DECLARE_CLASS(ATest, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RoadFC"), NO_API) \
	DECLARE_SERIALIZER(ATest)


#define FindRandomMap_Source_RoadFC_Test_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATest(); \
	friend struct Z_Construct_UClass_ATest_Statics; \
public: \
	DECLARE_CLASS(ATest, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RoadFC"), NO_API) \
	DECLARE_SERIALIZER(ATest)


#define FindRandomMap_Source_RoadFC_Test_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATest(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATest(ATest&&); \
	NO_API ATest(const ATest&); \
public:


#define FindRandomMap_Source_RoadFC_Test_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATest(ATest&&); \
	NO_API ATest(const ATest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATest); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATest)


#define FindRandomMap_Source_RoadFC_Test_h_12_PRIVATE_PROPERTY_OFFSET
#define FindRandomMap_Source_RoadFC_Test_h_9_PROLOG
#define FindRandomMap_Source_RoadFC_Test_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FindRandomMap_Source_RoadFC_Test_h_12_PRIVATE_PROPERTY_OFFSET \
	FindRandomMap_Source_RoadFC_Test_h_12_SPARSE_DATA \
	FindRandomMap_Source_RoadFC_Test_h_12_RPC_WRAPPERS \
	FindRandomMap_Source_RoadFC_Test_h_12_INCLASS \
	FindRandomMap_Source_RoadFC_Test_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FindRandomMap_Source_RoadFC_Test_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FindRandomMap_Source_RoadFC_Test_h_12_PRIVATE_PROPERTY_OFFSET \
	FindRandomMap_Source_RoadFC_Test_h_12_SPARSE_DATA \
	FindRandomMap_Source_RoadFC_Test_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FindRandomMap_Source_RoadFC_Test_h_12_INCLASS_NO_PURE_DECLS \
	FindRandomMap_Source_RoadFC_Test_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROADFC_API UClass* StaticClass<class ATest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FindRandomMap_Source_RoadFC_Test_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
