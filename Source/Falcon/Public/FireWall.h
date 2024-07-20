#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SkillNode.h"
#include "FireWall.generated.h"

UCLASS(Blueprintable)
class FALCON_API UFireWall : public USkillNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetPoint;
    
    UFireWall();
};

