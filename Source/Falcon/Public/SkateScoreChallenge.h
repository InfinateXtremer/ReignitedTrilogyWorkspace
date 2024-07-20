#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPCMSkateEventType.h"
#include "ChallengeController.h"
#include "EFalconAreaExitTitle.h"
#include "Templates/SubclassOf.h"
#include "SkateScoreChallenge.generated.h"

class ALevelSequenceActor;
class UDataTable;
class UQuestActionsComponent;
class USkateScoreWidget;
class UTrickWidget;

UCLASS(Blueprintable, Placeable)
class FALCON_API ASkateScoreChallenge : public AChallengeController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* OppSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTrickWidget> TrickUIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USkateScoreWidget> HighScoreUIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SkateTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PendingColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor LandingColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FailureColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PointsPerSecond;
    
    ASkateScoreChallenge();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartVert();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartLaunch();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowHighScore(UQuestActionsComponent* Actions);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RxSkateEvent(EPCMSkateEventType evtType, FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScoreStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScoreEnd();
    
    UFUNCTION(BlueprintCallable)
    void onQuestAreaExitRequested(EFalconAreaExitTitle Title);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HalfPipeLeap();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndLand();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddSpinR();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddSpinL();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddSpinF();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddSpinB();
    
    UFUNCTION(BlueprintCallable)
    void AddPlayer_LS312_TripleTower();
    
    UFUNCTION(BlueprintCallable)
    void AddPlayer_LS312_HalfPipeLeap();
    
};

