// Fill out your copyright notice in the Description page of Project Settings.


#include "LaberintoBuilderConcreto.h"
#include "Engine/World.h"
#include "Bloque.h"

// Sets default values
ALaberintoBuilderConcreto::ALaberintoBuilderConcreto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	LaberintoActual = nullptr; // Inicializa el puntero a nullptr

}
void ALaberintoBuilderConcreto::IniciarLaberinto()
{
	LaberintoActual = GetWorld()->SpawnActor<ALaberinto>();
}
void ALaberintoBuilderConcreto::AgregarBloque(int32 X, int32 Y, TSubclassOf<ABloque> TipoBloque)
{
	if (!LaberintoActual || !TipoBloque) return;
	FVector Posicion = FVector(X * 100.0f, Y * 100.0f, 0.0f); // Ajusta el tamaño del bloque según sea necesario
	ABloque* NuevoBloque = GetWorld()->SpawnActor<ABloque>(TipoBloque, Posicion, FRotator::ZeroRotator);
	if (NuevoBloque)
	{
		LaberintoActual->AgregarBloque(NuevoBloque);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No se pudo crear el bloque en la posición (%d, %d)"), X, Y);
	}
}
ALaberinto* ALaberintoBuilderConcreto::ObtenerLaberinto()
{
	return LaberintoActual;
}
/*void ALaberintoBuilderConcreto::AgregarBloque(int32 X, int32 Y, TSubclassOf<ABloque> TipoBloque)
{
	if (!LaberintoActual || !TipoBloque) return;
	FVector Posicion = FVector(X * 100.0f, Y * 100.0f, 0.0f);
	ABloque* NuevoBloque = GetWorld()->SpawnActor<ABloque>(TipoBloque, Posicion, FRotator::ZeroRotator);
	if (NuevoBloque)
	{
		LaberintoActual->AgregarBloque(NuevoBloque);
	}
}*/
// Called when the game starts or when spawned
void ALaberintoBuilderConcreto::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALaberintoBuilderConcreto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

