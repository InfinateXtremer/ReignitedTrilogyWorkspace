#include "SP3_Character.h"
#include "SP3_CharacterComponent.h"

ASP3_Character::ASP3_Character() {
    this->SP3CharComponent = CreateDefaultSubobject<USP3_CharacterComponent>(TEXT("Spyro3Character"));
}

