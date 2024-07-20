#pragma once
#include "CoreMinimal.h"
#include "EFalconHudWidgetPosition.h"
#include "QuestController.h"
#include "Templates/SubclassOf.h"
#include "BattleTankMinigame.generated.h"

class AActor;
class UHudCounterComponent;
class UQuestActionsComponent;

UCLASS(Blueprintable)
class FALCON_API ABattleTankMinigame : public AQuestController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> EnemyClass;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> Part1SpawnPoints;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> Part2SpawnPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> PlayerStartTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> PlayerEndTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IconName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHudCounterComponent> ScoreUIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFalconHudWidgetPosition ScoreUIPosition;
    
    ABattleTankMinigame();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Ticking(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartPart2(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartPart1(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartFree(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Idle(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Completed(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_VictoryPhase1();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StartDriveTank();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStartFree();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPhase2Start();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_EndDriveTank();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CleanupBattleTank();
    
};

