#pragma once
#include "CoreMinimal.h"
#include "FalconMovementCoordinator.h"
#include "FalconSplineMovementCoordinator.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFalconSplineMovementCoordinator : public UFalconMovementCoordinator {
    GENERATED_BODY()
public:
    UFalconSplineMovementCoordinator();
};

