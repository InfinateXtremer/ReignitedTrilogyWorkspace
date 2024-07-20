#pragma once
#include "CoreMinimal.h"
#include "MobileDenizenController.h"
#include "SparxEnemyController.generated.h"

class UQuestActionsComponent;

UCLASS(Blueprintable)
class FALCON_API ASparxEnemyController : public AMobileDenizenController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefeatDelay;
    
    ASparxEnemyController();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Defeated(UQuestActionsComponent* Actions);
    
};

