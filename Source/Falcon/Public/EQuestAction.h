#pragma once
#include "CoreMinimal.h"
#include "EQuestAction.generated.h"

UENUM()
enum class EQuestAction : int32 {
    DoNothing,
    ChangeFocus,
    ChangeGemCount,
    ChangeWorld,
    ChangingGameBoard,
    ChangingLevelBoard,
    SaveCheckpoint,
    GiveAchievement,
    GiveInventory,
    ChangeState,
    GiveEgg,
    GreetPlayer,
    MoveTo,
    SayToPlayer,
    SetPosition,
    StartChallengeTimer,
    ZapPlayer,
    FadeOut,
    FadeIn,
    NUM,
};

