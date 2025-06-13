// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatronBuilder/Public/Laberinto.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaberinto() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PATRONBUILDER_API UClass* Z_Construct_UClass_ABloque_NoRegister();
PATRONBUILDER_API UClass* Z_Construct_UClass_ALaberinto();
PATRONBUILDER_API UClass* Z_Construct_UClass_ALaberinto_NoRegister();
UPackage* Z_Construct_UPackage__Script_PatronBuilder();
// End Cross Module References

// Begin Class ALaberinto
void ALaberinto::StaticRegisterNativesALaberinto()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALaberinto);
UClass* Z_Construct_UClass_ALaberinto_NoRegister()
{
	return ALaberinto::StaticClass();
}
struct Z_Construct_UClass_ALaberinto_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Laberinto.h" },
		{ "ModuleRelativePath", "Public/Laberinto.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bloques_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Guardar lod  bloques del laberinto\n" },
#endif
		{ "ModuleRelativePath", "Public/Laberinto.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Guardar lod  bloques del laberinto" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Bloques_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bloques;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALaberinto>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALaberinto_Statics::NewProp_Bloques_Inner = { "Bloques", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABloque_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALaberinto_Statics::NewProp_Bloques = { "Bloques", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALaberinto, Bloques), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bloques_MetaData), NewProp_Bloques_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALaberinto_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaberinto_Statics::NewProp_Bloques_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaberinto_Statics::NewProp_Bloques,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberinto_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALaberinto_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PatronBuilder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberinto_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALaberinto_Statics::ClassParams = {
	&ALaberinto::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALaberinto_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALaberinto_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberinto_Statics::Class_MetaDataParams), Z_Construct_UClass_ALaberinto_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALaberinto()
{
	if (!Z_Registration_Info_UClass_ALaberinto.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALaberinto.OuterSingleton, Z_Construct_UClass_ALaberinto_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALaberinto.OuterSingleton;
}
template<> PATRONBUILDER_API UClass* StaticClass<ALaberinto>()
{
	return ALaberinto::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALaberinto);
ALaberinto::~ALaberinto() {}
// End Class ALaberinto

// Begin Registration
struct Z_CompiledInDeferFile_FID_bomberman_PatronBuilder_Source_PatronBuilder_Public_Laberinto_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALaberinto, ALaberinto::StaticClass, TEXT("ALaberinto"), &Z_Registration_Info_UClass_ALaberinto, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALaberinto), 1992480316U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_bomberman_PatronBuilder_Source_PatronBuilder_Public_Laberinto_h_1987714908(TEXT("/Script/PatronBuilder"),
	Z_CompiledInDeferFile_FID_bomberman_PatronBuilder_Source_PatronBuilder_Public_Laberinto_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_bomberman_PatronBuilder_Source_PatronBuilder_Public_Laberinto_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
