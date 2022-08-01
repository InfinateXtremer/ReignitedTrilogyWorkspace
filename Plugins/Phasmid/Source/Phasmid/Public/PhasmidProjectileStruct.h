

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedStruct.h"
#include "ProjectileType.h"
#include "ProjectileImpactType.h"
#include "PhasmidProjectileActor.h"
#include "PhasmidLevelActor.h"
#include "ProjectileOrientation.h"
#include "ProjectileLobType.h"
#include "ProjectileRotationType.h"
#include "PhasmidMeshScaleStruct.h"
#include "PhasmidProjectileEmitterStruct.h"
#include "PhasmidCollisionStruct.h"
#include "PhasmidProjectileStruct.generated.h"

/**
 * 
 */
UCLASS()
class PHASMID_API UPhasmidProjectileUserStruct : public UUserDefinedStruct
{
	GENERATED_BODY()
	
	
	
	
};


USTRUCT(BlueprintType)
struct FPhasmidProjectileStruct
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EProjectileType Type;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class APhasmidProjectileActor> ClassOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSpawnRelativeToOwner;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SpawnRelativeToChild;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName OwnerSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EProjectileOrientation Orientation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EProjectileLobType LobType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform RelativeSpawnTransform;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMesh* StaticMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh* SkeletalMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCheckSpawnThroughWall;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector MeshOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator MeshInitialRotation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPhasmidMeshScaleStruct MeshScaleInterpolation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AActor* TargetActor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector TargetLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseTargetLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* SplineTimeCurve;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EProjectileRotationType RotationVelocityType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AngularVelocity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector RotationAxis;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bRotationFollowsVelocity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHomeToPlayer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AActor> HomingTarget;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* HorizontalHomingDegreeCurve;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* VerticalHomingDegreeCurve;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InitialLifeSpan;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InitialSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxSpeed;	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bFastMovingEnemyProjectile;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAddOwnerHorizontalSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GravityScale;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDestroyOnCollision;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bExpireWhenOffScreen;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShouldBounce;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bShouldBounceOffAllImmune;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BounceRadius;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bBounceAngleAffectsFriction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Bounciness;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BounceFriction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BounceVelocityStopSimulatingThreshold;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EProjectileImpactType BounceStopMovingImpactEffect;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ExplosionRadius;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ExplosionDuration;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bExplodeBouncingOnStopMovement;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAkAudioEvent* OnSpawnAudioEvent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPhasmidProjectileEmitterStruct PersistentParticleEmitter;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAkAudioEvent* PersistentAudioEvent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPhasmidProjectileEmitterStruct OnHitParticleEmitter;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAkAudioEvent* OnHitAudioEvent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class AActor> ImpactDecalClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPhasmidProjectileEmitterStruct OnExpireParticleEmitter;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAkAudioEvent* OnExpireAudioEvent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPhasmidCollisionStruct CollisionData;

};