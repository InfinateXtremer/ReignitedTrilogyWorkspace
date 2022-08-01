

#include "CombatPoolComponent.h"


// Sets default values for this component's properties
UCombatPoolComponent::UCombatPoolComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCombatPoolComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UCombatPoolComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UCombatPoolComponent::SpawnSplineProjectileRegion()
{
}

void UCombatPoolComponent::SpawnProjectileRegion()
{
}

void UCombatPoolComponent::SpawnPooledActor(UClass * Class)
{
}

void UCombatPoolComponent::SpawnCollisionRegion()
{
}

void UCombatPoolComponent::SpawnBlueprintProjectileRegion(UClass * Class)
{
}

void UCombatPoolComponent::ReleaseRegion(APhasmidCollisionRegion * Region)
{
}

void UCombatPoolComponent::ReleaseProjectile(APhasmidProjectileActor * Projectile)
{
}

TArray<class AActor*> UCombatPoolComponent::GetAllPooledActorsOfClass(TSubclassOf<class AActor> ActorClass)
{
	return TArray<class AActor*>();
}

APhasmidCollisionRegion * UCombatPoolComponent::AcquireRegion(const FPhasmidCollisionStruct & Data, const FTransform & Transform)
{
	return nullptr;
}

APhasmidProjectileActor * UCombatPoolComponent::AcquireProjectile(const FPhasmidProjectileStruct & Data, const FTransform & Transform)
{
	return nullptr;
}
