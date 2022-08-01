

#include "PhasmidLevelActor.h"


// Sets default values
APhasmidLevelActor::APhasmidLevelActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}


void APhasmidLevelActor::BP_HandleDamage(float Magnitude, FGameplayTagContainer DamageTags, UPrimitiveComponent * HitComponent, const AActor * DamagingActor)
{
}

void APhasmidLevelActor::TriggerOverlapAbility(AActor * OtherActor, FGameplayTag TriggerTag)
{
}

void APhasmidLevelActor::Client_OnShieldBreak(const FGameplayEventData Payload)
{
}

void APhasmidLevelActor::Client_OnDeath(const FGameplayEventData Payload)
{
}

void APhasmidLevelActor::Client_OnDamage(const FGameplayEventData Payload)
{
}

void APhasmidLevelActor::AbilityEndOverlap(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, FGameplayTag TriggerTag)
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

