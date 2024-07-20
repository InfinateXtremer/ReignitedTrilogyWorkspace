#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "PhasmidGameSaveObjectDataMap.h"
#include "PhasmidObjectSaveDataList.h"
#include "PhasmidObjectSaveInterface.h"
#include "EFalconGameState.h"
#include "QuestLevelManager.generated.h"

class AActor;
class AQuestLevelActor;
class UPlayerTeleportTask;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API UQuestLevelManager : public UActorComponent//, public IPhasmidObjectSaveInterface 
{
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_forceCheckpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerTeleportTask* m_customTeleport;
    
public:
    UQuestLevelManager();
protected:
    UFUNCTION(BlueprintCallable)
    void OnUndeservedEggsChange(int32 extraEggs);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStoreSaveData(int32 slotIndex, int32 gameIndex, const FString& saveObjectName, const FString& Level, const FPhasmidObjectSaveDataList& saveDataList, const FPhasmidObjectSaveDataList& prevDataList, const FPhasmidGameSaveObjectDataMap& saveObjectDataMap);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerReady();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerDied(AActor* Actor, const FGameplayEventData Payload);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGameStateChanged(EFalconGameState PrevState, EFalconGameState NextState);
    
protected:
    UFUNCTION(BlueprintCallable)
    AQuestLevelActor* GetQuestLevelByName(const FString& Level);
    
    UFUNCTION(BlueprintCallable)
    AQuestLevelActor* GetActiveQuestLevel();
    
    
    // Fix for true pure virtual functions not being implemented
};

