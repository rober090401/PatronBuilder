// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueLadrillo.generated.h"

/**
 * 
 */
UCLASS()
class PATRONBUILDER_API ABloqueLadrillo : public ABloque
{
	GENERATED_BODY()
	
public: 
	ABloqueLadrillo();
	virtual int32 GetTipoID() const override { return 2; } // ID para Ladrillo
protected:
	virtual void BeginPlay() override;
};
