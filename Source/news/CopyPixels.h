// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CopyPixels.generated.h"

UCLASS()
class NEWS_API ACopyPixels : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACopyPixels();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
