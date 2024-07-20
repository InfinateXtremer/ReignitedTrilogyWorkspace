#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SequenceTask.h"
#include "WhaleTasks.generated.h"

class ACharacter;
class APlayerController;
class USceneComponent;

UCLASS(Blueprintable)
class UWhaleTasks : public USequenceTask {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* m_whale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* m_pc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* m_dest;
    
public:
    UWhaleTasks();
protected:
    //UFUNCTION(BlueprintCallable)
    //void OnMontageNotify(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointPayload);
    
};

