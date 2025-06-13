// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PatronBuilder/PatronBuilderGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatronBuilderGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PATRONBUILDER_API UClass* Z_Construct_UClass_ALaberinto_NoRegister();
PATRONBUILDER_API UClass* Z_Construct_UClass_ALaberintoBuilderConcreto_NoRegister();
PATRONBUILDER_API UClass* Z_Construct_UClass_APatronBuilderGameMode();
PATRONBUILDER_API UClass* Z_Construct_UClass_APatronBuilderGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_PatronBuilder();
// End Cross Module References

// Begin Class APatronBuilderGameMode
void APatronBuilderGameMode::StaticRegisterNativesAPatronBuilderGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APatronBuilderGameMode);
UClass* Z_Construct_UClass_APatronBuilderGameMode_NoRegister()
{
	return APatronBuilderGameMode::StaticClass();
}
struct Z_Construct_UClass_APatronBuilderGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PatronBuilderGameMode.h" },
		{ "ModuleRelativePath", "PatronBuilderGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaberintoBuilder_MetaData[] = {
		{ "ModuleRelativePath", "PatronBuilderGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaberintoConstruido_MetaData[] = {
		{ "ModuleRelativePath", "PatronBuilderGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LaberintoBuilder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LaberintoConstruido;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APatronBuilderGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APatronBuilderGameMode_Statics::NewProp_LaberintoBuilder = { "LaberintoBuilder", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APatronBuilderGameMode, LaberintoBuilder), Z_Construct_UClass_ALaberintoBuilderConcreto_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaberintoBuilder_MetaData), NewProp_LaberintoBuilder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APatronBuilderGameMode_Statics::NewProp_LaberintoConstruido = { "LaberintoConstruido", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APatronBuilderGameMode, LaberintoConstruido), Z_Construct_UClass_ALaberinto_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaberintoConstruido_MetaData), NewProp_LaberintoConstruido_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APatronBuilderGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatronBuilderGameMode_Statics::NewProp_LaberintoBuilder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatronBuilderGameMode_Statics::NewProp_LaberintoConstruido,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APatronBuilderGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APatronBuilderGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PatronBuilder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APatronBuilderGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APatronBuilderGameMode_Statics::ClassParams = {
	&APatronBuilderGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APatronBuilderGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APatronBuilderGameMode_Statics::PropPointers),
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APatronBuilderGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APatronBuilderGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APatronBuilderGameMode()
{
	if (!Z_Registration_Info_UClass_APatronBuilderGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APatronBuilderGameMode.OuterSingleton, Z_Construct_UClass_APatronBuilderGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APatronBuilderGameMode.OuterSingleton;
}
template<> PATRONBUILDER_API UClass* StaticClass<APatronBuilderGameMode>()
{
	return APatronBuilderGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APatronBuilderGameMode);
APatronBuilderGameMode::~APatronBuilderGameMode() {}
// End Class APatronBuilderGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_bomberman_PatronBuilder_Source_PatronBuilder_PatronBuilderGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APatronBuilderGameMode, APatronBuilderGameMode::StaticClass, TEXT("APatronBuilderGameMode"), &Z_Registration_Info_UClass_APatronBuilderGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APatronBuilderGameMode), 963170555U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_bomberman_PatronBuilder_Source_PatronBuilder_PatronBuilderGameMode_h_72468652(TEXT("/Script/PatronBuilder"),
	Z_CompiledInDeferFile_FID_bomberman_PatronBuilder_Source_PatronBuilder_PatronBuilderGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_bomberman_PatronBuilder_Source_PatronBuilder_PatronBuilderGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
