

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "PhasmidAbilityBaseActor.h"
#include "PhasmidLevelActor.generated.h"

UCLASS()
class PHASMID_API APhasmidLevelActor : public APhasmidAbilityBaseActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APhasmidLevelActor();

	UFUNCTION(BlueprintCallable)
		static void AbilityEndOverlap(FGameplayTag TriggerTag, UActorComponent* OtherComp, AActor* OtherActor, UActorComponent* OverlappedComponent);
	UFUNCTION(BlueprintCallable)
		static void BP_HandleDamage(AActor* DamagingActor, UActorComponent* HitComponent, FGameplayTag DamageTags, float Magnitude);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
