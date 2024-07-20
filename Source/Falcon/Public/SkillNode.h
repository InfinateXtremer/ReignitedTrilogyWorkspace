#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_GameplayTaskBase.h"
#include "SkillNode.generated.h"

UCLASS(Abstract, Blueprintable)
class USkillNode : public UBTTask_GameplayTaskBase {
    GENERATED_BODY()
public:
    USkillNode();
};

