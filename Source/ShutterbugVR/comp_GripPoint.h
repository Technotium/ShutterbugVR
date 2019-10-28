

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "comp_GripPoint.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SHUTTERBUGVR_API Ucomp_GripPoint : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	Ucomp_GripPoint();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
