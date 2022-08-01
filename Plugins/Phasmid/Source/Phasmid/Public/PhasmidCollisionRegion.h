

#pragma once

#include "CoreMinimal.h"
#include "PhasmidAbilityBaseActor.h"
#include "CollisionRegionFilter.h"
#include "PhasmidCollisionEmitterStruct.h"
#include "CollisionRegionShape.h"
#include "CollisionRegionShape.h"
#include "PhasmidCollisionOverlapInfo.h"
#include "PhasmidDamageGroup.h"
#include "PhasmidCollisionStruct.h"
#include "PhasmidCollisionRegion.generated.h"

/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPhasmidCollisionRegionOnRegionOverlap);

UCLASS()
class PHASMID_API APhasmidCollisionRegion : public APhasmidAbilityBaseActor
{
	GENERATED_BODY()
	
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AnimationId;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase* SpawningAnimation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableOnPlay;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECollisionRegionFilter CollisionFilter;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCollideWithOwner;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPhasmidAbilitySystemComponent* AbilitySystemComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CollisionInterval;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EndCollisionInterval;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CollisionMagnitude;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer CollisionTags;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OverrideLifeTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bInteractWithWalls;
	UPROPERTY(BlueprintAssignable)
	FPhasmidCollisionRegionOnRegionOverlap OnRegionOverlap;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPhasmidCollisionEmitterStruct ImpactEmitterSettings; 
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName CollisionChannel;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHideActorOnRelease;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSkipDamageExecution;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FHitResult> PausedHits;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AActor* RegionOwner;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECollisionRegionShape Shape;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<FPhasmidCollisionOverlapInfo> OverlappedActors;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<FPhasmidCollisionOverlapInfo> OverlapEndedActors;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPhasmidDamageGroup DamageGroup;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPrimitiveComponent* CollisionComponent;


	UFUNCTION(BlueprintCallable)
	void Spawn(bool bEnableCollision);
	UFUNCTION(BlueprintCallable)
	void SetupSphere(const FPhasmidCollisionStruct& CollisionData);
	UFUNCTION(BlueprintCallable)
	void SetupPrimitiveComponent(class UPrimitiveComponent* Primitive);
	UFUNCTION(BlueprintCallable)
	void SetupFromCollisionStruct(const FPhasmidCollisionStruct& CollisionData);
	UFUNCTION(BlueprintCallable)
	void SetupCapsule(const FPhasmidCollisionStruct& CollisionData);
	UFUNCTION(BlueprintCallable)
	void SetupBox(const FPhasmidCollisionStruct& CollisionData);
	UFUNCTION(BlueprintCallable)
	void SetRegionOwner(class AActor* NewOwner);
	UFUNCTION(BlueprintCallable)
	void ReceiveOnLifeSpanExpired();
	UFUNCTION(BlueprintCallable)
	void OnComponentOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION(BlueprintCallable)
	void OnCollisionRegionOverlap(class APhasmidCollisionRegion* Region, class AActor* OverlappedActor, class UPrimitiveComponent* OverlappedComponent, const FHitResult& Hit);
	UFUNCTION(BlueprintCallable)
	void EnableCollision();
	UFUNCTION(BlueprintCallable)
	bool CanHitActor(class AActor* Actor, class UPrimitiveComponent* HitComponent);
};
