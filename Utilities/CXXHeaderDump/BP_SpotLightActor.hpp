#ifndef UE4SS_SDK_BP_SpotLightActor_HPP
#define UE4SS_SDK_BP_SpotLightActor_HPP

class ABP_SpotLightActor_C : public APawn
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0378 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0380 (size: 0x8)
    class UFloatingPawnMovement* FloatingPawnMovement;                                // 0x0388 (size: 0x8)
    class UCameraComponent* FollowCamera;                                             // 0x0390 (size: 0x8)
    class USpringArmComponent* CameraBoom;                                            // 0x0398 (size: 0x8)

    void UserConstructionScript();
    void IDoPickup();
    void IDoRestore();
    void IMoveDown(float Axis);
    void IJump();
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
    void ExecuteUbergraph_BP_SpotLightActor(int32 EntryPoint);
}; // Size: 0x3A0

#endif
