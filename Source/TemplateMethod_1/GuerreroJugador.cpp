// Fill out your copyright notice in the Description page of Project Settings.


#include "GuerreroJugador.h"

// Sets default values
AGuerreroJugador::AGuerreroJugador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGuerreroJugador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGuerreroJugador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGuerreroJugador::PrepararLanza()
{
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Cyan, FString::Printf(TEXT("Preparando lanza")));
}

void AGuerreroJugador::PrepararEscudo()
{
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Cyan, FString::Printf(TEXT("Preparando escudo")));
}

void AGuerreroJugador::PrepaparArmadura()
{
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Cyan, FString::Printf(TEXT("Preparando armadura")));

}

void AGuerreroJugador::Moverse()
{
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Cyan, FString::Printf(TEXT("Moviendo guerrero")));
}

void AGuerreroJugador::Atacar()
{
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Cyan, FString::Printf(TEXT("Atacando con lanza")));
}

void AGuerreroJugador::Defender()
{
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Cyan, FString::Printf(TEXT("Defendiendo con escudo")));
}

