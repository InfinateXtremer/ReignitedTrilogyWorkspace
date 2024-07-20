#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "GameplayTaskJumpWithConfirmDelegate.h"
#include "PhasmidTask_JumpWithConfirm.generated.h"

class ACharacter;
class IGameplayTaskOwnerInterface;
class UGameplayTaskOwnerInterface;
class UPhasmidTask_JumpWithConfirm;

UCLASS(Blueprintable, MinimalAPI)
class UPhasmidTask_JumpWithConfirm : public UGameplayTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTaskJumpWithConfirm Success;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTaskJumpWithConfirm Fail;
    

    UFUNCTION(BlueprintCallable)
    static UPhasmidTask_JumpWithConfirm* JumpWithConfirm(TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, ACharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void JumpConfirmCallback(ACharacter* Character, bool bSuccess);
    
};

