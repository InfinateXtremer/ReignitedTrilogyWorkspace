

#pragma once

#include "CoreMinimal.h"
#include "PhasmidBeamDamage.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SpotLightComponent.h"
#include "Components/PointLightComponent.h"
#include "SpyroFlameBreathActor.generated.h"

/**
 * 
 */
UCLASS()
class FALCON_API ASpyroFlameBreathActor : public APhasmidBeamDamage
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASpyroFlameBreathActor();

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UPointLightComponent* PointLightComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class USpotLightComponent* SpotLight;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UCurveFloat* IntensityCurve;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float MinDistanceIntensityScale;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float PointLightPeakIntensity;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float SpotLightPeakIntensity;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float FullLifetime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float AttackLifetime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float EndImpactsTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float MinImpactDelay;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float SplitImpactsTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bFlameImpactAttached;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float FlameImpactDelay;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float EndMuzzleTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bMuzzleEnabled;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float MuzzleHitTimeOffset;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float HitTimeOffset;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float MinParticleParameterVal;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float MuzzleThreshold;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float HideFlameEmitterThreshold;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float ImpactOffsetZ;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float ImpactOffsetX;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UParticleSystemComponent* FlameDamageEmitterTemplate;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UParticleSystemComponent* ImpactEmitterTemplate;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UParticleSystemComponent* FlameMuzzleTemplate;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UParticleSystemComponent* FlameEmitterTemplate;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<FName> ParticleParameters;
};
