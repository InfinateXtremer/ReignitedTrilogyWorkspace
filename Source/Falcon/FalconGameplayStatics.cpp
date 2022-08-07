// Fill out your copyright notice in the Description page of Project Settings.

#include "FalconGameplayStatics.h"

bool UFalconGameplayStatics::UnpauseGame(const UObject * WorldContextObject)
{
	return false;
}

void UFalconGameplayStatics::StopTimePlayedClock(const UObject * WorldContextObject)
{
}

void UFalconGameplayStatics::StartTimePlayedClock(const UObject * WorldContextObject)
{
}

AActor * UFalconGameplayStatics::SpawnGemWithName(const UObject * InSpawner, const TSubclassOf<class AActor>& InClass, FString InName, const FTransform & InTransform, ESpawnActorCollisionHandlingMethod InSpawnCollisionHandlingOverride)
{
	return nullptr;
}

bool UFalconGameplayStatics::ShouldShowBossLoadScreen(const UObject * WorldContextObject, FString LevelPath)
{
	return false;
}

void UFalconGameplayStatics::SetSlotDifficulty(const UObject * WorldContextObject, int32 slotIndex, int32 difficulty)
{
}

void UFalconGameplayStatics::SetSaveSlotIndex(const UObject * WorldContextObject, int32 Index)
{
}

void UFalconGameplayStatics::SetSaveSlotActivated(const UObject * WorldContextObject, int32 Index, bool Activated)
{
}

void UFalconGameplayStatics::SetS2SuperflameUnlockForAllSlots(const UObject * WorldContextObject, bool Unlocked)
{
}

void UFalconGameplayStatics::SetNightmareDifficultyUnlocked(const UObject * WorldContextObject)
{
}

void UFalconGameplayStatics::SetGlobalFloatData(const UObject * WorldContextObject, FString Key, float Value)
{
}

void UFalconGameplayStatics::SetGameIndex(const UObject * WorldContextObject, int32 Index)
{
}

void UFalconGameplayStatics::SetCutsceneSubtitlesEnabled(const UObject * WorldContextObject, bool subtitlesOn)
{
}

void UFalconGameplayStatics::SetCreditsUnlocked(const UObject * WorldContextObject)
{
}

void UFalconGameplayStatics::SetArtGalleryUnlocked(const UObject * WorldContextObject)
{
}

void UFalconGameplayStatics::SetActiveSaveSlotIndex(const UObject * WorldContextObject, int32 Index)
{
}

void UFalconGameplayStatics::SetActiveGameIndex(const UObject * WorldContextObject, int32 Index)
{
}

void UFalconGameplayStatics::SetActiveCameraMode(const UObject * WorldContextObject, bool activeModeOn)
{
}

void UFalconGameplayStatics::SerializeSaveDataForActorByName(const UObject * WorldContextObject, FString Name, const FPhasmidObjectSaveDataList & saveData)
{
}

bool UFalconGameplayStatics::PauseGame(const UObject * WorldContextObject, bool bPauseAudio)
{
	return false;
}

void UFalconGameplayStatics::objectStoreCheckpointData(const UObject * WorldContextObject, AActor * Actor, const FPhasmidObjectSaveDataList & objectDataList, bool delayStoringUntilCheckpoint)
{
}

void UFalconGameplayStatics::objectSaveDataUpdated(const UObject * WorldContextObject, AActor * Object)
{
}

bool UFalconGameplayStatics::IsMenuCancelKey(const FKey & Key)
{
	return false;
}

bool UFalconGameplayStatics::IsMenuActivateKey(const FKey & Key)
{
	return false;
}

bool UFalconGameplayStatics::IsDesktopBuild()
{
	return false;
}

float UFalconGameplayStatics::GetTimePlayedForSlot(const UObject * WorldContextObject, int32 slotIndex)
{
	return 0.0f;
}

float UFalconGameplayStatics::GetTimePlayedForGame(const UObject * WorldContextObject)
{
	return 0.0f;
}

void UFalconGameplayStatics::GetTextSize(const UObject * WorldContextObject, FString InText, const FSlateFontInfo & InFontInfo, FVector2D & OutSize)
{
}

int32 UFalconGameplayStatics::GetSlotDifficulty(const UObject * WorldContextObject, int32 slotIndex)
{
	return int32();
}

bool UFalconGameplayStatics::GetShippingBuild()
{
	return false;
}

int32 UFalconGameplayStatics::GetSaveSlotIndex(const UObject * WorldContextObject)
{
	return int32();
}

bool UFalconGameplayStatics::getSaveDataForActorByName(const UObject * WorldContextObject, FString Name, FString Level, FPhasmidObjectSaveDataList & saveData)
{
	return false;
}

bool UFalconGameplayStatics::GetS3EggCollectedByName(const UObject * WorldContextObject, FString eggName)
{
	return false;
}

bool UFalconGameplayStatics::GetS2SuperflameUnlockForAllSlots(const UObject * WorldContextObject)
{
	return false;
}

bool UFalconGameplayStatics::GetPortalExitActivated(const UObject * WorldContextObject, FString Level)
{
	return false;
}

