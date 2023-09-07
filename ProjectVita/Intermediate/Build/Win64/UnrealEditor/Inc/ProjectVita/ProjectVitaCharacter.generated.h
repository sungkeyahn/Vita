// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTVITA_ProjectVitaCharacter_generated_h
#error "ProjectVitaCharacter.generated.h already included, missing '#pragma once' in ProjectVitaCharacter.h"
#endif
#define PROJECTVITA_ProjectVitaCharacter_generated_h

#define FID_ProjectVita_Source_ProjectVita_ProjectVitaCharacter_h_18_DELEGATE \
static inline void FOnUseItem_DelegateWrapper(const FMulticastScriptDelegate& OnUseItem) \
{ \
	OnUseItem.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_ProjectVita_Source_ProjectVita_ProjectVitaCharacter_h_23_SPARSE_DATA
#define FID_ProjectVita_Source_ProjectVita_ProjectVitaCharacter_h_23_RPC_WRAPPERS
#define FID_ProjectVita_Source_ProjectVita_ProjectVitaCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_ProjectVita_Source_ProjectVita_ProjectVitaCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectVitaCharacter(); \
	friend struct Z_Construct_UClass_AProjectVitaCharacter_Statics; \
public: \
	DECLARE_CLASS(AProjectVitaCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectVita"), NO_API) \
	DECLARE_SERIALIZER(AProjectVitaCharacter)


#define FID_ProjectVita_Source_ProjectVita_ProjectVitaCharacter_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAProjectVitaCharacter(); \
	friend struct Z_Construct_UClass_AProjectVitaCharacter_Statics; \
public: \
	DECLARE_CLASS(AProjectVitaCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectVita"), NO_API) \
	DECLARE_SERIALIZER(AProjectVitaCharacter)


#define FID_ProjectVita_Source_ProjectVita_ProjectVitaCharacter_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectVitaCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectVitaCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectVitaCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectVitaCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectVitaCharacter(AProjectVitaCharacter&&); \
	NO_API AProjectVitaCharacter(const AProjectVitaCharacter&); \
public:


#define FID_ProjectVita_Source_ProjectVita_ProjectVitaCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectVitaCharacter(AProjectVitaCharacter&&); \
	NO_API AProjectVitaCharacter(const AProjectVitaCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectVitaCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectVitaCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectVitaCharacter)


#define FID_ProjectVita_Source_ProjectVita_ProjectVitaCharacter_h_20_PROLOG
#define FID_ProjectVita_Source_ProjectVita_ProjectVitaCharacter_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectVita_Source_ProjectVita_ProjectVitaCharacter_h_23_SPARSE_DATA \
	FID_ProjectVita_Source_ProjectVita_ProjectVitaCharacter_h_23_RPC_WRAPPERS \
	FID_ProjectVita_Source_ProjectVita_ProjectVitaCharacter_h_23_INCLASS \
	FID_ProjectVita_Source_ProjectVita_ProjectVitaCharacter_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProjectVita_Source_ProjectVita_ProjectVitaCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectVita_Source_ProjectVita_ProjectVitaCharacter_h_23_SPARSE_DATA \
	FID_ProjectVita_Source_ProjectVita_ProjectVitaCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectVita_Source_ProjectVita_ProjectVitaCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_ProjectVita_Source_ProjectVita_ProjectVitaCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTVITA_API UClass* StaticClass<class AProjectVitaCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectVita_Source_ProjectVita_ProjectVitaCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
