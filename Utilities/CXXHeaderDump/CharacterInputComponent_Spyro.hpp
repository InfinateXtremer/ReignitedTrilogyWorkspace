#ifndef UE4SS_SDK_CharacterInputComponent_Spyro_HPP
#define UE4SS_SDK_CharacterInputComponent_Spyro_HPP

class UCharacterInputComponent_Spyro_C : public UFalconCharacterInputComponent_Spyro
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0130 (size: 0x8)
    float InputAxisLeftStickY;                                                        // 0x0138 (size: 0x4)
    float InputAxisLeftStickX;                                                        // 0x013C (size: 0x4)
    float InputAxisRightStickY;                                                       // 0x0140 (size: 0x4)
    float InputAxisRightStickX;                                                       // 0x0144 (size: 0x4)
    float InputAxisTriggerLeft;                                                       // 0x0148 (size: 0x4)
    float InputAxisTriggerRight;                                                      // 0x014C (size: 0x4)
    float SideRollDirection;                                                          // 0x0150 (size: 0x4)
    float ChargeInterpAcceleration;                                                   // 0x0154 (size: 0x4)
    bool SwimForward;                                                                 // 0x0158 (size: 0x1)
    bool CameraTriggerHeld;                                                           // 0x0159 (size: 0x1)
    class USplineComponent* SlideDownSplineComponent;                                 // 0x0160 (size: 0x8)
    float SwimNoInputInterpAccel;                                                     // 0x0168 (size: 0x4)
    FVector CompensatedChargeVector;                                                  // 0x016C (size: 0xC)
    bool WasPushingAgainstGeo;                                                        // 0x0178 (size: 0x1)
    float RightStickXModifierForChargingOnPC;                                         // 0x017C (size: 0x4)
    float DefaultFlyXSensitivity;                                                     // 0x0180 (size: 0x4)
    float DefaultFlyYSensitivity;                                                     // 0x0184 (size: 0x4)
    bool InputActionSideRollLeft;                                                     // 0x0188 (size: 0x1)
    bool InputActionSideRollRight;                                                    // 0x0189 (size: 0x1)
    bool WaitForLeftStickYToReset;                                                    // 0x018A (size: 0x1)
    float TimeSpyroHasBeenInTheSamePositionInTheAir;                                  // 0x018C (size: 0x4)
    FVector LastLocation;                                                             // 0x0190 (size: 0xC)
    float TimeForSpyroToBeConsideredStuck;                                            // 0x019C (size: 0x4)
    float UnstuckVectorMultiplier;                                                    // 0x01A0 (size: 0x4)

    void CheckIfSpyroIsStuck(float Delta);
    void SetLeftStickYToWaitForReset();
    void KBM_UnderwaterStrafingMovement();
    void IsUsingMouseForFlyingAndSwimming(bool& Value);
    void IsKeyboardMouseAndInVehicle(bool& ReturnVal);
    void PointSpyroTowardsCamera();
    void GetSwimmingYValueOnPC(float& MovementValue);
    void GetSwimmingXValueOnPC(float& MovementValue);
    void IsKeyboardMouse(bool& Is Using);
    void IsKeyboardMouseAndUsingMouseCheckingXAxis(bool& Is Using);
    void GetChargeMovementValueOnPC(float& MovementValue);
    void GetFlyYValueOnPC(float& MovementValue);
    void GetForwardVectorForFlyingOnPC(FVector& ForwardVector);
    void GetFlyXValueOnPC(float& MovementValue);
    void IsSpyroInGroundCharge(bool& InGroundCharge);
    float GetFreeLookStickInput(float LeftStick, float RightStick);
    void CancelInput_CenterCam();
    void ShouldUseTFBControls(bool& UseTFBControls);
    void Input_CenterCam(TSubclassOf<class UGameplayEffect> CenterEffectClass);
    void Input_GlideCancel/GlideHover();
    void CanFreeLook(bool& CanFreeLook);
    void MoveAlongActorForwardVector(float InputX, float InputY, float ScaleValueOverride, float RotationInterpSpeed, FRotator ReferenceRotation, bool CheckForGeo);
    void MoveAlongControlRotationForward();
    void MoveAlongControlRotationRight();
    void InputAxis_LeftStick_X(float AxisValue);
    void InputAxis_LeftStick_Y(float AxisValue);
    void InputAction_FaceBottom(bool Pressed);
    void UpdateGlideMovement();
    void UpdateRightStickCameraRotation();
    void InputAxis_RightStick_Y(float AxisValue);
    void InputAxis_RightStick_X(float AxisValue);
    void InputAxis_TriggerLeft(float AxisValue);
    void InputAxis_TriggerRight(float AxisValue);
    void UpdateChargeMovement();
    void UpdateFreeLookCamera();
    void InputAction_FaceTop(bool Pressed);
    void ReceiveTick(float DeltaSeconds);
    void InputAction_ShoulderLeft(bool Pressed);
    void InputAction_ShoulderRight(bool Pressed);
    void UpdateSideRollMovement();
    void ReceiveBeginPlay();
    void PlayerControllerTick(float newDeltaSeconds);
    void UpdateClimbMovement();
    void UpdateUnderwaterMovement();
    void UpdateSwimMovement();
    void UpdateUnderwaterDirection();
    void UpdateGroundChargeMovement();
    void UpdateChargeUnderwaterMovement();
    void UpdateChargeDivingMovement();
    void RequestGroundMovement();
    void InputAction_TriggerLeft(bool Pressed);
    void UpdateFlyMovement();
    void UpdateFlySpyroRotationOnStick();
    void UpdateFlySpyroMoveForward();
    void UpdateFlySpyroRotationIdle();
    void UpdateSurfaceSwimMovement();
    void UpdateIceSkateMovement();
    void UpdateSuperJumpMovement();
    void InputAction_RightThumbstickButton(bool Pressed);
    void InputAction_LeftThumbstickButton(bool Pressed);
    void UpdateOrientRotationToMovement();
    void InputAction_FaceRight(bool Pressed);
    void UpdateSlideDown();
    void InputAction_TriggerRight(bool Pressed);
    void DoChargeSpecificMovementChecks(FVector DesiredMovementVector, float ScaleValue, float Tolerance);
    void KBM_UnderwaterStrafe();
    void ExecuteUbergraph_CharacterInputComponent_Spyro(int32 EntryPoint);
}; // Size: 0x1A4

#endif
