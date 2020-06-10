// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FINDRANDOMMAP_FindRandomMapCharacter_generated_h
#error "FindRandomMapCharacter.generated.h already included, missing '#pragma once' in FindRandomMapCharacter.h"
#endif
#define FINDRANDOMMAP_FindRandomMapCharacter_generated_h

#define FindRandomMap_Source_FindRandomMap_FindRandomMapCharacter_h_12_SPARSE_DATA
#define FindRandomMap_Source_FindRandomMap_FindRandomMapCharacter_h_12_RPC_WRAPPERS
#define FindRandomMap_Source_FindRandomMap_FindRandomMapCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FindRandomMap_Source_FindRandomMap_FindRandomMapCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFindRandomMapCharacter(); \
	friend struct Z_Construct_UClass_AFindRandomMapCharacter_Statics; \
public: \
	DECLARE_CLASS(AFindRandomMapCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FindRandomMap"), NO_API) \
	DECLARE_SERIALIZER(AFindRandomMapCharacter)


#define FindRandomMap_Source_FindRandomMap_FindRandomMapCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFindRandomMapCharacter(); \
	friend struct Z_Construct_UClass_AFindRandomMapCharacter_Statics; \
public: \
	DECLARE_CLASS(AFindRandomMapCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FindRandomMap"), NO_API) \
	DECLARE_SERIALIZER(AFindRandomMapCharacter)


#define FindRandomMap_Source_FindRandomMap_FindRandomMapCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFindRandomMapCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFindRandomMapCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFindRandomMapCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFindRandomMapCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFindRandomMapCharacter(AFindRandomMapCharacter&&); \
	NO_API AFindRandomMapCharacter(const AFindRandomMapCharacter&); \
public:


#define FindRandomMap_Source_FindRandomMap_FindRandomMapCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFindRandomMapCharacter(AFindRandomMapCharacter&&); \
	NO_API AFindRandomMapCharacter(const AFindRandomMapCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFindRandomMapCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFindRandomMapCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFindRandomMapCharacter)


#define FindRandomMap_Source_FindRandomMap_FindRandomMapCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AFindRandomMapCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AFindRandomMapCharacter, FollowCamera); }


#define FindRandomMap_Source_FindRandomMap_FindRandomMapCharacter_h_9_PROLOG
#define FindRandomMap_Source_FindRandomMap_FindRandomMapCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FindRandomMap_Source_FindRandomMap_FindRandomMapCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FindRandomMap_Source_FindRandomMap_FindRandomMapCharacter_h_12_SPARSE_DATA \
	FindRandomMap_Source_FindRandomMap_FindRandomMapCharacter_h_12_RPC_WRAPPERS \
	FindRandomMap_Source_FindRandomMap_FindRandomMapCharacter_h_12_INCLASS \
	FindRandomMap_Source_FindRandomMap_FindRandomMapCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FindRandomMap_Source_FindRandomMap_FindRandomMapCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FindRandomMap_Source_FindRandomMap_FindRandomMapCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FindRandomMap_Source_FindRandomMap_FindRandomMapCharacter_h_12_SPARSE_DATA \
	FindRandomMap_Source_FindRandomMap_FindRandomMapCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FindRandomMap_Source_FindRandomMap_FindRandomMapCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FindRandomMap_Source_FindRandomMap_FindRandomMapCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FINDRANDOMMAP_API UClass* StaticClass<class AFindRandomMapCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FindRandomMap_Source_FindRandomMap_FindRandomMapCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
