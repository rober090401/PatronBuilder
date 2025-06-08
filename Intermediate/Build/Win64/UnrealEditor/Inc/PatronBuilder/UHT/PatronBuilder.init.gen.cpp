// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatronBuilder_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PatronBuilder;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PatronBuilder()
	{
		if (!Z_Registration_Info_UPackage__Script_PatronBuilder.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PatronBuilder",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x8D468FF5,
				0x02B2E394,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PatronBuilder.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PatronBuilder.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PatronBuilder(Z_Construct_UPackage__Script_PatronBuilder, TEXT("/Script/PatronBuilder"), Z_Registration_Info_UPackage__Script_PatronBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8D468FF5, 0x02B2E394));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
