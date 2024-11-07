// Copyright Epic Games, Inc. All Rights Reserved.
#include "TemplateMethod_1GameModeBase.h"
#include "GuerreroJugador.h"
#include "ArqueroJugador.h"
#include "MagoJugador.h"

ATemplateMethod_1GameModeBase::ATemplateMethod_1GameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ATemplateMethod_1GameModeBase::BeginPlay()
{
	Super::BeginPlay();

	Guerrero = GetWorld()->SpawnActor<AGuerreroJugador>(AGuerreroJugador::StaticClass());
	Guerrero->RealizarAccion();

	Arquero = GetWorld()->SpawnActor<AArqueroJugador>(AArqueroJugador::StaticClass());
	Arquero->RealizarAccion();

	Mago = GetWorld()->SpawnActor<AMagoJugador>(AMagoJugador::StaticClass());
	Mago->RealizarAccion();

}

void ATemplateMethod_1GameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
