// Fill out your copyright notice in the Description page of Project Settings.


#include "ArqueroJugador.h"

// Sets default values
AArqueroJugador::AArqueroJugador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AArqueroJugador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AArqueroJugador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AArqueroJugador::PrepararArco()
{
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("Preparando arco")));
}

void AArqueroJugador::PrepararFlechas()
{
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("Preparando flechas")));
}

void AArqueroJugador::Moverse()
{
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("Moviendo arquero")));
}

void AArqueroJugador::Atacar()
{
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("Atacando con arco")));
}

void AArqueroJugador::Defender()
{
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("Defendiendo con arco")));
}

