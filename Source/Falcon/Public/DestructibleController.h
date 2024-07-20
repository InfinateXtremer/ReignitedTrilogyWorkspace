#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "QuestController.h"
#include "DestructibleController.generated.h"

class AActor;

UCLASS(Blueprintable)
class FALCON_API ADestructibleController : public AQuestController {
    GENERATED_BODY()
public:
    ADestructibleController();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTakeDamage(AActor* Actor, const FGameplayEventData Data);
    
};

