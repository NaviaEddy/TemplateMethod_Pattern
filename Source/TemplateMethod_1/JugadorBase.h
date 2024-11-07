// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "JugadorBase.generated.h"

UCLASS()
class TEMPLATEMETHOD_1_API AJugadorBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AJugadorBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void RealizarAccion();

protected:
	// Métodos que deben ser implementados por las subclases
	virtual void PrepararLanza() {};
	virtual void PrepararEscudo() {};
	virtual void PrepaparArmadura() {};
	virtual void PrepararArco() {};
	virtual void PrepararPosiciones() {};
	virtual void PrepararFlechas() {};
	// Métodos abstractos que deben ser implementados por las subclases
	virtual void Moverse() PURE_VIRTUAL(ABaseCharacter::Move, );
	virtual void Atacar() PURE_VIRTUAL(ABaseCharacter::Attack, );
	virtual void Defender() PURE_VIRTUAL(ABaseCharacter::Defend, );


};
