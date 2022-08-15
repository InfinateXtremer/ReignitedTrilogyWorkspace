

#include "FanfareComponent.h"


// Sets default values for this component's properties
UFanfareComponent::UFanfareComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


void UFanfareComponent::OnStoreSaveData(int32 slotIndex, int32 gameIndex, FString saveObjectName, FString Level, const FPhasmidObjectSaveDataList & saveDataList, const FPhasmidObjectSaveDataList & prevDataList, const FPhasmidGameSaveObjectDataMap & saveObjectDataMap)
{
}

void UFanfareComponent::OnChangeSaveGame(UFalconSaveGame * incomingSaveGame)
{
}

// Called when the game starts
void UFanfareComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UFanfareComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

