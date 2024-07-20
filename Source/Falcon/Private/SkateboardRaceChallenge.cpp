#include "SkateboardRaceChallenge.h"

class AActor;
class UPrimitiveComponent;
class UQuestActionsComponent;

void ASkateboardRaceChallenge::StartRaceTimed_Implementation(UQuestActionsComponent* Actions) {
}

void ASkateboardRaceChallenge::StartRaceRhynocs_Implementation(UQuestActionsComponent* Actions) {
}

void ASkateboardRaceChallenge::StartRaceCrabs_Implementation(UQuestActionsComponent* Actions) {
}




void ASkateboardRaceChallenge::onQuestAreaExitRequested(EFalconAreaExitTitle Title) {
}

void ASkateboardRaceChallenge::OnCloseHighScoreMenu(FName ignore) {
}

void ASkateboardRaceChallenge::OnAreaLeft() {
}

void ASkateboardRaceChallenge::Idle_Implementation(UQuestActionsComponent* Actions) {
}

void ASkateboardRaceChallenge::Completed_Implementation(UQuestActionsComponent* Actions) {
}

void ASkateboardRaceChallenge::ClearTrickInput() {
}

void ASkateboardRaceChallenge::CheckpointOverlapBegin(UPrimitiveComponent* MyComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit) {
}

void ASkateboardRaceChallenge::CBSkateEvent(EPCMSkateEventType evtType, FName Name) {
}

void ASkateboardRaceChallenge::CalcPlayerRaceInfo(int32& retPlacement, int32& retCurLap, int32& retCurCheckPt, float& retCurRaceDist) const {
}

void ASkateboardRaceChallenge::AllCrabsKilled() {
}

ASkateboardRaceChallenge::ASkateboardRaceChallenge() {
    this->NumLaps = 3;
    this->RacePath = NULL;
    this->SkateTable = NULL;
    this->fadeTime = 0.50f;
    this->CurRaceType = ESkateBoardRaceType::None;
    this->MaxRaceTime = 600.00f;
    this->ChallengeSkillPoint = ESkillPoint::ESPT_Invalid;
    this->ChallengeBestTimeMS = 0;
    this->CourseRecordUIClass = NULL;
}

