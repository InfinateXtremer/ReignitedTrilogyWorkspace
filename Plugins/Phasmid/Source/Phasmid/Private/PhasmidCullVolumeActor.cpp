#include "PhasmidCullVolumeActor.h"
#include "Components/BoxComponent.h"

APhasmidCullVolumeActor::APhasmidCullVolumeActor() {
    this->bUseTriggers = true;
    this->bUseViewingAngle = true;
    this->bDebugPrintTriggerState = false;
    this->bAllowBroadcast = false;
    this->bRefreshCullActors = false;
    this->bNoCullOnBeginPlay = false;
    this->TriggerVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
}

