

#include "FalconEnemyStateComponent.h"


// Sets default values for this component's properties
UFalconEnemyStateComponent::UFalconEnemyStateComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UFalconEnemyStateComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UFalconEnemyStateComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool UFalconEnemyStateComponent::WillSpawnCollectibleOfType(UClass * Class)
{
	return false;
}

FName UFalconEnemyStateComponent::GetStateName()
{
	return FName();
}

void UFalconEnemyStateComponent::BP_UpdateWanderParams(float Delay, float OuterRadius, float TurnRate)
{
}

void UFalconEnemyStateComponent::BP_SetWaypoints(ATargetPoint * Points)
{
}

void UFalconEnemyStateComponent::BP_SetTarget(AActor * Actor)
{
}

void UFalconEnemyStateComponent::BP_OnExitState(UFalconEnemyStateComponent * NextState)
{
}

void UFalconEnemyStateComponent::BP_OnEnterState()
{
}

void UFalconEnemyStateComponent::BP_AddActorToWatchListByIndex(int32 Index, AActor * Actor)
{
}

void UFalconEnemyStateComponent::BP_AddActorToWatchList(FName NextStateName, AActor * Actor)
{
}

bool UFalconEnemyStateComponent::AllLootCollected()
{
	return false;
}
