#ifndef UE4SS_SDK_BPI_Movement_HPP
#define UE4SS_SDK_BPI_Movement_HPP

class IBPI_Movement_C : public IInterface
{

    void IJump();
    void IMoveDown(float Axis);
    void IDoRestore();
    void IDoPickup();
    void ICaptureScene();
    void IDoFocus(bool Holding);
    void ISpeedUp(bool Active?);
    void ISlowDown(bool Active?);
    void IWheelDown();
    void IWheelUp();
    void IMoveUp(float Axis);
    void ICameraAxisY(float Axis);
    void ICameraAxisX(float Axis);
    void IMoveRight(float Value);
    void IMoveForward(float Value);
}; // Size: 0x28

#endif
