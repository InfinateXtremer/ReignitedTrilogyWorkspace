#pragma once
#include "CoreMinimal.h"
#include "QuestTask.h"
#include "QuestOverlapTask.generated.h"

class AActor;

UCLASS(Blueprintable)
class FALCON_API UQuestOverlapTask : public UQuestTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_overlapSource;
    
public:
    UQuestOverlapTask();
protected:
    UFUNCTION(BlueprintCallable)
    void Waited(AActor* OverlappedActor, AActor* OtherActor);
    
};

