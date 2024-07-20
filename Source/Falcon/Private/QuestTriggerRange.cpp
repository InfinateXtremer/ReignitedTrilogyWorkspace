#include "QuestTriggerRange.h"
#include "Components/SphereComponent.h"

AQuestTriggerRange::AQuestTriggerRange() {
    this->SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
}

