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
#ifdef PROJECTVITA_ProjectVitaProjectile_generated_h
#error "ProjectVitaProjectile.generated.h already included, missing '#pragma once' in ProjectVitaProjectile.h"
#endif
#define PROJECTVITA_ProjectVitaProjectile_generated_h

#define FID_ProjectVita_Source_ProjectVita_ProjectVitaProjectile_h_15_SPARSE_DATA
#define FID_ProjectVita_Source_ProjectVita_ProjectVitaProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_ProjectVita_Source_ProjectVita_ProjectVitaProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_ProjectVita_Source_ProjectVita_ProjectVitaProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectVitaProjectile(); \
	friend struct Z_Construct_UClass_AProjectVitaProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectVitaProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectVita"), NO_API) \
	DECLARE_SERIALIZER(AProjectVitaProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_ProjectVita_Source_ProjectVita_ProjectVitaProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAProjectVitaProjectile(); \
	friend struct Z_Construct_UClass_AProjectVitaProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectVitaProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectVita"), NO_API) \
	DECLARE_SERIALIZER(AProjectVitaProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_ProjectVita_Source_ProjectVita_ProjectVitaProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectVitaProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectVitaProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectVitaProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectVitaProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectVitaProjectile(AProjectVitaProjectile&&); \
	NO_API AProjectVitaProjectile(const AProjectVitaProjectile&); \
public:


#define FID_ProjectVita_Source_ProjectVita_ProjectVitaProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectVitaProjectile(AProjectVitaProjectile&&); \
	NO_API AProjectVitaProjectile(const AProjectVitaProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectVitaProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectVitaProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectVitaProjectile)


#define FID_ProjectVita_Source_ProjectVita_ProjectVitaProjectile_h_12_PROLOG
#define FID_ProjectVita_Source_ProjectVita_ProjectVitaProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectVita_Source_ProjectVita_ProjectVitaProjectile_h_15_SPARSE_DATA \
	FID_ProjectVita_Source_ProjectVita_ProjectVitaProjectile_h_15_RPC_WRAPPERS \
	FID_ProjectVita_Source_ProjectVita_ProjectVitaProjectile_h_15_INCLASS \
	FID_ProjectVita_Source_ProjectVita_ProjectVitaProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProjectVita_Source_ProjectVita_ProjectVitaProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectVita_Source_ProjectVita_ProjectVitaProjectile_h_15_SPARSE_DATA \
	FID_ProjectVita_Source_ProjectVita_ProjectVitaProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectVita_Source_ProjectVita_ProjectVitaProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_ProjectVita_Source_ProjectVita_ProjectVitaProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTVITA_API UClass* StaticClass<class AProjectVitaProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectVita_Source_ProjectVita_ProjectVitaProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
