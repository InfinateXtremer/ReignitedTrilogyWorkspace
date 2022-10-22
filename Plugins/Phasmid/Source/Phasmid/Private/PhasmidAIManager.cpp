

#include "PhasmidAIManager.h"


// Sets default values for this component's properties
UPhasmidAIManager::UPhasmidAIManager()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPhasmidAIManager::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UPhasmidAIManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UPhasmidAIManager::ScheduleSpawnRequest()
{
}

void UPhasmidAIManager::ControllerUnpossessed(AFalconAIController * Controller)
{
}

