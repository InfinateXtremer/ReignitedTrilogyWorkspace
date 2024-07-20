#pragma once
#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"
#include "QuestStrikePoint.generated.h"

class AQuestStrikePoint;
class UQuestMoveTask;

UCLASS(Abstract, Blueprintable)
class FALCON_API AQuestStrikePoint : public ATargetPoint {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnArrivedSignature, AQuestStrikePoint*, Pos, UQuestMoveTask*, moveTask);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnArrivedSignature OnArrived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOrientTowardsNextPoint;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AQuestStrikePoint* NextPoint;
    
public:
    AQuestStrikePoint();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Arriving(UQuestMoveTask* moveTask);
    
};

