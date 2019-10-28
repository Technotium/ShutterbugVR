// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "char_Photographer.generated.h"

//FD
class UMotionControllerComponent; class Ucomp_ViveWand;

UCLASS()
class SHUTTERBUGVR_API Achar_Photographer : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	Achar_Photographer();

	UPROPERTY(EditAnywhere)
		Ucomp_ViveWand* rightHand;
	UPROPERTY(EditAnywhere)
		Ucomp_ViveWand* leftHand;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
