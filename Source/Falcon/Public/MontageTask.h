#pragma once
#include "CoreMinimal.h"
#include "MontageDesc.h"
#include "QuestTask.h"
#include "MontageTask.generated.h"

UCLASS(Blueprintable)
class FALCON_API UMontageTask : public UQuestTask {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMontageDesc> m_montages;
    
public:
    UMontageTask();
};

