#include "QuestTriggerBox.h"
#include "Components/BoxComponent.h"

AQuestTriggerBox::AQuestTriggerBox() {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
}

