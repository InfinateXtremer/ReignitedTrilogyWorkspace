#include "SpyroFlameBreathActor.h"
#include "Components/PointLightComponent.h"
#include "Components/SpotLightComponent.h"

ASpyroFlameBreathActor::ASpyroFlameBreathActor() {
    this->FlameEmitterTemplate = NULL;
    this->FlameMuzzleTemplate = NULL;
    this->ImpactEmitterTemplate = NULL;
    this->FlameDamageEmitterTemplate = NULL;
    this->ImpactOffsetX = 0.00f;
    this->ImpactOffsetZ = 0.00f;
    this->HideFlameEmitterThreshold = 10.00f;
    this->MuzzleThreshold = 10.00f;
    this->MinParticleParameterVal = 0.10f;
    this->HitTimeOffset = -0.20f;
    this->MuzzleHitTimeOffset = -0.20f;
    this->bMuzzleEnabled = true;
    this->EndMuzzleTime = 0.50f;
    this->FlameImpactDelay = 0.10f;
    this->bFlameImpactAttached = false;
    this->SplitImpactsTime = 0.00f;
    this->MinImpactDelay = 0.10f;
    this->EndImpactsTime = 0.35f;
    this->AttackLifetime = 0.50f;
    this->FullLifetime = 0.60f;
    this->SpotLightPeakIntensity = 100.00f;
    this->PointLightPeakIntensity = 10.00f;
    this->MinDistanceIntensityScale = 0.10f;
    this->IntensityCurve = NULL;
    this->SpotLightFunction = NULL;
    this->SpotLight = CreateDefaultSubobject<USpotLightComponent>(TEXT("FlameSpotLight"));
    this->PointLightComp = CreateDefaultSubobject<UPointLightComponent>(TEXT("FlamePointLightComp"));
    this->FlameEmitter = NULL;
    this->FlameMuzzle = NULL;
    this->LeftImpactEmitter = NULL;
    this->RightImpactEmitter = NULL;
    this->SpotLightFunctionDynamic = NULL;
}

