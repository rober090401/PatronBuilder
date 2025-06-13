// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "LaberintoBuilderConcreto.h"
#include "Laberinto.h"
#include "PatronBuilderGameMode.generated.h"

UCLASS(minimalapi)
class APatronBuilderGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	APatronBuilderGameMode();

protected:
	virtual void BeginPlay() override;
private:
	UPROPERTY()
	ALaberintoBuilderConcreto* LaberintoBuilder;
	UPROPERTY()
	ALaberinto* LaberintoConstruido;
	void ConstruirLaberinto();
};



