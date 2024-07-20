#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DialogText.h"
#include "Greeting.h"
#include "QuestPrototype.generated.h"

class UQuestActionsComponent;

UINTERFACE(Blueprintable)
class FALCON_API UQuestPrototype : public UInterface {
    GENERATED_BODY()
};

class FALCON_API IQuestPrototype : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ZapPlayer(const FName& Checkpoint, UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartChallengeTimer(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPosition(const FName& where, const FName& moveMode, UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SayToPlayer(const FDialogText& Text, UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MoveTo(const FName& where, UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GreetPlayer(const FGreeting& Greeting, UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GiveInventory(const FName& Item, UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GiveEgg(const FName& egg, UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GiveAchievement(const uint8& Number, UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOut(float Duration, UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeIn(float Duration, UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeState(const FName& State, UQuestActionsComponent* Actions);
    
};

