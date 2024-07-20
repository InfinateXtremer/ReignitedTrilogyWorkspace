#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SkillNode.h"
#include "BuzzHop.generated.h"

UCLASS(Blueprintable)
class FALCON_API UBuzzHop : public USkillNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetPoint;
    
    UBuzzHop();
};

