#pragma once
#include "CoreMinimal.h"
#include "ScaleIntensityComponent.h"
#include "AtmosphericFogScaleIntensityComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API UAtmosphericFogScaleIntensityComponent : public UScaleIntensityComponent {
    GENERATED_BODY()
public:
    UAtmosphericFogScaleIntensityComponent();
};

