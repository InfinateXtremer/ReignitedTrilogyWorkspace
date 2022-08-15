

#pragma once

#include "CoreMinimal.h"
#include "TrackedStatRecord.h"
#include "Presence.h"
#include "PhasmidObjectSaveStruct.h"
#include "Components/ActorComponent.h"
#include "AchievementComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FALCON_API UAchievementComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAchievementComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString achievementPrefix;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FTrackedStatRecord> trackedStats;

	UFUNCTION(BlueprintCallable)
	void SetPresence(EPresence presence);
	UFUNCTION(BlueprintCallable)
	void SetAchievementCompletion(EAchievement achievement, float completionAmount);
	UFUNCTION(BlueprintCallable)
	void OnStoreSaveData(int32 slotIndex, int32 gameIndex, FString saveObjectName, FString Level, const FPhasmidObjectSaveDataList& saveDataList, const FPhasmidObjectSaveDataList& prevDataList, const FPhasmidGameSaveObjectDataMap& saveObjectDataMap);
	UFUNCTION(BlueprintCallable)
	void OnSetCurrentUser();
	UFUNCTION(BlueprintCallable)
	void OnChangeSaveGame(class UFalconSaveGame* incomingSaveGame);
	UFUNCTION(BlueprintCallable)
	EPresence GetPresence();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
