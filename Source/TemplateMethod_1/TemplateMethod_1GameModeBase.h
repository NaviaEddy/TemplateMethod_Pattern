// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TemplateMethod_1GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class TEMPLATEMETHOD_1_API ATemplateMethod_1GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	ATemplateMethod_1GameModeBase();

protected:
	virtual void BeginPlay() override;

private:
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(VisibleAnywhere, Category="Game mode")
	class AGuerreroJugador* Guerrero;

	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class AArqueroJugador* Arquero;

	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class AMagoJugador* Mago;
};
