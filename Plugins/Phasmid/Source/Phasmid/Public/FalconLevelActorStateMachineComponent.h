#pragma once
#include "CoreMinimal.h"
#include "FalconEnemyComponent.h"
#include "FalconLevelActorStateMachineComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFalconLevelActorStateMachineComponent : public UFalconEnemyComponent {
    GENERATED_BODY()
public:
    UFalconLevelActorStateMachineComponent();
};

