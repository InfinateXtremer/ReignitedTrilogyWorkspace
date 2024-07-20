#pragma once
#include "CoreMinimal.h"
#include "ScaleIntensityComponent.h"
#include "ExponentialHeightFogScaleIntensityComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API UExponentialHeightFogScaleIntensityComponent : public UScaleIntensityComponent {
    GENERATED_BODY()
public:
    UExponentialHeightFogScaleIntensityComponent();
};

