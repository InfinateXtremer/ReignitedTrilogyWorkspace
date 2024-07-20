#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ETfbJumpingAnimationState.h"
#include "TfbAnimationInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UTfbAnimationInterface : public UInterface {
    GENERATED_BODY()
};

class ITfbAnimationInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTalkingAnimationState(bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetJumpAnimationState(ETfbJumpingAnimationState State);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetIsDeadAnimationState(bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetIdleStartOffset(float OffsetPercent);
    
};

