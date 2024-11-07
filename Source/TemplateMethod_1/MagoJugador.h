// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "JugadorBase.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MagoJugador.generated.h"

UCLASS()
class TEMPLATEMETHOD_1_API AMagoJugador : public AJugadorBase
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMagoJugador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	void PrepararPosiciones() override;
	void Moverse() override;
	void Atacar() override;
	void Defender() override;

};
