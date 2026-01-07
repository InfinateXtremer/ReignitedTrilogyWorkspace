#ifndef UE4SS_SDK_CharacterInputComponent_Spectator_HPP
#define UE4SS_SDK_CharacterInputComponent_Spectator_HPP

class UCharacterInputComponent_Spectator_C : public UCharacterInputComponent_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0128 (size: 0x8)
    float InputAxisRightStickX;                                                       // 0x0130 (size: 0x4)
    float InputAxisRightStickY;                                                       // 0x0134 (size: 0x4)

    void ReceiveTick(float DeltaSeconds);
    void InputAxis_LeftStick_X(float AxisValue);
    void InputAxis_LeftStick_Y(float AxisValue);
    void UpdateReferences();
    void UpdateRightStickCameraRotation();
    void InputAxis_RightStick_Y(float AxisValue);
    void InputAxis_RightStick_X(float AxisValue);
    void InputAxis_TriggerRight(float AxisValue);
    void InputAxis_TriggerLeft(float AxisValue);
    void InputAction_FaceBottom(bool Pressed);
    void ExecuteUbergraph_CharacterInputComponent_Spectator(int32 EntryPoint);
}; // Size: 0x138

#endif
