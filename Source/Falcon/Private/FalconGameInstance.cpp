	
#include "FalconGameInstance.h"

void UFalconGameInstance::DetectPrimaryController()
{
}

bool UFalconGameInstance::GameSavingEnabled()
{
	return false;
}

int32 UFalconGameInstance::GetMaximumNumberOfControllers()
{
	return int32();
}

UObject * UFalconGameInstance::GetPrimaryController()
{
	return nullptr;
}

void UFalconGameInstance::HandleGameStateChanged(TEnumAsByte<EFalconGameState> aNewState, TEnumAsByte<EFalconGameState> aOldState)
{
}

void UFalconGameInstance::HandleGameStateChangedForCutscenes(TEnumAsByte<EFalconGameState> aNewState, TEnumAsByte<EFalconGameState> aOldState)
{
}

void UFalconGameInstance::HandleLevelStreamingComplete()
{
}

bool UFalconGameInstance::IsReady()
{
	return false;
}

void UFalconGameInstance::OnHideMouseCursorTimer()
{
}

bool UFalconGameInstance::PrimaryControllerDetected()
{
	return false;
}

void UFalconGameInstance::SetBypassSettingInputModeForCutsceneMouseCursor(bool DoBypass)
{
}

void UFalconGameInstance::ShowExternalLoginUI()
{
}

void UFalconGameInstance::QuestionScreenOptionSelected(int selectedIndex)
{
}