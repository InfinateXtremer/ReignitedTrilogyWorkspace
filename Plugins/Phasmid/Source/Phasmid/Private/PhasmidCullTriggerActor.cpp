#include "PhasmidCullTriggerActor.h"
#include "Components/BoxComponent.h"

APhasmidCullTriggerActor::APhasmidCullTriggerActor() {
    this->TriggerVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
}

