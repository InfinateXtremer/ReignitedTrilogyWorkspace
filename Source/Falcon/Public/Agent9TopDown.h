#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Agent9TopDownRoom.h"
#include "EFalconHudWidgetPosition.h"
#include "QuestController.h"
#include "Templates/SubclassOf.h"
#include "Agent9TopDown.generated.h"

class AActor;
class APlayerController;
class ATargetPoint;
class ATriggerBase;
class UHudCounterComponent;
class UPrimitiveComponent;
class UQuestActionsComponent;

UCLASS(Blueprintable)
class FALCON_API AAgent9TopDown : public AQuestController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* EntryGate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATriggerBase* ExitTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAgent9TopDownRoom> Rooms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IconName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHudCounterComponent> ScoreUIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFalconHudWidgetPosition ScoreUIPosition;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_currentRoomEnemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_optionalEnemies;
    
public:
    AAgent9TopDown();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Ticking(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable)
    void SpawnerReady(AActor* spawner);
    
private:
    UFUNCTION(BlueprintCallable)
    void RegisterRoomTriggerOverlapBegin();
    
    UFUNCTION(BlueprintCallable)
    void RegisterExitTriggerOverlapBegin();
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayerFinishedWalking();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWalkPlayer(APlayerController* plyrCtrl, ATargetPoint* TargetPoint);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRoomTriggerOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpenGate(AActor* gate);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnExitTriggerOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCloseGate(AActor* gate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCleanup();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Idle(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable)
    void ForgetEnemy(AActor* Enemy);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Completed(UQuestActionsComponent* Actions);
    
};

