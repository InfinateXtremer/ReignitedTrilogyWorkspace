#pragma once
#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"
#include "QuestTrigger.generated.h"

class APawn;
class AQuestLevelActor;
class AQuestTrigger;

UCLASS(Abstract, Blueprintable)
class FALCON_API AQuestTrigger : public ATargetPoint {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVisitedSignature, AQuestTrigger*, Trigger, APawn*, Player);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVisitedSignature OnVisited;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AQuestLevelActor* m_levelActor;
    
public:
    AQuestTrigger();
    UFUNCTION(BlueprintCallable)
    void SetVisited(bool visited);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerVisited(APawn* thePlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetTriggerName() const;
    
};

