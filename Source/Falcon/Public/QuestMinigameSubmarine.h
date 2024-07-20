#pragma once
#include "CoreMinimal.h"
#include "EFalconAreaExitTitle.h"
#include "EFalconHudWidgetPosition.h"
#include "QuestController.h"
#include "Templates/SubclassOf.h"
#include "QuestMinigameSubmarine.generated.h"

class AActor;
class ALevelSequenceActor;
class ATriggerVolume;
class UHudCounterComponent;
class UQuestActionsComponent;

UCLASS(Blueprintable)
class FALCON_API AQuestMinigameSubmarine : public AQuestController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> SubmarineClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* StartPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATriggerVolume* ExitVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ExitOnCompletion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LetQuestFadeIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> EnemyClass;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> Part1SpawnPoints;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> Part2SpawnPoints;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ALevelSequenceActor> MovieSequence;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> SubmarineStandIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IconName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHudCounterComponent> ScoreUIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFalconHudWidgetPosition ScoreUIPosition;
    
    AQuestMinigameSubmarine();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartPart2(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartPart1(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartFree(UQuestActionsComponent* Actions);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSequenceStopped();
    
    UFUNCTION(BlueprintCallable)
    void onQuestAreaExitRequested(EFalconAreaExitTitle Title);
    
    UFUNCTION(BlueprintCallable)
    void OnActorBeginOverlapExitVolume(AActor* OverlappedActor, AActor* OtherActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Idle(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Completed(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_InitializeEnemy(int32 Index, AActor* Enemy, AActor* SpawnPoint);
    
};

