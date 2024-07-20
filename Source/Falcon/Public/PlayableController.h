#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "EPCMSkateEventType.h"
#include "QuestController.h"
#include "PlayableController.generated.h"

class AActor;
class ACharacter;
class APhasmidPlayerController;
class UQuestActionsComponent;

UCLASS(Abstract, Blueprintable, NotPlaceable)
class FALCON_API APlayableController : public AQuestController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDamageSignals;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APhasmidPlayerController* m_pc;
    
public:
    APlayableController();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ZapPlayer(const FName& Checkpoint, UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPosition(const FName& where, const FName& moveMode, UQuestActionsComponent* Actions);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTakeDamage(AActor* sender, const FGameplayEventData Payload);
    
    UFUNCTION(BlueprintCallable)
    void onSkateEvent(EPCMSkateEventType evtType, FName Name);
    
    UFUNCTION(BlueprintCallable)
    void OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    
    UFUNCTION(BlueprintCallable)
    void OnDeath(AActor* sender, const FGameplayEventData Payload);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MoveTo(const FName& where, UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FadeOut(float Duration, UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FadeIn(float Duration, UQuestActionsComponent* Actions);
    
};

