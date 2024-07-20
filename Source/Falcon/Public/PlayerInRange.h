#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "PlayerInRange.generated.h"

UCLASS(Blueprintable)
class FALCON_API UPlayerInRange : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptableDistance;
    
    UPlayerInRange();
};

