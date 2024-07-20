#pragma once
#include "CoreMinimal.h"
#include "ScaleIntensityComponent.h"
#include "DirectionalLightScaleIntensityComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API UDirectionalLightScaleIntensityComponent : public UScaleIntensityComponent {
    GENERATED_BODY()
public:
    UDirectionalLightScaleIntensityComponent();
};

