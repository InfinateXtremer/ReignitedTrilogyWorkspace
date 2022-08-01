

#include "PhasmidCullComponent.h"


// Sets default values for this component's properties
UPhasmidCullComponent::UPhasmidCullComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPhasmidCullComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UPhasmidCullComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UPhasmidCullComponent::UnbindFromCull(AActor * EventOwner)
{
}

void UPhasmidCullComponent::SetGameStateCullReady(bool bReady)
{
}

void UPhasmidCullComponent::SetCullDistance(float NewCullDistance)
{
}

void UPhasmidCullComponent::SetAutoUpdateCull(bool bNewEnabled)
{
}

void UPhasmidCullComponent::SetActorEnabled(bool bNewEnabled)
{
}

bool UPhasmidCullComponent::IsCulled()
{
	return false;
}

bool UPhasmidCullComponent::IsActorCulled()
{
	return false;
}

bool UPhasmidCullComponent::GetOffScreen()
{
	return false;
}

bool UPhasmidCullComponent::GetMeshOffScreen(UMeshComponent * MeshComponent)
{
	return false;
}

bool UPhasmidCullComponent::GetGameStateCullReady()
{
	return false;
}

void UPhasmidCullComponent::CullEventDelegate__DelegateSignature(AActor * Actor, bool bIsCulled)
{
}

void UPhasmidCullComponent::CheckCull()
{
}

