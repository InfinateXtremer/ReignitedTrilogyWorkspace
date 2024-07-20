#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EProjectileImpactType.h"
#include "EProjectileRotationType.h"
#include "PhasmidCollisionRegion.h"
#include "PhasmidProjectileEmitterStruct.h"
#include "ProjectileDestroyedSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "PhasmidProjectileActor.generated.h"

class AActor;
class UAkAudioEvent;
class UMeshComponent;
class UMovementComponent;
class UParticleSystemComponent;
class UPrimitiveComponent;
class UTfbAkComponent;

UCLASS(Abstract, Blueprintable)
class PHASMID_API APhasmidProjectileActor : public APhasmidCollisionRegion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovementComponent* MoveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTfbAkComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ImpactDecalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhasmidProjectileEmitterStruct PersistentParticleEmitterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhasmidProjectileEmitterStruct OnHitParticleEmitterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhasmidProjectileEmitterStruct OnExpireParticleEmitterSettings;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProjectileDestroyedSignature ProjectileDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* PersistentEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnHitAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnExpireAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EProjectileRotationType RotationVelocityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngularVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RotationAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EProjectileImpactType BounceStopMovingImpactEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplosionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplosionDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExplodeBouncingOnStopMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectileMeshStartScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ProjectileMeshScaleInterpSettings;
    
    APhasmidProjectileActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveProjectileStopped(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveProjectileHit(AActor* OverlappedActor, UPrimitiveComponent* OverlappedComponent, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveProjectileFired();
    
    UFUNCTION(BlueprintCallable)
    void OnExplosionExpired();
    
    UFUNCTION(BlueprintCallable)
    void OnCollisionRegionOverlap(APhasmidCollisionRegion* Region, AActor* OverlappedActor, UPrimitiveComponent* OverlappedComponent, const FHitResult& Hit);
    
};

