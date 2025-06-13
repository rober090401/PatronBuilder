// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatronBuilder/Public/LaberintoBuilderConcreto.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaberintoBuilderConcreto() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PATRONBUILDER_API UClass* Z_Construct_UClass_ALaberinto_NoRegister();
PATRONBUILDER_API UClass* Z_Construct_UClass_ALaberintoBuilderConcreto();
PATRONBUILDER_API UClass* Z_Construct_UClass_ALaberintoBuilderConcreto_NoRegister();
PATRONBUILDER_API UClass* Z_Construct_UClass_UILaberintoBuilder_NoRegister();
UPackage* Z_Construct_UPackage__Script_PatronBuilder();
// End Cross Module References

// Begin Class ALaberintoBuilderConcreto
void ALaberintoBuilderConcreto::StaticRegisterNativesALaberintoBuilderConcreto()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALaberintoBuilderConcreto);
UClass* Z_Construct_UClass_ALaberintoBuilderConcreto_NoRegister()
{
	return ALaberintoBuilderConcreto::StaticClass();
}
struct Z_Construct_UClass_ALaberintoBuilderConcreto_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LaberintoBuilderConcreto.h" },
		{ "ModuleRelativePath", "Public/LaberintoBuilderConcreto.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaberintoActual_MetaData[] = {
		{ "ModuleRelativePath", "Public/LaberintoBuilderConcreto.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LaberintoActual;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALaberintoBuilderConcreto>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALaberintoBuilderConcreto_Statics::NewProp_LaberintoActual = { "LaberintoActual", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALaberintoBuilderConcreto, LaberintoActual), Z_Construct_UClass_ALaberinto_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaberintoActual_MetaData), NewProp_LaberintoActual_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALaberintoBuilderConcreto_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALaberintoBuilderConcreto_Statics::NewProp_LaberintoActual,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberintoBuilderConcreto_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALaberintoBuilderConcreto_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PatronBuilder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberintoBuilderConcreto_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALaberintoBuilderConcreto_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UILaberintoBuilder_NoRegister, (int32)VTABLE_OFFSET(ALaberintoBuilderConcreto, IILaberintoBuilder), false },  // 419920740
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALaberintoBuilderConcreto_Statics::ClassParams = {
	&ALaberintoBuilderConcreto::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALaberintoBuilderConcreto_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALaberintoBuilderConcreto_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALaberintoBuilderConcreto_Statics::Class_MetaDataParams), Z_Construct_UClass_ALaberintoBuilderConcreto_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALaberintoBuilderConcreto()
{
	if (!Z_Registration_Info_UClass_ALaberintoBuilderConcreto.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALaberintoBuilderConcreto.OuterSingleton, Z_Construct_UClass_ALaberintoBuilderConcreto_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALaberintoBuilderConcreto.OuterSingleton;
}
template<> PATRONBUILDER_API UClass* StaticClass<ALaberintoBuilderConcreto>()
{
	return ALaberintoBuilderConcreto::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALaberintoBuilderConcreto);
ALaberintoBuilderConcreto::~ALaberintoBuilderConcreto() {}
// End Class ALaberintoBuilderConcreto

// Begin Registration
struct Z_CompiledInDeferFile_FID_bomberman_PatronBuilder_Source_PatronBuilder_Public_LaberintoBuilderConcreto_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALaberintoBuilderConcreto, ALaberintoBuilderConcreto::StaticClass, TEXT("ALaberintoBuilderConcreto"), &Z_Registration_Info_UClass_ALaberintoBuilderConcreto, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALaberintoBuilderConcreto), 3853871467U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_bomberman_PatronBuilder_Source_PatronBuilder_Public_LaberintoBuilderConcreto_h_3038000024(TEXT("/Script/PatronBuilder"),
	Z_CompiledInDeferFile_FID_bomberman_PatronBuilder_Source_PatronBuilder_Public_LaberintoBuilderConcreto_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_bomberman_PatronBuilder_Source_PatronBuilder_Public_LaberintoBuilderConcreto_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
