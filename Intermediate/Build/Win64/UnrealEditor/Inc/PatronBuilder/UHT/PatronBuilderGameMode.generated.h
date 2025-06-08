// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PatronBuilderGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PATRONBUILDER_PatronBuilderGameMode_generated_h
#error "PatronBuilderGameMode.generated.h already included, missing '#pragma once' in PatronBuilderGameMode.h"
#endif
#define PATRONBUILDER_PatronBuilderGameMode_generated_h

#define FID_bomberman_PatronBuilder_Source_PatronBuilder_PatronBuilderGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPatronBuilderGameMode(); \
	friend struct Z_Construct_UClass_APatronBuilderGameMode_Statics; \
public: \
	DECLARE_CLASS(APatronBuilderGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/PatronBuilder"), PATRONBUILDER_API) \
	DECLARE_SERIALIZER(APatronBuilderGameMode)


#define FID_bomberman_PatronBuilder_Source_PatronBuilder_PatronBuilderGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APatronBuilderGameMode(APatronBuilderGameMode&&); \
	APatronBuilderGameMode(const APatronBuilderGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PATRONBUILDER_API, APatronBuilderGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APatronBuilderGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APatronBuilderGameMode) \
	PATRONBUILDER_API virtual ~APatronBuilderGameMode();


#define FID_bomberman_PatronBuilder_Source_PatronBuilder_PatronBuilderGameMode_h_9_PROLOG
#define FID_bomberman_PatronBuilder_Source_PatronBuilder_PatronBuilderGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_bomberman_PatronBuilder_Source_PatronBuilder_PatronBuilderGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_bomberman_PatronBuilder_Source_PatronBuilder_PatronBuilderGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATRONBUILDER_API UClass* StaticClass<class APatronBuilderGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_bomberman_PatronBuilder_Source_PatronBuilder_PatronBuilderGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
