#pragma once
#include "CoreMinimal.h"
#include "DialogText.h"
#include "Greeting.h"
#include "PropController.h"
#include "Templates/SubclassOf.h"
#include "SignpostController.generated.h"

class APressToTalkWidget;
class UQuestActionsComponent;

UCLASS(Abstract, Blueprintable, NotPlaceable)
class FALCON_API ASignpostController : public APropController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APressToTalkWidget> PressToTalk;
    
    ASignpostController();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SayToPlayer(const FDialogText& Text, UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Legible(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Illegible(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GreetPlayer(const FGreeting& Greeting, UQuestActionsComponent* Actions);
    
};

