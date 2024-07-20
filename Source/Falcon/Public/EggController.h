#pragma once
#include "CoreMinimal.h"
#include "Greeting.h"
#include "QuestController.h"
#include "EggController.generated.h"

class UQuestActionsComponent;

UCLASS(Abstract, Blueprintable)
class FALCON_API AEggController : public AQuestController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SkipZap;
    
    AEggController();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ZapPlayer(const FName& Checkpoint, UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPosition(const FName& where, const FName& moveMode, UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Revealed(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OutOfWorld(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Hidden(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GreetPlayer(const FGreeting& Greeting, UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GiveEgg(const FName& egg, UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EggUI(const FString& Name, bool alreadyCollected);
    
};

