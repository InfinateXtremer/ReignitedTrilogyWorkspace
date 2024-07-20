#include "FalconGameplayStatics.h"
#include "Templates/SubclassOf.h"

class AActor;
class AGameStateBase;
class APlayerController;
class UFalconGameSaveComponent;
class UObject;

bool UFalconGameplayStatics::UnpauseGame(const UObject* WorldContextObject) {
    return false;
}

void UFalconGameplayStatics::StopTimePlayedClock(const UObject* WorldContextObject) {
}

void UFalconGameplayStatics::StartTimePlayedClock(const UObject* WorldContextObject) {
}

AActor* UFalconGameplayStatics::SpawnGemWithName(const UObject* InSpawner, const TSubclassOf<AActor>& InClass, const FString& InName, const FTransform& InTransform, ESpawnActorCollisionHandlingMethod InSpawnCollisionHandlingOverride) {
    return NULL;
}

bool UFalconGameplayStatics::ShouldShowBossLoadScreen(const UObject* WorldContextObject, const FString& LevelPath) {
    return false;
}

void UFalconGameplayStatics::SetSlotDifficulty(const UObject* WorldContextObject, int32 slotIndex, int32 difficulty) {
}

void UFalconGameplayStatics::SetSaveSlotIndex(const UObject* WorldContextObject, int32 Index) {
}

void UFalconGameplayStatics::SetSaveSlotActivated(const UObject* WorldContextObject, int32 Index, bool Activated) {
}

void UFalconGameplayStatics::SetS2SuperflameUnlockForAllSlots(const UObject* WorldContextObject, bool Unlocked) {
}

void UFalconGameplayStatics::SetNightmareDifficultyUnlocked(const UObject* WorldContextObject) {
}

void UFalconGameplayStatics::SetGlobalFloatData(const UObject* WorldContextObject, const FString& Key, float Value) {
}

void UFalconGameplayStatics::SetGameIndex(const UObject* WorldContextObject, int32 Index) {
}

void UFalconGameplayStatics::SetCutsceneSubtitlesEnabled(const UObject* WorldContextObject, bool subtitlesOn) {
}

void UFalconGameplayStatics::SetCreditsUnlocked(const UObject* WorldContextObject) {
}

void UFalconGameplayStatics::SetArtGalleryUnlocked(const UObject* WorldContextObject) {
}

void UFalconGameplayStatics::SetActiveSaveSlotIndex(const UObject* WorldContextObject, int32 Index) {
}

void UFalconGameplayStatics::SetActiveGameIndex(const UObject* WorldContextObject, int32 Index) {
}

void UFalconGameplayStatics::SetActiveCameraMode(const UObject* WorldContextObject, bool activeModeOn) {
}

void UFalconGameplayStatics::SerializeSaveDataForActorByName(const UObject* WorldContextObject, const FString& Name, const FPhasmidObjectSaveDataList& saveData) {
}

bool UFalconGameplayStatics::PauseGame(const UObject* WorldContextObject, bool bPauseAudio) {
    return false;
}

void UFalconGameplayStatics::objectStoreCheckpointData(const UObject* WorldContextObject, AActor* Actor, const FPhasmidObjectSaveDataList& objectDataList, bool delayStoringUntilCheckpoint) {
}

void UFalconGameplayStatics::objectSaveDataUpdated(const UObject* WorldContextObject, AActor* Object) {
}

bool UFalconGameplayStatics::IsMenuCancelKey(const FKey& Key) {
    return false;
}

bool UFalconGameplayStatics::IsMenuActivateKey(const FKey& Key) {
    return false;
}

bool UFalconGameplayStatics::IsDesktopBuild() {
    return false;
}

float UFalconGameplayStatics::GetTimePlayedForSlot(const UObject* WorldContextObject, int32 slotIndex) {
    return 0.0f;
}

float UFalconGameplayStatics::GetTimePlayedForGame(const UObject* WorldContextObject) {
    return 0.0f;
}

void UFalconGameplayStatics::GetTextSize(const UObject* WorldContextObject, const FString& InText, const FSlateFontInfo& InFontInfo, FVector2D& OutSize) {
}

int32 UFalconGameplayStatics::GetSlotDifficulty(const UObject* WorldContextObject, int32 slotIndex) {
    return 0;
}

bool UFalconGameplayStatics::GetShippingBuild() {
    return false;
}

int32 UFalconGameplayStatics::GetSaveSlotIndex(const UObject* WorldContextObject) {
    return 0;
}

bool UFalconGameplayStatics::getSaveDataForActorByName(const UObject* WorldContextObject, const FString& Name, const FString& Level, FPhasmidObjectSaveDataList& saveData) {
    return false;
}

bool UFalconGameplayStatics::GetS3EggCollectedByName(const UObject* WorldContextObject, const FString& eggName) {
    return false;
}

bool UFalconGameplayStatics::GetS2SuperflameUnlockForAllSlots(const UObject* WorldContextObject) {
    return false;
}

bool UFalconGameplayStatics::GetPortalExitActivated(const UObject* WorldContextObject, const FString& Level) {
    return false;
}

float UFalconGameplayStatics::GetPlatformTimeInSeconds() {
    return 0.0f;
}

void UFalconGameplayStatics::GetNonGPLLevelInfo(const UObject* WorldContextObject, int32& gameNum, int32& levelIndex, FString& LevelName) {
}

