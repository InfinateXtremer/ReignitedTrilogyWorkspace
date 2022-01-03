

#include "PhasmidAbilityBaseActor.h"


// Sets default values
APhasmidAbilityBaseActor::APhasmidAbilityBaseActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void APhasmidAbilityBaseActor::SetTeamId(EPhasmidTeamId newTeamId)
{
}

void APhasmidAbilityBaseActor::OnRep_TeamId(EPhasmidTeamId oldTeamId)
{
}

void APhasmidAbilityBaseActor::InitializeGameplayTagsFromInstigator(const FGameplayTagContainer & TagContainer)
{
}

UAbilitySystemComponent * APhasmidAbilityBaseActor::GetASC()
{
	return nullptr;
}

// Called when the game starts or when spawned
void APhasmidAbilityBaseActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APhasmidAbilityBaseActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

