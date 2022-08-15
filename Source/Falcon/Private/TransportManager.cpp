

#include "TransportManager.h"


// Sets default values
ATransportManager::ATransportManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATransportManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATransportManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

