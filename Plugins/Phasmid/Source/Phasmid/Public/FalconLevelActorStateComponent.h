#pragma once
#include "CoreMinimal.h"
#include "FalconEnemyStateComponent.h"
#include "FalconLevelActorStateComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PHASMID_API UFalconLevelActorStateComponent : public UFalconEnemyStateComponent {
    GENERATED_BODY()
public:
    UFalconLevelActorStateComponent();
};

