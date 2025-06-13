// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bloque.h"
#include "Laberinto.generated.h"

UCLASS()
class PATRONBUILDER_API ALaberinto : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALaberinto();

	// Guardar lod  bloques del laberinto
	UPROPERTY()
	TArray<ABloque*> Bloques;

	void AgregarBloque(ABloque* Bloque);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
