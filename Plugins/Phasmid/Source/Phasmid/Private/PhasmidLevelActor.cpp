

#include "PhasmidLevelActor.h"


// Sets default values
APhasmidLevelActor::APhasmidLevelActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void APhasmidLevelActor::AbilityEndOverlap(FGameplayTag TriggerTag, UActorComponent * OtherComp, AActor * OtherActor, UActorComponent * OverlappedComponent)
{
}

void APhasmidLevelActor::BP_HandleDamage(AActor * DamagingActor, UActorComponent * HitComponent, FGameplayTag DamageTags, float Magnitude)
{
}

// Called when the game starts or when spawned
void APhasmidLevelActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APhasmidLevelActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

