#ifndef UE4SS_SDK_SteamVRController_HPP
#define UE4SS_SDK_SteamVRController_HPP

#include "SteamVRController_enums.hpp"

class USteamVRControllerLibrary : public UBlueprintFunctionLibrary
{

    void SetTouchDPadMapping(ESteamVRTouchDPadMapping NewMapping);
}; // Size: 0x28

#endif
