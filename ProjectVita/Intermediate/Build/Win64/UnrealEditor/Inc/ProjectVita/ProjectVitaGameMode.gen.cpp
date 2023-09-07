// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectVita/ProjectVitaGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectVitaGameMode() {}
// Cross Module References
	PROJECTVITA_API UClass* Z_Construct_UClass_AProjectVitaGameMode_NoRegister();
	PROJECTVITA_API UClass* Z_Construct_UClass_AProjectVitaGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ProjectVita();
// End Cross Module References
	void AProjectVitaGameMode::StaticRegisterNativesAProjectVitaGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectVitaGameMode);
	UClass* Z_Construct_UClass_AProjectVitaGameMode_NoRegister()
	{
		return AProjectVitaGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AProjectVitaGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectVitaGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectVita,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectVitaGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ProjectVitaGameMode.h" },
		{ "ModuleRelativePath", "ProjectVitaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectVitaGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectVitaGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectVitaGameMode_Statics::ClassParams = {
		&AProjectVitaGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AProjectVitaGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectVitaGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectVitaGameMode()
	{
		if (!Z_Registration_Info_UClass_AProjectVitaGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectVitaGameMode.OuterSingleton, Z_Construct_UClass_AProjectVitaGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProjectVitaGameMode.OuterSingleton;
	}
	template<> PROJECTVITA_API UClass* StaticClass<AProjectVitaGameMode>()
	{
		return AProjectVitaGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectVitaGameMode);
	struct Z_CompiledInDeferFile_FID_ProjectVita_Source_ProjectVita_ProjectVitaGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectVita_Source_ProjectVita_ProjectVitaGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProjectVitaGameMode, AProjectVitaGameMode::StaticClass, TEXT("AProjectVitaGameMode"), &Z_Registration_Info_UClass_AProjectVitaGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectVitaGameMode), 112624350U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectVita_Source_ProjectVita_ProjectVitaGameMode_h_2675260713(TEXT("/Script/ProjectVita"),
		Z_CompiledInDeferFile_FID_ProjectVita_Source_ProjectVita_ProjectVitaGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectVita_Source_ProjectVita_ProjectVitaGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
