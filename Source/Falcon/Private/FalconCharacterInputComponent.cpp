#include "FalconCharacterInputComponent.h"

void UFalconCharacterInputComponent::UpdateReferences_Implementation() {
}

void UFalconCharacterInputComponent::SetPlayerCharacterContext(const FSpyroCharacterInitialData& InitialData) {
}

void UFalconCharacterInputComponent::PlayerControllerTick_Implementation(float newDeltaSeconds) {
}

bool UFalconCharacterInputComponent::IsControllable(FGameplayTag DisablingTag) const {
    return false;
}

void UFalconCharacterInputComponent::InputAxis_TriggerRight_Implementation(float AxisValue) {
}

void UFalconCharacterInputComponent::InputAxis_TriggerLeft_Implementation(float AxisValue) {
}

void UFalconCharacterInputComponent::InputAxis_RightStick_Y_Implementation(float AxisValue) {
}

void UFalconCharacterInputComponent::InputAxis_RightStick_X_Implementation(float AxisValue) {
}

void UFalconCharacterInputComponent::InputAxis_LeftStick_Y_Implementation(float AxisValue) {
}

void UFalconCharacterInputComponent::InputAxis_LeftStick_X_Implementation(float AxisValue) {
}

void UFalconCharacterInputComponent::InputAction_TriggerRight_Implementation(bool Pressed) {
}

void UFalconCharacterInputComponent::InputAction_TriggerLeft_Implementation(bool Pressed) {
}

void UFalconCharacterInputComponent::InputAction_ShoulderRight_Implementation(bool Pressed) {
}

void UFalconCharacterInputComponent::InputAction_ShoulderLeft_Implementation(bool Pressed) {
}

void UFalconCharacterInputComponent::InputAction_RightThumbstickButton_Implementation(bool Pressed) {
}

void UFalconCharacterInputComponent::InputAction_LeftThumbstickButton_Implementation(bool Pressed) {
}

void UFalconCharacterInputComponent::InputAction_FaceTop_Implementation(bool Pressed) {
}

void UFalconCharacterInputComponent::InputAction_FaceRight_Implementation(bool Pressed) {
}

void UFalconCharacterInputComponent::InputAction_FaceLeft_Implementation(bool Pressed) {
}

void UFalconCharacterInputComponent::InputAction_FaceBottom_Implementation(bool Pressed) {
}

UFalconCharacterInputComponent::UFalconCharacterInputComponent() {
    this->bRetroControls = false;
    this->ControlledPawn = NULL;
    this->PlayerController = NULL;
    this->DeltaSeconds = 0.00f;
    this->RotationMult_GroundMovement = 0.00f;
    this->RotationMult_SideRoll = 0.00f;
    this->RotationMult_CameraRightStick = 0.00f;
    this->RotationMult_FreeLook = 0.00f;
}

