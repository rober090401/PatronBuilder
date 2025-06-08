// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PatronBuilderCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PATRONBUILDER_PatronBuilderCharacter_generated_h
#error "PatronBuilderCharacter.generated.h already included, missing '#pragma once' in PatronBuilderCharacter.h"
#endif
#define PATRONBUILDER_PatronBuilderCharacter_generated_h

#define FID_bomberman_PatronBuilder_Source_PatronBuilder_PatronBuilderCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPatronBuilderCharacter(); \
	friend struct Z_Construct_UClass_APatronBuilderCharacter_Statics; \
public: \
	DECLARE_CLASS(APatronBuilderCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PatronBuilder"), NO_API) \
	DECLARE_SERIALIZER(APatronBuilderCharacter)


#define FID_bomberman_PatronBuilder_Source_PatronBuilder_PatronBuilderCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APatronBuilderCharacter(APatronBuilderCharacter&&); \
	APatronBuilderCharacter(const APatronBuilderCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APatronBuilderCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APatronBuilderCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APatronBuilderCharacter) \
	NO_API virtual ~APatronBuilderCharacter();


#define FID_bomberman_PatronBuilder_Source_PatronBuilder_PatronBuilderCharacter_h_18_PROLOG
#define FID_bomberman_PatronBuilder_Source_PatronBuilder_PatronBuilderCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_bomberman_PatronBuilder_Source_PatronBuilder_PatronBuilderCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_bomberman_PatronBuilder_Source_PatronBuilder_PatronBuilderCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATRONBUILDER_API UClass* StaticClass<class APatronBuilderCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_bomberman_PatronBuilder_Source_PatronBuilder_PatronBuilderCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
