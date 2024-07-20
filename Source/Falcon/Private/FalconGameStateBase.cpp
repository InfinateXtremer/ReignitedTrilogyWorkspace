#include "FalconGameStateBase.h"
#include "AchievementComponent.h"
#include "FalconGameSaveComponent.h"
#include "FanfareComponent.h"
#include "SkillPointComponent.h"

class AActor;




//void AFalconGameStateBase::ShowInventoryUI_Implementation() {
//}

//void AFalconGameStateBase::SystemRestartAfterLogin(bool userAdded)
//{
//}

void AFalconGameStateBase::ShowLoadScreen(bool Show, float fadeTime, TEnumAsByte<EFalconLoadScreen::Type> screenType)
{
}

//void AFalconGameStateBase::ShowInventoryUI()
//{
//}

void AFalconGameStateBase::SaveGame(EPhasmidSaveType saveType, const FString& LevelPath) {
}

void AFalconGameStateBase::SaveFileCreated() {
}

void AFalconGameStateBase::RespawningPlayer(const FString& Checkpoint) {
}

void AFalconGameStateBase::PlayerDied(AActor* Actor, const FGameplayEventData Payload) {
}

bool AFalconGameStateBase::PauseGameState(bool Pause, bool ForceUnpause) {
    return false;
}

void AFalconGameStateBase::OnPlayerReadyCallback() {
}

void AFalconGameStateBase::OnGameLoadCompleteCallback() {
}

void AFalconGameStateBase::LoadGameAsync(bool forceReload, bool skipRestore) {
}

void AFalconGameStateBase::LoadGame(bool forceReload, bool skipRestore) {
}

bool AFalconGameStateBase::IsDevelopmentBuild() {
    return false;
}

//void AFalconGameStateBase::InvokeSystemLogin()
//{
//}

//void AFalconGameStateBase::InvokeSystemLogin_Implementation() {
//}

float AFalconGameStateBase::GetTimePlayedForGame() {
    return 0.0f;
}

void AFalconGameStateBase::ChangeTheStateOfTheGame(EFalconGameState newGameState) {
}

TEnumAsByte<EFalconLevelLoadable::Type> AFalconGameStateBase::CanLoadLevel(const FString& LevelShortName) {
    return EFalconLevelLoadable::LevelCanLoad;
}





AFalconGameStateBase::AFalconGameStateBase() {
    this->AchievementComponent = CreateDefaultSubobject<UAchievementComponent>(TEXT("AchievementComponent"));
    this->FalconGameSaveComponent = CreateDefaultSubobject<UFalconGameSaveComponent>(TEXT("FalconGameSaveComponent"));
    this->SkillPointComponent = CreateDefaultSubobject<USkillPointComponent>(TEXT("SkillPointComponent"));
    this->FanfareComponent = CreateDefaultSubobject<UFanfareComponent>(TEXT("FanfareComponent"));
    this->theCurrentGameState = EFalconGameState::MainMenu;
    this->thePreviousGameState = EFalconGameState::MainMenu;
    this->levelStartingTreasure = 0;
    this->levelStartingTreasureSpent = 0;
    this->_levelStreamingTable = NULL;
    this->PauseSoundsEvent = NULL;
    this->UnpauseSoundsEvent = NULL;
    this->_skillPointsTable = NULL;
    this->bPlayerReady = false;
    this->transporter = NULL;
}

//void AFalconGameStateBase::SystemStart()
//{
//}

