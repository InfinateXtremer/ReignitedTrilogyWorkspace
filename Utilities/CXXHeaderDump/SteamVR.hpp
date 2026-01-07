#ifndef UE4SS_SDK_SteamVR_HPP
#define UE4SS_SDK_SteamVR_HPP

#include "SteamVR_enums.hpp"

class USteamVRChaperoneComponent : public UActorComponent
{
    FSteamVRChaperoneComponentOnLeaveBounds OnLeaveBounds;                            // 0x00F0 (size: 0x10)
    FSteamVRChaperoneComponentOnReturnToBounds OnReturnToBounds;                      // 0x0100 (size: 0x10)

    void SteamVRChaperoneEvent__DelegateSignature();
    TArray<FVector> GetBounds();
}; // Size: 0x118

class USteamVRFunctionLibrary : public UBlueprintFunctionLibrary
{

    void GetValidTrackedDeviceIds(ESteamVRTrackedDeviceType DeviceType, TArray<int32>& OutTrackedDeviceIds);
    bool GetTrackedDevicePositionAndOrientation(int32 DeviceID, FVector& OutPosition, FRotator& OutOrientation);
    bool GetHandPositionAndOrientation(int32 ControllerIndex, EControllerHand Hand, FVector& OutPosition, FRotator& OutOrientation);
}; // Size: 0x28

#endif
