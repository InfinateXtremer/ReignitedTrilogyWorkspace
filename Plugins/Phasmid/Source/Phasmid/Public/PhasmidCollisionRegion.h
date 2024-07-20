#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "CollisionRegionOverlapSignatureDelegate.h"
#include "DamagingActorInterface.h"
#include "ECollisionRegionFilter.h"
#include "ECollisionRegionShape.h"
#include "PhasmidAbilityBaseActor.h"
#include "PhasmidCollisionEmitterStruct.h"
#include "PhasmidCollisionOverlapInfo.h"
#include "PhasmidCollisionStruct.h"
#include "PhasmidDamageGroup.h"
#include "PhasmidDamageGroupInterface.h"
#include "PooledActorInterface.h"
#include "PhasmidCollisionRegion.generated.h"

class AActor;
class APhasmidCollisionRegion;
class UAnimSequenceBase;
class UPhasmidAbilitySystemComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class PHASMID_API APhasmidCollisionRegion : public APhasmidAbilityBaseActor //, public IPhasmidDamageGroupInterface, public IPooledActorInterface, public IDamagingActorInterface 
{
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* SpawningAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableOnPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECollisionRegionFilter CollisionFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCollideWithOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhasmidAbilitySystemComponent* AbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndCollisionInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CollisionTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideLifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInteractWithWalls;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionRegionOverlapSignature OnRegionOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhasmidCollisionEmitterStruct ImpactEmitterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideActorOnRelease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipDamageExecution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHitResult> PausedHits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* RegionOwner;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECollisionRegionShape Shape;
    
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    //TSet<FPhasmidCollisionOverlapInfo> OverlappedActors;
    //
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    //TSet<FPhasmidCollisionOverlapInfo> OverlapEndedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhasmidDamageGroup DamageGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* CollisionComponent;
    
public:
    APhasmidCollisionRegion();
    UFUNCTION(BlueprintCallable)
    void Spawn(bool bEnableCollision);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetupSphere(const FPhasmidCollisionStruct& CollisionData);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetupPrimitiveComponent(UPrimitiveComponent* Primitive);
    
    UFUNCTION(BlueprintCallable)
    void SetupFromCollisionStruct(const FPhasmidCollisionStruct& CollisionData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetupCapsule(const FPhasmidCollisionStruct& CollisionData);
    
    UFUNCTION(BlueprintCallable)
    void SetupBox(const FPhasmidCollisionStruct& CollisionData);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetRegionOwner(AActor* NewOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnLifeSpanExpired();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnComponentOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCollisionRegionOverlap(APhasmidCollisionRegion* Region, AActor* OverlappedActor, UPrimitiveComponent* OverlappedComponent, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void EnableCollision();
    
    UFUNCTION(BlueprintCallable)
    bool CanHitActor(AActor* Actor, UPrimitiveComponent* HitComponent);
    
    
    // Fix for true pure virtual functions not being implemented
};

