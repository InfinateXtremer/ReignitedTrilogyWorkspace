#pragma once
#include "CoreMinimal.h"
#include "QuestController.h"
#include "RailShooterController.generated.h"

class ACharacter;
class UQuestActionsComponent;

UCLASS(Blueprintable)
class FALCON_API ARailShooterController : public AQuestController {
    GENERATED_BODY()
public:
    ARailShooterController();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Victory(UQuestActionsComponent* Actions);
    
protected:
    UFUNCTION(BlueprintCallable)
    void onGameStarted();
    
    UFUNCTION(BlueprintCallable)
    void onFriendlyDied(ACharacter* which);
    
    UFUNCTION(BlueprintCallable)
    void onAllEnemiesDead();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Idle(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Defeated(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Active(UQuestActionsComponent* Actions);
    
};