float UFalconGameplayStatics::GetPlatformTimeInSeconds()
{
	return 0.0f;
}

void UFalconGameplayStatics::GetNonGPLLevelInfo(const UObject * WorldContextObject, int32 & gameNum, int32 & levelIndex, FString & LevelName)
{
}

bool UFalconGameplayStatics::GetNightmareDifficultyUnlocked(const UObject * WorldContextObject)
{
	return false;
}

void UFalconGameplayStatics::GetListOfLevelsForGame(const UObject * WorldContextObject, int32 gameIndex, TArray<FString>& Levels)
{
}

int32 UFalconGameplayStatics::GetLevelInventoryTotalForType(const UObject * WorldContextObject, EInventoryType inventoryType, FString Level)
{
	return int32();
}

bool UFalconGameplayStatics::GetIsSaveSlotActivated(const UObject * WorldContextObject, int32 slotIndex)
{
	return false;
}

int32 UFalconGameplayStatics::GetInventoryRawTotalCountForLevel(const UObject * WorldContextObject, FString Level)
{
	return int32();
}

int32 UFalconGameplayStatics::GetInventoryCollectedCountForType(const UObject * WorldContextObject, EInventoryType Type, FString Level)
{
	return int32();
}

bool UFalconGameplayStatics::GetGlobalFloatData(const UObject * WorldContextObject, FString Key, float & Value)
{
	return false;
}

void UFalconGameplayStatics::GetGameSaveDataObjectList(const UObject * WorldContextObject, FString Level, EInventoryType Type, TArray<FPhasmidGameSaveObjectData>& objectDataList)
{
}

int32 UFalconGameplayStatics::GetGameInventoryTotalForType(const UObject * WorldContextObject, int32 gameIndex, EInventoryType inventoryType)
{
	return int32();
}

int32 UFalconGameplayStatics::GetGameIndex(const UObject * WorldContextObject)
{
	return int32();
}

APlayerController * UFalconGameplayStatics::GetFirstLocalPlayerController(const UObject * WorldContextObject)
{
	return nullptr;
}

AGameStateBase * UFalconGameplayStatics::GetFalconGameState(const UObject * WorldContextObject)
{
	return nullptr;
}

bool UFalconGameplayStatics::GetEggCollectedByName(const UObject * WorldContextObject, FString eggName)
{
	return false;
}

bool UFalconGameplayStatics::GetDragonCollected(const UObject * WorldContextObject, FString Level, FString dragonName)
{
	return false;
}

void UFalconGameplayStatics::GetDebugSaveParams(const UObject * WorldContextObject, TArray<FPhasmidSaveParam>& saveParams)
{
}

bool UFalconGameplayStatics::GetCutsceneSubtitlesEnabled(const UObject * WorldContextObject)
{
	return false;
}

bool UFalconGameplayStatics::GetCreditsUnlocked(const UObject * WorldContextObject)
{
	return false;
}

bool UFalconGameplayStatics::GetCompletionPctForSlot(const UObject * WorldContextObject, int32 saveSlotIndex, float & pctGame1, float & pctGame2, float & pctGame3)
{
	return false;
}

float UFalconGameplayStatics::GetCompletionPctForLevel(const UObject * WorldContextObject, FString Level)
{
	return 0.0f;
}

float UFalconGameplayStatics::GetCompletionPctForGame(const UObject * WorldContextObject, int32 slotIndex, int32 gameIndex)
{
	return 0.0f;
}

void UFalconGameplayStatics::GetAspectAdjustedUIPosition(FVector WorldSpacePosition, APlayerController * PlayerController, FVector2D & OutScreenSpace)
{
}

bool UFalconGameplayStatics::GetArtGalleryUnlocked(const UObject * WorldContextObject)
{
	return false;
}

int32 UFalconGameplayStatics::GetActiveSaveSlotIndex(const UObject * WorldContextObject)
{
	return int32();
}

int32 UFalconGameplayStatics::GetActiveGameIndex(const UObject * WorldContextObject)
{
	return int32();
}

bool UFalconGameplayStatics::GetActiveCameraMode(const UObject * WorldContextObject)
{
	return false;
}

void UFalconGameplayStatics::ForceUnpause(const UObject * WorldContextObject)
{
}

bool UFalconGameplayStatics::FindObjectSaveDataByTypeAndParamKey(const UObject * WorldContextObject, FString Level, EInventoryType Type, FString paramName)
{
	return false;
}

AActor * UFalconGameplayStatics::FindClosestActorWithGem(AActor * Target, TArray<class TSubclassOf<AActor>> ActorClasses, UClass * LootClass)
{
	return nullptr;
}

FText UFalconGameplayStatics::DurationToText(float Duration)
{
	return FText();
}

void UFalconGameplayStatics::DisableWorldRendering(const UObject * WorldContextObject, bool Disable)
{
}

void UFalconGameplayStatics::DebugSetArtGalleryUnlocked(const UObject * WorldContextObject)
{
}

void UFalconGameplayStatics::ConvertColorToHexString(const FColor & inColor, FString & outString)
{
}

bool UFalconGameplayStatics::AwardSkillPoint(const UObject * WorldContextObject, ESkillPoint pt)
{
	return false;
}