bool UFalconGameplayStatics::GetNightmareDifficultyUnlocked(const UObject* WorldContextObject) {
    return false;
}

void UFalconGameplayStatics::GetListOfLevelsForGame(const UObject* WorldContextObject, int32 gameIndex, TArray<FString>& Levels) {
}

int32 UFalconGameplayStatics::GetLevelInventoryTotalForType(const UObject* WorldContextObject, EInventoryType inventoryType, const FString& Level) {
    return 0;
}

bool UFalconGameplayStatics::GetIsSaveSlotActivated(const UObject* WorldContextObject, int32 slotIndex) {
    return false;
}

int32 UFalconGameplayStatics::GetInventoryRawTotalCountForLevel(const UObject* WorldContextObject, const FString& Level) {
    return 0;
}

int32 UFalconGameplayStatics::GetInventoryCollectedCountForType(const UObject* WorldContextObject, EInventoryType Type, const FString& Level) {
    return 0;
}

bool UFalconGameplayStatics::GetGlobalFloatData(const UObject* WorldContextObject, const FString& Key, float& Value) {
    return false;
}

void UFalconGameplayStatics::GetGameSaveDataObjectList(const UObject* WorldContextObject, const FString& Level, EInventoryType Type, TArray<FPhasmidGameSaveObjectData>& objectDataList) {
}

int32 UFalconGameplayStatics::GetGameInventoryTotalForType(const UObject* WorldContextObject, int32 gameIndex, EInventoryType inventoryType) {
    return 0;
}

int32 UFalconGameplayStatics::GetGameIndex(const UObject* WorldContextObject) {
    return 0;
}

APlayerController* UFalconGameplayStatics::GetFirstLocalPlayerController(const UObject* WorldContextObject) {
    return NULL;
}

UFalconGameSaveComponent* UFalconGameplayStatics::GetFalconSaveComponent(const UObject* WorldContextObject) {
    return NULL;
}

AGameStateBase* UFalconGameplayStatics::GetFalconGameState(const UObject* WorldContextObject) {
    return NULL;
}

bool UFalconGameplayStatics::GetEggCollectedByName(const UObject* WorldContextObject, const FString& eggName) {
    return false;
}

bool UFalconGameplayStatics::GetDragonCollected(const UObject* WorldContextObject, const FString& Level, const FString& dragonName) {
    return false;
}

void UFalconGameplayStatics::GetDebugSaveParams(const UObject* WorldContextObject, TArray<FPhasmidSaveParam>& saveParams) {
}

bool UFalconGameplayStatics::GetCutsceneSubtitlesEnabled(const UObject* WorldContextObject) {
    return false;
}

void UFalconGameplayStatics::GetCurrentLevelName(const UObject* WorldContextObject, FString& LevelName) {
}

bool UFalconGameplayStatics::GetCreditsUnlocked(const UObject* WorldContextObject) {
    return false;
}

bool UFalconGameplayStatics::GetCompletionPctForSlot(const UObject* WorldContextObject, int32 saveSlotIndex, float& pctGame1, float& pctGame2, float& pctGame3) {
    return false;
}

float UFalconGameplayStatics::GetCompletionPctForLevel(const UObject* WorldContextObject, const FString& Level) {
    return 0.0f;
}

float UFalconGameplayStatics::GetCompletionPctForGame(const UObject* WorldContextObject, int32 slotIndex, int32 gameIndex) {
    return 0.0f;
}

void UFalconGameplayStatics::GetAspectAdjustedUIPosition(FVector WorldSpacePosition, APlayerController* PlayerController, FVector2D& OutScreenSpace) {
}

bool UFalconGameplayStatics::GetArtGalleryUnlocked(const UObject* WorldContextObject) {
    return false;
}

int32 UFalconGameplayStatics::GetActiveSaveSlotIndex(const UObject* WorldContextObject) {
    return 0;
}

int32 UFalconGameplayStatics::GetActiveGameIndex(const UObject* WorldContextObject) {
    return 0;
}

bool UFalconGameplayStatics::GetActiveCameraMode(const UObject* WorldContextObject) {
    return false;
}

void UFalconGameplayStatics::ForceUnpause(const UObject* WorldContextObject) {
}

bool UFalconGameplayStatics::FindObjectSaveDataByTypeAndParamKey(const UObject* WorldContextObject, const FString& Level, EInventoryType Type, const FString& paramName) {
    return false;
}

AActor* UFalconGameplayStatics::FindClosestActorWithGem(AActor* Target, TArray<TSubclassOf<AActor>> ActorClasses, UClass* LootClass) {
    return NULL;
}

FText UFalconGameplayStatics::DurationToText(float Duration) {
    return FText::GetEmpty();
}

void UFalconGameplayStatics::DisableWorldRendering(const UObject* WorldContextObject, bool Disable) {
}

void UFalconGameplayStatics::DebugSetArtGalleryUnlocked(const UObject* WorldContextObject) {
}

void UFalconGameplayStatics::ConvertColorToHexString(const FColor& inColor, FString& outString) {
}

bool UFalconGameplayStatics::AwardSkillPoint(const UObject* WorldContextObject, ESkillPoint pt) {
    return false;
}

UFalconGameplayStatics::UFalconGameplayStatics() {
}

