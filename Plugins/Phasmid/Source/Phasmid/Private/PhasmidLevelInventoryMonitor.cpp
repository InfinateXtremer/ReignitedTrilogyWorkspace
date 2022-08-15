

#include "PhasmidLevelInventoryMonitor.h"


// Sets default values
APhasmidLevelInventoryMonitor::APhasmidLevelInventoryMonitor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APhasmidLevelInventoryMonitor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APhasmidLevelInventoryMonitor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APhasmidLevelInventoryMonitor::doUpdateInventory()
{
}

