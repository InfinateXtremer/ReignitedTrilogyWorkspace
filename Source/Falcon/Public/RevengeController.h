#pragma once
#include "CoreMinimal.h"
#include "RevengeGemSets.h"
#include "ThiefController.h"
#include "RevengeController.generated.h"

class UQuestActionsComponent;

UCLASS(Abstract, Blueprintable)
class FALCON_API ARevengeController : public AThiefController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRevengeGemSets RevengeGems;
    
    ARevengeController();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Exhausted(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable)
    void Damaged();
    
};

