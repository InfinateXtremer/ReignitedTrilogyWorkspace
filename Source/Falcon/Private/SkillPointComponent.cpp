

#include "SkillPointComponent.h"


// Sets default values for this component's properties
USkillPointComponent::USkillPointComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


void USkillPointComponent::SetSkillPointObtained(ESkillPoint skillPoint)
{
}

int32 USkillPointComponent::GetSkillPointObtainedCount(int32 gameIndex, bool & completedPart1, bool & completedPart2)
{
	return int32();
}

bool USkillPointComponent::GetSkillPointObtained(ESkillPoint skillPoint)
{
	return false;
}

// Called when the game starts
void USkillPointComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void USkillPointComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

