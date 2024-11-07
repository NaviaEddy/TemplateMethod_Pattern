// Fill out your copyright notice in the Description page of Project Settings.


#include "JugadorBase.h"

// Sets default values
AJugadorBase::AJugadorBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AJugadorBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AJugadorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AJugadorBase::RealizarAccion()
{
	PrepararLanza();
	PrepararEscudo();
	PrepaparArmadura();
	PrepararArco();
	PrepararPosiciones();
	PrepararFlechas();
	Moverse();
	Atacar();
	Defender();
}

