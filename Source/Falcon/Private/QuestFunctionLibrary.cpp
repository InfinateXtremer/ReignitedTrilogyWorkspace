#include "QuestFunctionLibrary.h"
#include "Templates/SubclassOf.h"

class APressToTalkWidget;
class AQuestController;

bool UQuestFunctionLibrary::SpawnSaveFairyDynamic(AQuestController* ctrl, const FName& Checkpoint) {
    return false;
}

bool UQuestFunctionLibrary::SaveCheckpoint(AQuestController* ctrl, const FName& Checkpoint) {
    return false;
}

bool UQuestFunctionLibrary::MoveToPoint(AQuestController* ctrl, const FName& Name) {
    return false;
}

bool UQuestFunctionLibrary::GreetPlayer(AQuestController* ctrl, bool autoGreet, TSubclassOf<APressToTalkWidget> PressToTalk) {
    return false;
}

UQuestFunctionLibrary::UQuestFunctionLibrary() {
}

