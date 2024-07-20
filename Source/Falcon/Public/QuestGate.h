#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EGateState.h"
#include "QuestGate.generated.h"

UCLASS(Abstract, Blueprintable, Deprecated, NotPlaceable)
class FALCON_API ADEPRECATED_QuestGate : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGateState GateState;
    
    ADEPRECATED_QuestGate();
    UFUNCTION(BlueprintCallable)
    void SetState(EGateState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Open();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Close();
    
};

