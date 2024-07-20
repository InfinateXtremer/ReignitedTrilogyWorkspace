#pragma once
#include "CoreMinimal.h"
#include "QuestController.h"
#include "SocketController.generated.h"

class AActor;
class USP3_CarrySocketComponent;

UCLASS(Blueprintable)
class FALCON_API ASocketController : public AQuestController {
    GENERATED_BODY()
public:
    ASocketController();
protected:
    UFUNCTION(BlueprintCallable)
    void OnHandleAttached(USP3_CarrySocketComponent* socket, AActor* carryObj);
    
};

