// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTPERSON_MyChar_generated_h
#error "MyChar.generated.h already included, missing '#pragma once' in MyChar.h"
#endif
#define FIRSTPERSON_MyChar_generated_h

#define FirstPerson_Source_FirstPerson_MyChar_h_26_SPARSE_DATA
#define FirstPerson_Source_FirstPerson_MyChar_h_26_RPC_WRAPPERS
#define FirstPerson_Source_FirstPerson_MyChar_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define FirstPerson_Source_FirstPerson_MyChar_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyChar(); \
	friend struct Z_Construct_UClass_AMyChar_Statics; \
public: \
	DECLARE_CLASS(AMyChar, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstPerson"), NO_API) \
	DECLARE_SERIALIZER(AMyChar)


#define FirstPerson_Source_FirstPerson_MyChar_h_26_INCLASS \
private: \
	static void StaticRegisterNativesAMyChar(); \
	friend struct Z_Construct_UClass_AMyChar_Statics; \
public: \
	DECLARE_CLASS(AMyChar, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstPerson"), NO_API) \
	DECLARE_SERIALIZER(AMyChar)


#define FirstPerson_Source_FirstPerson_MyChar_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyChar(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyChar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyChar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyChar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyChar(AMyChar&&); \
	NO_API AMyChar(const AMyChar&); \
public:


#define FirstPerson_Source_FirstPerson_MyChar_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyChar(AMyChar&&); \
	NO_API AMyChar(const AMyChar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyChar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyChar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyChar)


#define FirstPerson_Source_FirstPerson_MyChar_h_26_PRIVATE_PROPERTY_OFFSET
#define FirstPerson_Source_FirstPerson_MyChar_h_23_PROLOG
#define FirstPerson_Source_FirstPerson_MyChar_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstPerson_Source_FirstPerson_MyChar_h_26_PRIVATE_PROPERTY_OFFSET \
	FirstPerson_Source_FirstPerson_MyChar_h_26_SPARSE_DATA \
	FirstPerson_Source_FirstPerson_MyChar_h_26_RPC_WRAPPERS \
	FirstPerson_Source_FirstPerson_MyChar_h_26_INCLASS \
	FirstPerson_Source_FirstPerson_MyChar_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstPerson_Source_FirstPerson_MyChar_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstPerson_Source_FirstPerson_MyChar_h_26_PRIVATE_PROPERTY_OFFSET \
	FirstPerson_Source_FirstPerson_MyChar_h_26_SPARSE_DATA \
	FirstPerson_Source_FirstPerson_MyChar_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstPerson_Source_FirstPerson_MyChar_h_26_INCLASS_NO_PURE_DECLS \
	FirstPerson_Source_FirstPerson_MyChar_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPERSON_API UClass* StaticClass<class AMyChar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstPerson_Source_FirstPerson_MyChar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
