#pragma once
#include "CoreMinimal.h"
#include "GameFramework/ForceFeedbackEffect.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EInputSource -FallbackName=EInputSource
#include "PhasmidPlayerController.h"
#include "SpyroPlayerController.generated.h"

class UFalconCharacterInputComponent;
class UForceFeedbackEffect;

UCLASS(Blueprintable)
class FALCON_API ASpyroPlayerController : public APhasmidPlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFalconCharacterInputComponent* CurrentCharacterInputComponentRef;
    
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FActiveForceFeedbackEffect> ImmediateForceFeedbackEvents;
    
public:
    ASpyroPlayerController();
    UFUNCTION(BlueprintCallable)
    void SetUnderDesignerControl(bool bValue, bool bClearStack);
    
    //UFUNCTION(BlueprintCallable, BlueprintPure)
    //bool IsPointToTreasureKeyPressed(EInputSource RestrictToType) const;
    
    //UFUNCTION(BlueprintCallable, BlueprintPure)
    //bool IsLeftTriggerKeyPressed(EInputSource RestrictToType) const;
    //
    //UFUNCTION(BlueprintCallable, BlueprintPure)
    //bool IsChargeKeyPressed(EInputSource RestrictToType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IncreaseMaxHealth();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUnderDesignerControl() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSkipButtonMask() const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStopForceFeedbackImmediate(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientPlayForceFeedbackImmediate(UForceFeedbackEffect* ForceFeedbackEffect, bool bIgnoreTimeDilation, FName Tag);
    
};

