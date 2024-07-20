#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "QuestController.h"
#include "ButtonController.generated.h"

class AActor;
class UQuestActionsComponent;

UCLASS(Blueprintable)
class FALCON_API AButtonController : public AQuestController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DamageTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TriggersOnDamageTaken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RequiresActivateSignal;
    
    AButtonController();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Untriggerable(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Triggerable(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable)
    int32 ToggleButton();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTakeDamage(AActor* Actor, const FGameplayEventData Data);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnButtonChanged(int32 State);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnActorBeginOverlap(AActor* MyOverlappedActor, AActor* OtherActor);
    
};

