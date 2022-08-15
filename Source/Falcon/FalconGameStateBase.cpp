// Fill out your copyright notice in the Description page of Project Settings.

#include "FalconGameStateBase.h"

void AFalconGameStateBase::SystemStart()
{
}

void AFalconGameStateBase::SystemRestartAfterLogin(bool userAdded)
{
}

void AFalconGameStateBase::ShowLoadScreen(bool Show, float fadeTime, TEnumAsByte<EFalconLoadScreen::Type> screenType)
{
}

void AFalconGameStateBase::ShowInventoryUI()
{
}

void AFalconGameStateBase::SaveFileCreated()
{
}

void AFalconGameStateBase::RespawningPlayer(FString Checkpoint)
{
}

void AFalconGameStateBase::PlayerDied(AActor * Actor, const FGameplayEventData Payload)
{
}

bool AFalconGameStateBase::PauseGameState(bool Pause, bool ForceUnpause)
{
	return false;
}

void AFalconGameStateBase::OnPlayerReadyCallback()
{
}

void AFalconGameStateBase::OnGameUnpaused__DelegateSignature()
{
}

void AFalconGameStateBase::OnGameLoadCompleteCallback()
{
}

void AFalconGameStateBase::LoadGameAsync(bool forceReload, bool skipRestore)
{
}

void AFalconGameStateBase::LoadGame(bool forceReload, bool skipRestore)
{
}

bool AFalconGameStateBase::IsDevelopmentBuild()
{
	return false;
}

void AFalconGameStateBase::InvokeSystemLogin()
{
}

float AFalconGameStateBase::GetTimePlayedForGame()
{
	return 0.0f;
}

void AFalconGameStateBase::ChangeTheStateOfTheGame(EFalconGameState newGameState)
{
}

TEnumAsByte<EFalconLevelLoadable::Type> AFalconGameStateBase::CanLoadLevel(FString LevelShortName)
{
	return TEnumAsByte<EFalconLevelLoadable::Type>();
}

void AFalconGameStateBase::BP_SetPlayerInventoryItemCount(EInventoryType ItemType, int32 Count, bool updateSettings)
{
}

void AFalconGameStateBase::BP_SaveProgression(const AActor * playerStartActor)
{
}

void AFalconGameStateBase::BP_RespawnPlayer()
{
}

void AFalconGameStateBase::BP_LoadIntoLevel(FName PortalRow, FName PortalName, TEnumAsByte<EFalconLoadScreen::Type> screenType)
{
}
