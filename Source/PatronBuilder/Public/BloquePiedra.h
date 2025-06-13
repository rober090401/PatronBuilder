// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloquePiedra.generated.h"

/**
 * 
 */
UCLASS()
class PATRONBUILDER_API ABloquePiedra : public ABloque
{
	GENERATED_BODY()
	
public:
	ABloquePiedra();
	virtual int32 GetTipoID() const override { return 4; } // ID para el bloque de piedra

protected:
	virtual void BeginPlay() override;
};
