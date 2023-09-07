// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectVita_init() {}
	PROJECTVITA_API UFunction* Z_Construct_UDelegateFunction_ProjectVita_OnPickUp__DelegateSignature();
	PROJECTVITA_API UFunction* Z_Construct_UDelegateFunction_ProjectVita_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ProjectVita;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ProjectVita()
	{
		if (!Z_Registration_Info_UPackage__Script_ProjectVita.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectVita_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectVita_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ProjectVita",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xD240350C,
				0x60FDECB1,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ProjectVita.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ProjectVita.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ProjectVita(Z_Construct_UPackage__Script_ProjectVita, TEXT("/Script/ProjectVita"), Z_Registration_Info_UPackage__Script_ProjectVita, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD240350C, 0x60FDECB1));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
