#ifndef UE4SS_SDK_BP_CharOnlyAreaLightActor_HPP
#define UE4SS_SDK_BP_CharOnlyAreaLightActor_HPP

class ABP_CharOnlyAreaLightActor_C : public APawn
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0378 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0380 (size: 0x8)
    class UFloatingPawnMovement* FloatingPawnMovement;                                // 0x0388 (size: 0x8)
    class UCameraComponent* FollowCamera;                                             // 0x0390 (size: 0x8)
    class USpringArmComponent* CameraBoom;                                            // 0x0398 (size: 0x8)

    void UserConstructionScript();
    void IDoRestore();
    void IMoveDown(float Axis);
    void IJump();
    void IDoPickup();
    void ICaptureScene();
    void IDoFocus(bool Holding);
    void IMoveForward(float Value);
    void IMoveRight(float Value);
    void IMoveUp(float Axis);
    void IWheelUp();
    void IWheelDown();
    void ICameraAxisX(float Axis);
    void ICameraAxisY(float Axis);
    void ISlowDown(bool Active?);
    void ISpeedUp(bool Active?);
    void ExecuteUbergraph_BP_CharOnlyAreaLightActor(int32 EntryPoint);
}; // Size: 0x3A0

#endif
