#pragma once
#include "CoreMinimal.h"
#include "PhasmidObjectSaveComponent.h"
#include "PhasmidObjectSaveDataList.h"
#include "EFlightLevelTargetType.h"
#include "FlightObjective.h"
#include "FlightLevelDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FALCON_API UFlightLevelDataComponent : public UPhasmidObjectSaveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFlightObjective> objectiveConfig;
    
    UFlightLevelDataComponent();
    UFUNCTION(BlueprintCallable)
    void SetTargetCollected(const EFlightLevelTargetType targetType);
    
    UFUNCTION(BlueprintCallable)
    void SetBestTime(float bestTime);
    
    UFUNCTION(BlueprintCallable)
    void SetBestRaceTime(float bestRaceTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTargetCollected(const EFlightLevelTargetType targetType) const;
    
    UFUNCTION(BlueprintCallable)
    static bool GetBestTimeFromSaveData(const FPhasmidObjectSaveDataList& saveData, float& aBestTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBestTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBestRaceTime() const;
    
};

