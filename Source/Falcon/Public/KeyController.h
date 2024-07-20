#pragma once
#include "CoreMinimal.h"
#include "QuestController.h"
#include "KeyController.generated.h"

class AActor;
class UMaterialInterface;
class UQuestActionsComponent;

UCLASS(Blueprintable)
class FALCON_API AKeyController : public AQuestController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialOverride;
    
    AKeyController();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ZapPlayer(const FName& Checkpoint, UQuestActionsComponent* Actions);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RxPickup(AActor* Pickup, AActor* receiver, FName Type);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OutOfWorld(UQuestActionsComponent* Actions);
    
};

