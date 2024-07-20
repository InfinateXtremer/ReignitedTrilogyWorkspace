#include "SpyroCullTriggerOverlapActor.h"
#include "Components/BoxComponent.h"

ASpyroCullTriggerOverlapActor::ASpyroCullTriggerOverlapActor() {
    this->bCheckOnStartOnly = true;
    this->bUseStartTimer = false;
    this->StartTimer = 1.00f;
    this->TriggerVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
}

