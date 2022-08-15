

#include "AchievementComponent.h"


// Sets default values for this component's properties
UAchievementComponent::UAchievementComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


void UAchievementComponent::SetPresence(EPresence presence)
{
}

void UAchievementComponent::SetAchievementCompletion(EAchievement achievement, float completionAmount)
{
}

void UAchievementComponent::OnStoreSaveData(int32 slotIndex, int32 gameIndex, FString saveObjectName, FString Level, const FPhasmidObjectSaveDataList & saveDataList, const FPhasmidObjectSaveDataList & prevDataList, const FPhasmidGameSaveObjectDataMap & saveObjectDataMap)
{
}

void UAchievementComponent::OnSetCurrentUser()
{
}

void UAchievementComponent::OnChangeSaveGame(UFalconSaveGame * incomingSaveGame)
{
}

EPresence UAchievementComponent::GetPresence()
{
	return EPresence();
}

// Called when the game starts
void UAchievementComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UAchievementComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

