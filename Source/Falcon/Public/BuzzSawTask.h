#pragma once
#include "CoreMinimal.h"
#include "Tasks/AITask_MoveTo.h"
#include "BuzzSawTask.generated.h"

class AActor;

UCLASS(Blueprintable)
class FALCON_API UBuzzSawTask : public UAITask_MoveTo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_proxy;
    
public:

};

