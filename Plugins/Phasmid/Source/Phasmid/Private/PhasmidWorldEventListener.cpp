

#include "PhasmidWorldEventListener.h"


// Sets default values for this component's properties
UPhasmidWorldEventListenerComponent::UPhasmidWorldEventListenerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


void UPhasmidWorldEventListenerComponent::subscribeEventLevelRemovedFromWorld(bool listen)
{
}

void UPhasmidWorldEventListenerComponent::subscribeEventLevelAddedToWorld(bool listen)
{
}

// Called when the game starts
void UPhasmidWorldEventListenerComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UPhasmidWorldEventListenerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

