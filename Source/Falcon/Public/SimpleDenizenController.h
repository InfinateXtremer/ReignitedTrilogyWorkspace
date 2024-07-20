#pragma once
#include "CoreMinimal.h"
#include "DialogText.h"
#include "Greeting.h"
#include "QuestController.h"
#include "Templates/SubclassOf.h"
#include "SimpleDenizenController.generated.h"

class APressToTalkWidget;
class UMontageTask;
class UQuestActionsComponent;

UCLASS(Abstract, Blueprintable)
class FALCON_API ASimpleDenizenController : public AQuestController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APressToTalkWidget> PressToTalk;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMontageTask* m_ambientMontage;
    
public:
    ASimpleDenizenController();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ZapPlayer(const FName& Checkpoint, UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable)
    bool SyncFalconStates(FName QuestState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SayToPlayer(const FDialogText& Text, UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OutOfWorld(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Idle(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Hidden(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GreetPlayer(const FGreeting& G, UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangeState(const FName& State, UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Captured(UQuestActionsComponent* Actions);
    
};

