#pragma once
#include "CoreMinimal.h"
#include "ScaleIntensityComponent.h"
#include "PPVScaleIntensityComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API UPPVScaleIntensityComponent : public UScaleIntensityComponent {
    GENERATED_BODY()
public:
    UPPVScaleIntensityComponent();
};

