// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ILaberintoBuilder.h"
#include "Laberinto.h"
#include "LaberintoBuilderConcreto.generated.h"

UCLASS()
class PATRONBUILDER_API ALaberintoBuilderConcreto : public AActor, public IILaberintoBuilder
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALaberintoBuilderConcreto();

	virtual void IniciarLaberinto() override;
	virtual void AgregarBloque(int32 X, int32 Y, TSubclassOf<class ABloque> TipoBloque) override;
	virtual ALaberinto* ObtenerLaberinto() override;

private:
	UPROPERTY()
	ALaberinto* LaberintoActual;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
