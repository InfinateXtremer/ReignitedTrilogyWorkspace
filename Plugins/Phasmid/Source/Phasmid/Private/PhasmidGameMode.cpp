#include "PhasmidGameMode.h"
#include "PhasmidAIManager.h"

APhasmidGameMode::APhasmidGameMode() {
    this->AIManager = CreateDefaultSubobject<UPhasmidAIManager>(TEXT("AIManager"));
}

