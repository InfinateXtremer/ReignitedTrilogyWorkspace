#pragma once
#include "CoreMinimal.h"
#include "PhasmidStateMachineMovementCoordinator.h"
#include "FalconMovementCoordinator.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFalconMovementCoordinator : public UPhasmidStateMachineMovementCoordinator {
    GENERATED_BODY()
public:
    UFalconMovementCoordinator();
};

