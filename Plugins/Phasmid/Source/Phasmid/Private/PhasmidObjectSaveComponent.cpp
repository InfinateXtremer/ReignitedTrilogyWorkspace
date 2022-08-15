

#include "PhasmidObjectSaveComponent.h"


// Sets default values for this component's properties
UPhasmidObjectSaveComponent::UPhasmidObjectSaveComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPhasmidObjectSaveComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UPhasmidObjectSaveComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool UPhasmidObjectSaveComponent::SetSaveParam(int32 dataIndex, int32 paramIndex, const FPhasmidSaveParam & saveParam, bool updateSave)
{
	return false;
}

void UPhasmidObjectSaveComponent::SetCollected(int32 dataIndex, bool updateSave)
{
}

bool UPhasmidObjectSaveComponent::GetSaveParam(int32 dataIndex, int32 paramIndex, FPhasmidSaveParam & saveParam)
{
	return false;
}

int32 UPhasmidObjectSaveComponent::GetParamCount(int32 dataIndex)
{
	return int32();
}

int32 UPhasmidObjectSaveComponent::GetItemCount()
{
	return int32();
}

EInventoryType UPhasmidObjectSaveComponent::getInventoryType(int32 dataIndex)
{
	return EInventoryType();
}

bool UPhasmidObjectSaveComponent::GetCollected(int32 dataIndex)
{
	return false;
}
