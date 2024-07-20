#include "SP3_AnimInstance.h"

USP3_AnimInstance::USP3_AnimInstance() {
    this->AllowStrafe = false;
    this->AnimSetIndex = 0;
    this->VOStartPos = 0.32f;
    this->BaseState = TEXT("Locomotion");
    this->TailAlpha = 0.00f;
    this->UpperAlpha = 0.00f;
    this->FaceAlpha = 0.00f;
    this->VOAnim = NULL;
}

