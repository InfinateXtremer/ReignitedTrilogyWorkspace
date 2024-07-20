#include "QuestLevelActor.h"

class UCameraReadjust;




void AQuestLevelActor::SetDelayStart(bool Value) {
}

void AQuestLevelActor::SetBoardValue(FName Key, FName Value) {
}



bool AQuestLevelActor::IsActive() {
    return false;
}


bool AQuestLevelActor::GetDelayStart() {
    return false;
}

UCameraReadjust* AQuestLevelActor::GetCameraReadjust() {
    return NULL;
}

FName AQuestLevelActor::GetBoardValueWithField(FName Key, ETargetField Field) {
    return NAME_None;
}

FName AQuestLevelActor::GetBoardValue(FName Key) {
    return NAME_None;
}


AQuestLevelActor::AQuestLevelActor() {
    this->Script = NULL;
    this->DialogTable = NULL;
    this->FullbodyTable = NULL;
    this->LevelStreamingTable = NULL;
    this->PlayerCharacterClass = NULL;
    this->MusicEvent = NULL;
    this->bDelayStart = false;
    this->World = EIdWorld::None;
    this->HasBindings = false;
    this->m_manager = NULL;
}

