#include "PhasmidInputGlyphSettings.h"

float UPhasmidInputGlyphSettings::GetDefaultUseMouseForFlying() {
    return 0.0f;
}

float UPhasmidInputGlyphSettings::GetDefaultTimeToHideMouseInCutscenes() {
    return 0.0f;
}

float UPhasmidInputGlyphSettings::GetDefaultMouseSensitivity() {
    return 0.0f;
}

float UPhasmidInputGlyphSettings::GetDefaultInvertMouseYForFly() {
    return 0.0f;
}

float UPhasmidInputGlyphSettings::GetDefaultFlyYSensitivity() {
    return 0.0f;
}

float UPhasmidInputGlyphSettings::GetDefaultFlyXSensitivity() {
    return 0.0f;
}

float UPhasmidInputGlyphSettings::GetDefaultChargeSensitivity() {
    return 0.0f;
}

float UPhasmidInputGlyphSettings::GetDefaultChargeModifier() {
    return 0.0f;
}

UPhasmidInputGlyphSettings::UPhasmidInputGlyphSettings() {
    this->ChargeSensitivity = 0.50f;
    this->Fly_X_Sensitivity = 1.00f;
    this->Fly_Y_Sensitivity = 0.95f;
    this->MouseSensitivity = 0.07f;
    this->UseMouseForFlying = 1.00f;
    this->ChargeModifier = 0.70f;
    this->TimeToHideMouseInCutscenes = 3.00f;
    this->DefaultInvertMouseYForFly = 0.00f;
}

