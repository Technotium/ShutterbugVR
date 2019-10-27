// Fill out your copyright notice in the Description page of Project Settings.


#include "actor_Interactable.h"

// Sets default values
Aactor_Interactable::Aactor_Interactable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Aactor_Interactable::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Aactor_Interactable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

