#pragma once
#include "CoreMinimal.h"
#include "Tasks/AITask.h"
#include "BreatheFireTask.generated.h"

class AActor;

UCLASS(Blueprintable)
class FALCON_API UBreatheFireTask : public UAITask {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_fx;

};

