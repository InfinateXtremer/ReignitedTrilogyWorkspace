#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EFalconGameState.h"
#include "EFalconHudWidgetPosition.h"
#include "QuestController.h"
#include "Templates/SubclassOf.h"
#include "QuestMinigameMantaRayBattle.generated.h"

class AActor;
class APawn;
class UHudCounterComponent;
class UQuestActionsComponent;

UCLASS(Blueprintable)
class FALCON_API AQuestMinigameMantaRayBattle : public AQuestController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APawn> EnemyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> SeaweedClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> MantaRayClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> MantaRayIdleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> EnemySpawnPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AActor>> SeaweedSpawnPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> ExitTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> StartRideTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> EndGamePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IconName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHudCounterComponent> ScoreUIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFalconHudWidgetPosition ScoreUIPosition;
    
    AQuestMinigameMantaRayBattle();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Ticking(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable)
    void OnGameStateChanged(EFalconGameState PrevState, EFalconGameState NextState);
    
    UFUNCTION(BlueprintCallable)
    void OnExitTriggerHit(AActor* HitActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void KnockedOffManta();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void IdleFreeSwim(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Idle(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetMantaRay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FreeSwim(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Completed(UQuestActionsComponent* Actions);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StartRideMantaRay(AActor* mantaRay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_InitializeIdleMantaRayIdle(AActor* Pawn, AActor* SpawnPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_InitializeEnemy(int32 Index, APawn* Pawn, AActor* SpawnPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_GrantSeaweedSkillpoint();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_EndRideMantaRay(AActor* mantaRay);
    
};

