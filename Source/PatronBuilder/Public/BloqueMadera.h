// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueMadera.generated.h"

/**
 * 
 */
UCLASS()
class PATRONBUILDER_API ABloqueMadera : public ABloque
{
	GENERATED_BODY()
	
public:
	ABloqueMadera();
	virtual int32 GetTipoID() const override { return 3; } // ID para BloqueMadera

protected:
	virtual void BeginPlay() override;
};
