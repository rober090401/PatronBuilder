// Copyright Epic Games, Inc. All Rights Reserved.

#include "PatronBuilderGameMode.h"
#include "PatronBuilderCharacter.h"
#include "Bloque.h"
#include "BloqueAcero.h"
#include "BloqueMadera.h"
#include "BloqueLadrillo.h"
#include "BloquePiedra.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/World.h"

APatronBuilderGameMode::APatronBuilderGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
void APatronBuilderGameMode::BeginPlay()
{
	Super::BeginPlay();
	ConstruirLaberinto();
}
void APatronBuilderGameMode::ConstruirLaberinto()  
{  
	// Instanciar el builder  
	LaberintoBuilder = GetWorld()->SpawnActor<ALaberintoBuilderConcreto>();  
	LaberintoBuilder->IniciarLaberinto();  

	// Definir la matriz de diseño del laberinto  
	int32 Diseno[30][30];  
	for (int32 X = 0; X < 30; ++X)  
	{  
		for (int32 Y = 0; Y < 30; ++Y) // Agregar el bucle para Y  
		{  
			if (X == 0 || X == 29 || Y == 0 || Y == 29)  
			{  
				Diseno[X][Y] = 1;  
			}  
			else  
			{  
				Diseno[X][Y] = FMath::RandRange(0, 4); // 0=Espacio, 1=Acero, 2=Madera, 3=Ladrillo, 4=Piedra  
			}  
		}  
	}  

	// Construir un laberinto 10x10 alternando tipos de bloques  
	for (int32 X = 0; X < 30; ++X)  
	{  
		for (int32 Y = 0; Y < 30; ++Y)  
		{  
			TSubclassOf<ABloque> TipoClase = nullptr;  
			switch (Diseno[X][Y])  
			{  
				case 1: TipoClase = ABloqueAcero::StaticClass(); break;  
				case 2: TipoClase = ABloqueMadera::StaticClass(); break;  
				case 3: TipoClase = ABloqueLadrillo::StaticClass(); break;  
				case 4: TipoClase = ABloquePiedra::StaticClass(); break;  
				case 0: default: break; // Espacio vacío, no agregar bloque  
			}  
			if (TipoClase)  
			{  
				LaberintoBuilder->AgregarBloque(X, Y, TipoClase);  
			}  
		}  
	}  

	// Obtener el laberinto construido  
	LaberintoConstruido = LaberintoBuilder->ObtenerLaberinto();  
}