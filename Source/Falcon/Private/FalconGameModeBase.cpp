#include "FalconGameModeBase.h"
#include "QuestLevelManager.h"

UQuestLevelManager* AFalconGameModeBase::GetQuestLevelManager() const {
    return NULL;
}

AFalconGameModeBase::AFalconGameModeBase() {
    this->Quests = CreateDefaultSubobject<UQuestLevelManager>(TEXT("QuestLevelManager"));
}

