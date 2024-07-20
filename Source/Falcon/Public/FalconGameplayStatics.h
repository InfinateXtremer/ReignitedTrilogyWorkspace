#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "InputCoreTypes.h"
#include "EInventoryType.h"
#include "PhasmidGameSaveObjectData.h"
#include "PhasmidObjectSaveDataList.h"
#include "PhasmidSaveParam.h"
#include "Fonts/SlateFontInfo.h"
#include "ESkillPoint.h"
#include "Templates/SubclassOf.h"
#include "FalconGameplayStatics.generated.h"

class AActor;
class AGameStateBase;
class APlayerController;
class UFalconGameSaveComponent;
class UObject;

UCLASS(Blueprintable)
class FALCON_API UFalconGameplayStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFalconGameplayStatics();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool UnpauseGame(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StopTimePlayedClock(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartTimePlayedClock(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static AActor* SpawnGemWithName(const UObject* InSpawner, const TSubclassOf<AActor>& InClass, const FString& InName, const FTransform& InTransform, ESpawnActorCollisionHandlingMethod InSpawnCollisionHandlingOverride);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ShouldShowBossLoadScreen(const UObject* WorldContextObject, const FString& LevelPath);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSlotDifficulty(const UObject* WorldContextObject, int32 slotIndex, int32 difficulty);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveSlotIndex(const UObject* WorldContextObject, int32 Index);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSaveSlotActivated(const UObject* WorldContextObject, int32 Index, bool Activated);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetS2SuperflameUnlockForAllSlots(const UObject* WorldContextObject, bool Unlocked);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetNightmareDifficultyUnlocked(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetGlobalFloatData(const UObject* WorldContextObject, const FString& Key, float Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetGameIndex(const UObject* WorldContextObject, int32 Index);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCutsceneSubtitlesEnabled(const UObject* WorldContextObject, bool subtitlesOn);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCreditsUnlocked(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetArtGalleryUnlocked(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetActiveSaveSlotIndex(const UObject* WorldContextObject, int32 Index);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetActiveGameIndex(const UObject* WorldContextObject, int32 Index);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetActiveCameraMode(const UObject* WorldContextObject, bool activeModeOn);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SerializeSaveDataForActorByName(const UObject* WorldContextObject, const FString& Name, const FPhasmidObjectSaveDataList& saveData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool PauseGame(const UObject* WorldContextObject, bool bPauseAudio);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void objectStoreCheckpointData(const UObject* WorldContextObject, AActor* Actor, const FPhasmidObjectSaveDataList& objectDataList, bool delayStoringUntilCheckpoint);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void objectSaveDataUpdated(const UObject* WorldContextObject, AActor* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMenuCancelKey(const FKey& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMenuActivateKey(const FKey& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDesktopBuild();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetTimePlayedForSlot(const UObject* WorldContextObject, int32 slotIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetTimePlayedForGame(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetTextSize(const UObject* WorldContextObject, const FString& InText, const FSlateFontInfo& InFontInfo, FVector2D& OutSize);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetSlotDifficulty(const UObject* WorldContextObject, int32 slotIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool GetShippingBuild();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetSaveSlotIndex(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool getSaveDataForActorByName(const UObject* WorldContextObject, const FString& Name, const FString& Level, FPhasmidObjectSaveDataList& saveData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetS3EggCollectedByName(const UObject* WorldContextObject, const FString& eggName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetS2SuperflameUnlockForAllSlots(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetPortalExitActivated(const UObject* WorldContextObject, const FString& Level);
    
    UFUNCTION(BlueprintCallable)
    static float GetPlatformTimeInSeconds();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetNonGPLLevelInfo(const UObject* WorldContextObject, int32& gameNum, int32& levelIndex, FString& LevelName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetNightmareDifficultyUnlocked(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetListOfLevelsForGame(const UObject* WorldContextObject, int32 gameIndex, TArray<FString>& Levels);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetLevelInventoryTotalForType(const UObject* WorldContextObject, EInventoryType inventoryType, const FString& Level);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetIsSaveSlotActivated(const UObject* WorldContextObject, int32 slotIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetInventoryRawTotalCountForLevel(const UObject* WorldContextObject, const FString& Level);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetInventoryCollectedCountForType(const UObject* WorldContextObject, EInventoryType Type, const FString& Level);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetGlobalFloatData(const UObject* WorldContextObject, const FString& Key, float& Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetGameSaveDataObjectList(const UObject* WorldContextObject, const FString& Level, EInventoryType Type, TArray<FPhasmidGameSaveObjectData>& objectDataList);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetGameInventoryTotalForType(const UObject* WorldContextObject, int32 gameIndex, EInventoryType inventoryType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetGameIndex(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APlayerController* GetFirstLocalPlayerController(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFalconGameSaveComponent* GetFalconSaveComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AGameStateBase* GetFalconGameState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetEggCollectedByName(const UObject* WorldContextObject, const FString& eggName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetDragonCollected(const UObject* WorldContextObject, const FString& Level, const FString& dragonName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetDebugSaveParams(const UObject* WorldContextObject, TArray<FPhasmidSaveParam>& saveParams);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetCutsceneSubtitlesEnabled(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetCurrentLevelName(const UObject* WorldContextObject, FString& LevelName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetCreditsUnlocked(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetCompletionPctForSlot(const UObject* WorldContextObject, int32 saveSlotIndex, float& pctGame1, float& pctGame2, float& pctGame3);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetCompletionPctForLevel(const UObject* WorldContextObject, const FString& Level);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetCompletionPctForGame(const UObject* WorldContextObject, int32 slotIndex, int32 gameIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAspectAdjustedUIPosition(FVector WorldSpacePosition, APlayerController* PlayerController, FVector2D& OutScreenSpace);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetArtGalleryUnlocked(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetActiveSaveSlotIndex(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetActiveGameIndex(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetActiveCameraMode(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ForceUnpause(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool FindObjectSaveDataByTypeAndParamKey(const UObject* WorldContextObject, const FString& Level, EInventoryType Type, const FString& paramName);
    
    UFUNCTION(BlueprintCallable)
    static AActor* FindClosestActorWithGem(AActor* Target, TArray<TSubclassOf<AActor>> ActorClasses, UClass* LootClass);
    
    UFUNCTION(BlueprintCallable)
    static FText DurationToText(float Duration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DisableWorldRendering(const UObject* WorldContextObject, bool Disable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DebugSetArtGalleryUnlocked(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ConvertColorToHexString(const FColor& inColor, FString& outString);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool AwardSkillPoint(const UObject* WorldContextObject, ESkillPoint pt);
    
};

