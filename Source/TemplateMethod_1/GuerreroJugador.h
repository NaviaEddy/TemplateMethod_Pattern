// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "JugadorBase.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GuerreroJugador.generated.h"

UCLASS()
class TEMPLATEMETHOD_1_API AGuerreroJugador : public AJugadorBase
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGuerreroJugador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	void PrepararLanza() override;
	void PrepararEscudo() override;
	void PrepaparArmadura() override;
	void Moverse() override;
	void Atacar() override;
	void Defender() override;

};
