#ifndef UE4SS_SDK_ManagedCameraInterface_HPP
#define UE4SS_SDK_ManagedCameraInterface_HPP

class IManagedCameraInterface_C : public IInterface
{

    void ClearOffset(bool& Moved);
    void GetCurrentOffset(float& Offset);
    void SetOffset(float SetOffset, float Time, bool& Offset);
}; // Size: 0x28

#endif
