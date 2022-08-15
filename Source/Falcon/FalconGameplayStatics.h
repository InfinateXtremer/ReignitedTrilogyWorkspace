// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/GameplayStatics.h"
#include "ESkillPoint.h"
#include "InventoryType.h"
#include "Math/Color.h"
#include "Fonts/SlateFontInfo.h"
#include "PhasmidObjectSaveStruct.h"
#include "FalconGameplayStatics.generated.h"

/**
 * 
 */

UCLASS()
class FALCON_API UFalconGameplayStatics : public UGameplayStatics
{
	GENERATED_BODY()
		


	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	bool UnpauseGame(const class UObject* WorldContextObject);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	void StopTimePlayedClock(const class UObject* WorldContextObject);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	void StartTimePlayedClock(const class UObject* WorldContextObject);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	class AActor* SpawnGemWithName(const class UObject* InSpawner, const TSubclassOf<class AActor>& InClass, FString InName, const FTransform& InTransform, ESpawnActorCollisionHandlingMethod InSpawnCollisionHandlingOverride);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	bool ShouldShowBossLoadScreen(const class UObject* WorldContextObject, FString LevelPath);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	void SetSlotDifficulty(const class UObject* WorldContextObject, int32 slotIndex, int32 difficulty);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	void SetSaveSlotIndex(const class UObject* WorldContextObject, int32 Index);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	void SetSaveSlotActivated(const class UObject* WorldContextObject, int32 Index, bool Activated);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	void SetS2SuperflameUnlockForAllSlots(const class UObject* WorldContextObject, bool Unlocked);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	void SetNightmareDifficultyUnlocked(const class UObject* WorldContextObject);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	void SetGlobalFloatData(const class UObject* WorldContextObject, FString Key, float Value);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	void SetGameIndex(const class UObject* WorldContextObject, int32 Index);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	void SetCutsceneSubtitlesEnabled(const class UObject* WorldContextObject, bool subtitlesOn);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	void SetCreditsUnlocked(const class UObject* WorldContextObject);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	void SetArtGalleryUnlocked(const class UObject* WorldContextObject);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	void SetActiveSaveSlotIndex(const class UObject* WorldContextObject, int32 Index);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	void SetActiveGameIndex(const class UObject* WorldContextObject, int32 Index);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	void SetActiveCameraMode(const class UObject* WorldContextObject, bool activeModeOn);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	void SerializeSaveDataForActorByName(const class UObject* WorldContextObject, FString Name, const FPhasmidObjectSaveDataList& saveData);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	bool PauseGame(const class UObject* WorldContextObject, bool bPauseAudio);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	void objectStoreCheckpointData(const class UObject* WorldContextObject, class AActor* Actor, const FPhasmidObjectSaveDataList& objectDataList, bool delayStoringUntilCheckpoint);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	void objectSaveDataUpdated(const class UObject* WorldContextObject, class AActor* Object);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	bool IsMenuCancelKey(const FKey& Key);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	bool IsMenuActivateKey(const FKey& Key);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	bool IsDesktopBuild();
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	float GetTimePlayedForSlot(const class UObject* WorldContextObject, int32 slotIndex);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	float GetTimePlayedForGame(const class UObject* WorldContextObject);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	void GetTextSize(const class UObject* WorldContextObject, FString InText, const FSlateFontInfo& InFontInfo, FVector2D& OutSize);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	int32 GetSlotDifficulty(const class UObject* WorldContextObject, int32 slotIndex);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	bool GetShippingBuild();
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	int32 GetSaveSlotIndex(const class UObject* WorldContextObject);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	bool getSaveDataForActorByName(const class UObject* WorldContextObject, FString Name, FString Level, FPhasmidObjectSaveDataList& saveData);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	bool GetS3EggCollectedByName(const class UObject* WorldContextObject, FString eggName);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	bool GetS2SuperflameUnlockForAllSlots(const class UObject* WorldContextObject);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	bool GetPortalExitActivated(const class UObject* WorldContextObject, FString Level);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	float GetPlatformTimeInSeconds();
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	void GetNonGPLLevelInfo(const class UObject* WorldContextObject, int32& gameNum, int32& levelIndex, FString& LevelName);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	bool GetNightmareDifficultyUnlocked(const class UObject* WorldContextObject);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	void GetListOfLevelsForGame(const class UObject* WorldContextObject, int32 gameIndex, TArray<FString>& Levels);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	int32 GetLevelInventoryTotalForType(const class UObject* WorldContextObject, EInventoryType inventoryType, FString Level);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	bool GetIsSaveSlotActivated(const class UObject* WorldContextObject, int32 slotIndex);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	int32 GetInventoryRawTotalCountForLevel(const class UObject* WorldContextObject, FString Level);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	int32 GetInventoryCollectedCountForType(const class UObject* WorldContextObject, EInventoryType Type, FString Level);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	bool GetGlobalFloatData(const class UObject* WorldContextObject, FString Key, float& Value);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	void GetGameSaveDataObjectList(const class UObject* WorldContextObject, FString Level, EInventoryType Type, TArray<FPhasmidGameSaveObjectData>& objectDataList);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	int32 GetGameInventoryTotalForType(const class UObject* WorldContextObject, int32 gameIndex, EInventoryType inventoryType);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	int32 GetGameIndex(const class UObject* WorldContextObject);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	class APlayerController* GetFirstLocalPlayerController(const class UObject* WorldContextObject);
	// UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	//class UFalconGameSaveComponent* GetFalconSaveComponent(const class UObject* WorldContextObject);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	class AGameStateBase* GetFalconGameState(const class UObject* WorldContextObject);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	bool GetEggCollectedByName(const class UObject* WorldContextObject, FString eggName);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	bool GetDragonCollected(const class UObject* WorldContextObject, FString Level, FString dragonName);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	void GetDebugSaveParams(const class UObject* WorldContextObject, TArray<FPhasmidSaveParam>& saveParams);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	bool GetCutsceneSubtitlesEnabled(const class UObject* WorldContextObject);
	// UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	//void GetCurrentLevelName(const class UObject* WorldContextObject, FString& LevelName);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	bool GetCreditsUnlocked(const class UObject* WorldContextObject);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	bool GetCompletionPctForSlot(const class UObject* WorldContextObject, int32 saveSlotIndex, float& pctGame1, float& pctGame2, float& pctGame3);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	float GetCompletionPctForLevel(const class UObject* WorldContextObject, FString Level);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	float GetCompletionPctForGame(const class UObject* WorldContextObject, int32 slotIndex, int32 gameIndex);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	void GetAspectAdjustedUIPosition(FVector WorldSpacePosition, class APlayerController* PlayerController, FVector2D& OutScreenSpace);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	bool GetArtGalleryUnlocked(const class UObject* WorldContextObject);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	int32 GetActiveSaveSlotIndex(const class UObject* WorldContextObject);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	int32 GetActiveGameIndex(const class UObject* WorldContextObject);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	bool GetActiveCameraMode(const class UObject* WorldContextObject);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	void ForceUnpause(const class UObject* WorldContextObject);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	bool FindObjectSaveDataByTypeAndParamKey(const class UObject* WorldContextObject, FString Level, EInventoryType Type, FString paramName);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	class AActor* FindClosestActorWithGem(class AActor* Target, TArray<class TSubclassOf<AActor>> ActorClasses, UClass* LootClass);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	FText DurationToText(float Duration);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	void DisableWorldRendering(const class UObject* WorldContextObject, bool Disable);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	void DebugSetArtGalleryUnlocked(const class UObject* WorldContextObject);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	void ConvertColorToHexString(const FColor& inColor, FString& outString);
	 UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
	bool AwardSkillPoint(const class UObject* WorldContextObject, ESkillPoint pt);

};

