

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ProjectileArray.h"
#include "PooledActorArray.h"
#include "PhasmidProjectileActor.h"
#include "PhasmidProjectileStruct.h"
#include "CombatPoolComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PHASMID_API UCombatPoolComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCombatPoolComponent();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int RegionCount;        
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int ProjectileCount;                         
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int SplineProjectileCount;                   
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<TSubclassOf<APhasmidProjectileActor>, int32> BlueprintProjectileCounts;      
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class APhasmidCollisionRegion*> SpawnedRegions;                            
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class APhasmidCollisionRegion*> Regions;                                   
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class APhasmidProjectileActor*> BasicProjectiles;                          
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class APhasmidProjectileActor*> SplineProjectiles;                         
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<class UClass*, FProjectileArray> BlueprintProjectiles;                 
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bForceSpawningRegionDuringInit;       
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<UClass*, int> PooledActorCounts;        
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<class UClass*, FPooledActorArray> PooledActors;                        
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class AActor*> SpawnedActors;           
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bGuaranteeAcquirePooled;                                                     

	UFUNCTION(BlueprintCallable)
	void SpawnSplineProjectileRegion();
	UFUNCTION(BlueprintCallable)
	void SpawnProjectileRegion();
	UFUNCTION(BlueprintCallable)
	void SpawnPooledActor(UClass* Class);
	UFUNCTION(BlueprintCallable)
	void SpawnCollisionRegion();
	UFUNCTION(BlueprintCallable)
	void SpawnBlueprintProjectileRegion(UClass* Class);
	UFUNCTION(BlueprintCallable)
	void ReleaseRegion(class APhasmidCollisionRegion* Region);
	UFUNCTION(BlueprintCallable)
	void ReleaseProjectile(class APhasmidProjectileActor* Projectile);
	UFUNCTION(BlueprintCallable)
	TArray<class AActor*> GetAllPooledActorsOfClass(TSubclassOf<class AActor> ActorClass);
	UFUNCTION(BlueprintCallable)
	class APhasmidCollisionRegion* AcquireRegion(const FPhasmidCollisionStruct& Data, const FTransform& Transform);
	UFUNCTION(BlueprintCallable)
	class APhasmidProjectileActor* AcquireProjectile(const FPhasmidProjectileStruct& Data, const FTransform& Transform);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
