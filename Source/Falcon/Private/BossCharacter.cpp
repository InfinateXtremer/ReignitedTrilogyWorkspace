#include "BossCharacter.h"
#include "SP3_BossCharacterComponent.h"

ABossCharacter::ABossCharacter() {
    this->BossComponent = CreateDefaultSubobject<USP3_BossCharacterComponent>(TEXT("Spyro3Boss"));
    this->Battleground = NULL;
}

