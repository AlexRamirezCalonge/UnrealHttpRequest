// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_HttpActor_generated_h
#error "HttpActor.generated.h already included, missing '#pragma once' in HttpActor.h"
#endif
#define MYPROJECT_HttpActor_generated_h

#define MyProject_Source_MyProject_HttpActor_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHttpCall) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HttpCall(); \
		P_NATIVE_END; \
	}


#define MyProject_Source_MyProject_HttpActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHttpCall) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HttpCall(); \
		P_NATIVE_END; \
	}


#define MyProject_Source_MyProject_HttpActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHttpActor(); \
	friend struct Z_Construct_UClass_AHttpActor_Statics; \
public: \
	DECLARE_CLASS(AHttpActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AHttpActor)


#define MyProject_Source_MyProject_HttpActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHttpActor(); \
	friend struct Z_Construct_UClass_AHttpActor_Statics; \
public: \
	DECLARE_CLASS(AHttpActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AHttpActor)


#define MyProject_Source_MyProject_HttpActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHttpActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHttpActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHttpActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHttpActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHttpActor(AHttpActor&&); \
	NO_API AHttpActor(const AHttpActor&); \
public:


#define MyProject_Source_MyProject_HttpActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHttpActor(AHttpActor&&); \
	NO_API AHttpActor(const AHttpActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHttpActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHttpActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHttpActor)


#define MyProject_Source_MyProject_HttpActor_h_12_PRIVATE_PROPERTY_OFFSET
#define MyProject_Source_MyProject_HttpActor_h_6_PROLOG
#define MyProject_Source_MyProject_HttpActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_HttpActor_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_HttpActor_h_12_RPC_WRAPPERS \
	MyProject_Source_MyProject_HttpActor_h_12_INCLASS \
	MyProject_Source_MyProject_HttpActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_HttpActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_HttpActor_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_HttpActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_HttpActor_h_12_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_HttpActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AHttpActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_HttpActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
