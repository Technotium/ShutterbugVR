

#pragma once

#include "CoreMinimal.h"
#include "MotionControllerComponent.h"
#include "comp_ViveWand.generated.h"

/**
 * 
 */
UCLASS()
class SHUTTERBUGVR_API Ucomp_ViveWand : public UMotionControllerComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	Ucomp_ViveWand();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

};
