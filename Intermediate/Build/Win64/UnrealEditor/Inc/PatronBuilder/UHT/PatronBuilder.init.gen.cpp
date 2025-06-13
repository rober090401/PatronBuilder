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
				0x5FB42F25,
				0xEBE8230D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PatronBuilder.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PatronBuilder.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PatronBuilder(Z_Construct_UPackage__Script_PatronBuilder, TEXT("/Script/PatronBuilder"), Z_Registration_Info_UPackage__Script_PatronBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5FB42F25, 0xEBE8230D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
