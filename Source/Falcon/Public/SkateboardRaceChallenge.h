#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EPCMSkateEventType.h"
#include "EFalconAreaExitTitle.h"
#include "ESkateBoardRaceType.h"
#include "ESkillPoint.h"
#include "QuestController.h"
#include "Templates/SubclassOf.h"
#include "SkateboardRaceChallenge.generated.h"

class AActor;
class APhasmidPatrolPath;
class ATriggerBase;
class UDataTable;
class UPrimitiveComponent;
class UQuestActionsComponent;
class USkateScoreWidget;

UCLASS(Blueprintable)
class FALCON_API ASkateboardRaceChallenge : public AQuestController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Opponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATriggerBase*> Checkpoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumLaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APhasmidPatrolPath* RacePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SkateTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkateBoardRaceType CurRaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRaceTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkillPoint ChallengeSkillPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChallengeBestTimeMS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USkateScoreWidget> CourseRecordUIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BestTimeMSKey;
    
    ASkateboardRaceChallenge();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartRaceTimed(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartRaceRhynocs(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartRaceCrabs(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRaceUpdate(int32 curLap, float curTime, int32 curPlace, float curTurboPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRaceStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRaceEnd();
    
protected:
    UFUNCTION(BlueprintCallable)
    void onQuestAreaExitRequested(EFalconAreaExitTitle Title);
    
    UFUNCTION(BlueprintCallable)
    void OnCloseHighScoreMenu(FName ignore);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAreaLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Idle(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Completed(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable)
    void ClearTrickInput();
    
private:
    UFUNCTION(BlueprintCallable)
    void CheckpointOverlapBegin(UPrimitiveComponent* MyComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CBSkateEvent(EPCMSkateEventType evtType, FName Name);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CalcPlayerRaceInfo(int32& retPlacement, int32& retCurLap, int32& retCurCheckPt, float& retCurRaceDist) const;
    
    UFUNCTION(BlueprintCallable)
    void AllCrabsKilled();
    
};

