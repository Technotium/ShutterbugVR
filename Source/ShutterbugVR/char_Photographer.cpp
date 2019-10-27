// Fill out your copyright notice in the Description page of Project Settings.


#include "char_Photographer.h"

// Sets default values
Achar_Photographer::Achar_Photographer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Achar_Photographer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Achar_Photographer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void Achar_Photographer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

