


#include "comp_ViveWand.h"
#include "comp_GripPoint.h"

// Sets default values for this component's properties
Ucomp_ViveWand::Ucomp_ViveWand()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void Ucomp_ViveWand::BeginPlay()
{
	Super::BeginPlay();

	// ...

}


// Called every frame
void Ucomp_ViveWand::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}