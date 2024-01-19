// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SNAKE_SnakeElementBase_generated_h
#error "SnakeElementBase.generated.h already included, missing '#pragma once' in SnakeElementBase.h"
#endif
#define SNAKE_SnakeElementBase_generated_h

#define Snake_Source_Snake_SnakeElementBase_h_16_SPARSE_DATA
#define Snake_Source_Snake_SnakeElementBase_h_16_RPC_WRAPPERS \
	virtual void SetFirstElementType_Implementation(); \
 \
	DECLARE_FUNCTION(execToggleCollision); \
	DECLARE_FUNCTION(execHandleBeginOverlap); \
	DECLARE_FUNCTION(execSetFirstElementType);


#define Snake_Source_Snake_SnakeElementBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleCollision); \
	DECLARE_FUNCTION(execHandleBeginOverlap); \
	DECLARE_FUNCTION(execSetFirstElementType);


#define Snake_Source_Snake_SnakeElementBase_h_16_EVENT_PARMS
#define Snake_Source_Snake_SnakeElementBase_h_16_CALLBACK_WRAPPERS
#define Snake_Source_Snake_SnakeElementBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASnakeElementBase(); \
	friend struct Z_Construct_UClass_ASnakeElementBase_Statics; \
public: \
	DECLARE_CLASS(ASnakeElementBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Snake"), NO_API) \
	DECLARE_SERIALIZER(ASnakeElementBase) \
	virtual UObject* _getUObject() const override { return const_cast<ASnakeElementBase*>(this); }


#define Snake_Source_Snake_SnakeElementBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASnakeElementBase(); \
	friend struct Z_Construct_UClass_ASnakeElementBase_Statics; \
public: \
	DECLARE_CLASS(ASnakeElementBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Snake"), NO_API) \
	DECLARE_SERIALIZER(ASnakeElementBase) \
	virtual UObject* _getUObject() const override { return const_cast<ASnakeElementBase*>(this); }


#define Snake_Source_Snake_SnakeElementBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASnakeElementBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASnakeElementBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnakeElementBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnakeElementBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASnakeElementBase(ASnakeElementBase&&); \
	NO_API ASnakeElementBase(const ASnakeElementBase&); \
public:


#define Snake_Source_Snake_SnakeElementBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASnakeElementBase(ASnakeElementBase&&); \
	NO_API ASnakeElementBase(const ASnakeElementBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnakeElementBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnakeElementBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASnakeElementBase)


#define Snake_Source_Snake_SnakeElementBase_h_16_PRIVATE_PROPERTY_OFFSET
#define Snake_Source_Snake_SnakeElementBase_h_13_PROLOG \
	Snake_Source_Snake_SnakeElementBase_h_16_EVENT_PARMS


#define Snake_Source_Snake_SnakeElementBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Snake_Source_Snake_SnakeElementBase_h_16_PRIVATE_PROPERTY_OFFSET \
	Snake_Source_Snake_SnakeElementBase_h_16_SPARSE_DATA \
	Snake_Source_Snake_SnakeElementBase_h_16_RPC_WRAPPERS \
	Snake_Source_Snake_SnakeElementBase_h_16_CALLBACK_WRAPPERS \
	Snake_Source_Snake_SnakeElementBase_h_16_INCLASS \
	Snake_Source_Snake_SnakeElementBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Snake_Source_Snake_SnakeElementBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Snake_Source_Snake_SnakeElementBase_h_16_PRIVATE_PROPERTY_OFFSET \
	Snake_Source_Snake_SnakeElementBase_h_16_SPARSE_DATA \
	Snake_Source_Snake_SnakeElementBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Snake_Source_Snake_SnakeElementBase_h_16_CALLBACK_WRAPPERS \
	Snake_Source_Snake_SnakeElementBase_h_16_INCLASS_NO_PURE_DECLS \
	Snake_Source_Snake_SnakeElementBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKE_API UClass* StaticClass<class ASnakeElementBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Snake_Source_Snake_SnakeElementBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
