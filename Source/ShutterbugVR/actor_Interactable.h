// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "actor_Interactable.generated.h"

UCLASS()
class SHUTTERBUGVR_API Aactor_Interactable : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Aactor_Interactable();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
