#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "PhasmidCollisionStruct.h"
#include "PhasmidProjectileStruct.h"
#include "PooledActorArray.h"
#include "ProjectileArray.h"
#include "Templates/SubclassOf.h"
#include "CombatPoolComponent.generated.h"

class AActor;
class APhasmidCollisionRegion;
class APhasmidProjectileActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCombatPoolComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RegionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProjectileCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SplineProjectileCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<APhasmidProjectileActor>, int32> BlueprintProjectileCounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APhasmidCollisionRegion*> SpawnedRegions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APhasmidCollisionRegion*> Regions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APhasmidProjectileActor*> BasicProjectiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APhasmidProjectileActor*> SplineProjectiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UClass*, FProjectileArray> BlueprintProjectiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceSpawningRegionDuringInit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UClass*, int32> PooledActorCounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UClass*, FPooledActorArray> PooledActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpawnedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGuaranteeAcquirePooled;
    
public:
    UCombatPoolComponent();
private:
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
    
public:
    UFUNCTION(BlueprintCallable)
    void ReleaseRegion(APhasmidCollisionRegion* Region);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseProjectile(APhasmidProjectileActor* Projectile);
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetAllPooledActorsOfClass(TSubclassOf<AActor> ActorClass);
    
public:
    UFUNCTION(BlueprintCallable)
    APhasmidCollisionRegion* AcquireRegion(const FPhasmidCollisionStruct& Data, const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable)
    APhasmidProjectileActor* AcquireProjectile(const FPhasmidProjectileStruct& Data, const FTransform& Transform);
    
};

