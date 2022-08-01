

#pragma once

#include "CoreMinimal.h"
#include "PhasmidCollisionRegion.h"
#include "PhasmidProjectileEmitterStruct.h"
#include "TfbAkComponent.h"
#include "ProjectileRotationType.h"
#include "ProjectileImpactType.h"
#include "AkAudioEvent.h"
#include "PhasmidProjectileActor.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPhasmidProjectileActorProjectileDestroyed);
/**
 * 
 */
UCLASS()
class PHASMID_API APhasmidProjectileActor : public APhasmidCollisionRegion
{
	GENERATED_BODY()
	
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMovementComponent* MoveComponent;     
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMeshComponent* MeshComponent;       
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTfbAkComponent* AudioComponent;     
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class AActor> ImpactDecalClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPhasmidProjectileEmitterStruct PersistentParticleEmitterSettings;     
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPhasmidProjectileEmitterStruct OnHitParticleEmitterSettings;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPhasmidProjectileEmitterStruct OnExpireParticleEmitterSettings;

	UPROPERTY(BlueprintAssignable)
	FPhasmidProjectileActorProjectileDestroyed ProjectileDestroyed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UParticleSystemComponent* PersistentEmitter;   

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAkAudioEvent* OnHitAudioEvent;                 
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAkAudioEvent* OnExpireAudioEvent;             
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EProjectileRotationType RotationVelocityType;        
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AngularVelocity;                     
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector RotationAxis; 


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EProjectileImpactType BounceStopMovingImpactEffect;    
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ExplosionRadius;                     
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ExplosionDuration;                   
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bExplodeBouncingOnStopMovement;       
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ProjectileMeshStartScale;            
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector ProjectileMeshScaleInterpSettings;                                        

	UFUNCTION(BlueprintCallable)
	void ReceiveProjectileStopped(const FHitResult& Hit);
	UFUNCTION(BlueprintCallable)
	void ReceiveProjectileHit(class AActor* OverlappedActor, class UPrimitiveComponent* OverlappedComponent, const FHitResult& Hit);
	UFUNCTION(BlueprintCallable)
	void ReceiveProjectileFired();
	UFUNCTION(BlueprintCallable)
	void OnExplosionExpired();
	UFUNCTION(BlueprintCallable)
	void OnCollisionRegionOverlap(class APhasmidCollisionRegion* Region, class AActor* OverlappedActor, class UPrimitiveComponent* OverlappedComponent, const FHitResult& Hit);

};
