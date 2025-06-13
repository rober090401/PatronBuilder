// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "BloqueAcero.generated.h"

/**
 * 
 */
UCLASS()
class PATRONBUILDER_API ABloqueAcero : public ABloque
{
	GENERATED_BODY()
	
public:
	ABloqueAcero();
	virtual int32 GetTipoID() const override { return 1; } // Tipo ID para Bloque de Acero

protected:
	virtual void BeginPlay() override;
};
