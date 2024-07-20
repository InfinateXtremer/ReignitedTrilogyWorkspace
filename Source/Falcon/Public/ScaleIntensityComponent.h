#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ScaleIntensityComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API UScaleIntensityComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UScaleIntensityComponent();
};

