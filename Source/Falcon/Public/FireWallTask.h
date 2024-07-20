#pragma once
#include "CoreMinimal.h"
#include "Tasks/AITask.h"
#include "FireWallTask.generated.h"

class AActor;

UCLASS(Blueprintable)
class FALCON_API UFireWallTask : public UAITask {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_fx;
    
public:

};

