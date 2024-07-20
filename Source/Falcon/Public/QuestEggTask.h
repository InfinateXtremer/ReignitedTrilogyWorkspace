#pragma once
#include "CoreMinimal.h"
#include "QuestTask.h"
#include "QuestEggTask.generated.h"

class AQuestLevelActor;
class ASP3_DragonEgg;

UCLASS(Blueprintable)
class FALCON_API UQuestEggTask : public UQuestTask {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASP3_DragonEgg* egg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AQuestLevelActor* Qla;
    
public:
    UQuestEggTask();
};

