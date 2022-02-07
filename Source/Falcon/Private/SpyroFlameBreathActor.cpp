

#include "SpyroFlameBreathActor.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/SpotLightComponent.h"


ASpyroFlameBreathActor::ASpyroFlameBreathActor()
{
	SpotLight = CreateDefaultSubobject<USpotLightComponent>(TEXT("Spotlight"));
	PointLightComp = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLightComp"));
	FlameDamageEmitterTemplate = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FlameDamageEmitterTemplate"));
	ImpactEmitterTemplate = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ImpactEmitterTemplate"));
	FlameMuzzleTemplate = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FlameMuzzleTemplate"));
	FlameEmitterTemplate = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FlameEmitterTemplate"));
}
