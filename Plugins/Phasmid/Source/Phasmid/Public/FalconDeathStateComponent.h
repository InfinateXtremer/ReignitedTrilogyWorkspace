#pragma once
#include "CoreMinimal.h"
#include "FalconEnemyStateComponent.h"
#include "FalconDeathStateComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PHASMID_API UFalconDeathStateComponent : public UFalconEnemyStateComponent {
    GENERATED_BODY()
public:
    UFalconDeathStateComponent();
};

