// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatronBuilder/Public/BloqueLadrillo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueLadrillo() {}

// Begin Cross Module References
PATRONBUILDER_API UClass* Z_Construct_UClass_ABloque();
PATRONBUILDER_API UClass* Z_Construct_UClass_ABloqueLadrillo();
PATRONBUILDER_API UClass* Z_Construct_UClass_ABloqueLadrillo_NoRegister();
UPackage* Z_Construct_UPackage__Script_PatronBuilder();
// End Cross Module References

// Begin Class ABloqueLadrillo
void ABloqueLadrillo::StaticRegisterNativesABloqueLadrillo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueLadrillo);
UClass* Z_Construct_UClass_ABloqueLadrillo_NoRegister()
{
	return ABloqueLadrillo::StaticClass();
}
struct Z_Construct_UClass_ABloqueLadrillo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueLadrillo.h" },
		{ "ModuleRelativePath", "Public/BloqueLadrillo.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueLadrillo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueLadrillo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_PatronBuilder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueLadrillo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueLadrillo_Statics::ClassParams = {
	&ABloqueLadrillo::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueLadrillo_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueLadrillo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueLadrillo()
{
	if (!Z_Registration_Info_UClass_ABloqueLadrillo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueLadrillo.OuterSingleton, Z_Construct_UClass_ABloqueLadrillo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueLadrillo.OuterSingleton;
}
template<> PATRONBUILDER_API UClass* StaticClass<ABloqueLadrillo>()
{
	return ABloqueLadrillo::StaticClass();
}
ABloqueLadrillo::ABloqueLadrillo() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueLadrillo);
ABloqueLadrillo::~ABloqueLadrillo() {}
// End Class ABloqueLadrillo

// Begin Registration
struct Z_CompiledInDeferFile_FID_bomberman_PatronBuilder_Source_PatronBuilder_Public_BloqueLadrillo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueLadrillo, ABloqueLadrillo::StaticClass, TEXT("ABloqueLadrillo"), &Z_Registration_Info_UClass_ABloqueLadrillo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueLadrillo), 2893061722U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_bomberman_PatronBuilder_Source_PatronBuilder_Public_BloqueLadrillo_h_2713079907(TEXT("/Script/PatronBuilder"),
	Z_CompiledInDeferFile_FID_bomberman_PatronBuilder_Source_PatronBuilder_Public_BloqueLadrillo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_bomberman_PatronBuilder_Source_PatronBuilder_Public_BloqueLadrillo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
