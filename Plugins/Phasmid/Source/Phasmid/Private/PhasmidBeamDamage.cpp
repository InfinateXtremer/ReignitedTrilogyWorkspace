

#include "PhasmidBeamDamage.h"


// Sets default values
APhasmidBeamDamage::APhasmidBeamDamage()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

float APhasmidBeamDamage::GetTimeAliveRatio() const
{
	return 0.0f;
}

bool APhasmidBeamDamage::IsDelayOver() const
{
	return false;
}

// Called when the game starts or when spawned
void APhasmidBeamDamage::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APhasmidBeamDamage::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

