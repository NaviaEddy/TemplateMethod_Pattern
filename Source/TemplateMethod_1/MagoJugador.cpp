// Fill out your copyright notice in the Description page of Project Settings.


#include "MagoJugador.h"

// Sets default values
AMagoJugador::AMagoJugador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMagoJugador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMagoJugador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMagoJugador::PrepararPosiciones()
{
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Green, FString::Printf(TEXT("Preparando posiciones")));
}

void AMagoJugador::Moverse()
{
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Green, FString::Printf(TEXT("Moviendo al mago")));
}

void AMagoJugador::Atacar()
{
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Green, FString::Printf(TEXT("Atacando con magia")));
}

void AMagoJugador::Defender()
{
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Green, FString::Printf(TEXT("Defendiendo con escudo magico")));
}

