// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Laberinto.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PATRONBUILDER_Laberinto_generated_h
#error "Laberinto.generated.h already included, missing '#pragma once' in Laberinto.h"
#endif
#define PATRONBUILDER_Laberinto_generated_h

#define FID_bomberman_PatronBuilder_Source_PatronBuilder_Public_Laberinto_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALaberinto(); \
	friend struct Z_Construct_UClass_ALaberinto_Statics; \
public: \
	DECLARE_CLASS(ALaberinto, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PatronBuilder"), NO_API) \
	DECLARE_SERIALIZER(ALaberinto)


#define FID_bomberman_PatronBuilder_Source_PatronBuilder_Public_Laberinto_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALaberinto(ALaberinto&&); \
	ALaberinto(const ALaberinto&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALaberinto); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALaberinto); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALaberinto) \
	NO_API virtual ~ALaberinto();


#define FID_bomberman_PatronBuilder_Source_PatronBuilder_Public_Laberinto_h_10_PROLOG
#define FID_bomberman_PatronBuilder_Source_PatronBuilder_Public_Laberinto_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_bomberman_PatronBuilder_Source_PatronBuilder_Public_Laberinto_h_13_INCLASS_NO_PURE_DECLS \
	FID_bomberman_PatronBuilder_Source_PatronBuilder_Public_Laberinto_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATRONBUILDER_API UClass* StaticClass<class ALaberinto>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_bomberman_PatronBuilder_Source_PatronBuilder_Public_Laberinto_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
