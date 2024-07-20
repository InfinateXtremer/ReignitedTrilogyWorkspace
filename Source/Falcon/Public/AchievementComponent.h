#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PhasmidGameSaveObjectDataMap.h"
#include "PhasmidObjectSaveDataList.h"
#include "EAchievement.h"
#include "EPresence.h"
#include "TrackedStatRecord.h"
#include "AchievementComponent.generated.h"

class UFalconSaveGame;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API UAchievementComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString achievementPrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTrackedStatRecord> trackedStats;
    
    UAchievementComponent();
    UFUNCTION(BlueprintCallable)
    void SetPresence(EPresence presence);
    
    UFUNCTION(BlueprintCallable)
    void SetAchievementCompletion(EAchievement achievement, float completionAmount);
    
    UFUNCTION(BlueprintCallable)
    void OnStoreSaveData(int32 slotIndex, int32 gameIndex, const FString& saveObjectName, const FString& Level, const FPhasmidObjectSaveDataList& saveDataList, const FPhasmidObjectSaveDataList& prevDataList, const FPhasmidGameSaveObjectDataMap& saveObjectDataMap);
    
    UFUNCTION(BlueprintCallable)
    void OnSetCurrentUser();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeSaveGame(UFalconSaveGame* incomingSaveGame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPresence GetPresence() const;
    
};

