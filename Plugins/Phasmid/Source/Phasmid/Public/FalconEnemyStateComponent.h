

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TargetPoint.h"
#include "FalconEverythingState.h"
#include "FalconEnemyStateComponent.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFalconEnemyStateComponentOnActorSpawned);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFalconEnemyStateComponentOnCollectibleSpawned);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFalconEnemyStateComponentOnEnterStateDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFalconEnemyStateComponentOnExitStateDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFalconEnemyStateComponentOnProjectileSpawned);



UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class PHASMID_API UFalconEnemyStateComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UFalconEnemyStateComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FFalconEverythingState State;  //Struct uses FalconEverythingTrigger

	UFUNCTION(BlueprintCallable)
	bool WillSpawnCollectibleOfType(UClass* Class);
	UFUNCTION(BlueprintCallable)
	FName GetStateName();
	UFUNCTION(BlueprintCallable)
	void BP_UpdateWanderParams(float Delay, float OuterRadius, float TurnRate);
	UFUNCTION(BlueprintCallable)
	void BP_SetWaypoints(class ATargetPoint* Points);
	UFUNCTION(BlueprintCallable)
	void BP_SetTarget(class AActor* Actor);
	UFUNCTION(BlueprintCallable)
	void BP_OnExitState(class UFalconEnemyStateComponent* NextState);
	UFUNCTION(BlueprintCallable)
	void BP_OnEnterState();
	UFUNCTION(BlueprintCallable)
	void BP_AddActorToWatchListByIndex(int32 Index, class AActor* Actor);
	UFUNCTION(BlueprintCallable)
	void BP_AddActorToWatchList(FName NextStateName, class AActor* Actor);
	UFUNCTION(BlueprintCallable)
	bool AllLootCollected();

	UPROPERTY(BlueprintAssignable)
	FFalconEnemyStateComponentOnActorSpawned OnActorSpawned;
	UPROPERTY(BlueprintAssignable)
	FFalconEnemyStateComponentOnCollectibleSpawned OnCollectibleSpawned;
	UPROPERTY(BlueprintAssignable)
	FFalconEnemyStateComponentOnEnterStateDelegate OnEnterStateDelegate;
	UPROPERTY(BlueprintAssignable)
	FFalconEnemyStateComponentOnExitStateDelegate OnExitStateDelegate;
	UPROPERTY(BlueprintAssignable)
	FFalconEnemyStateComponentOnProjectileSpawned OnProjectileSpawned;


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
