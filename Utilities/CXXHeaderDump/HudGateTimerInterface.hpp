#ifndef UE4SS_SDK_HudGateTimerInterface_HPP
#define UE4SS_SDK_HudGateTimerInterface_HPP

class IHudGateTimerInterface_C : public IInterface
{

    void Hud Gate Timer - Get Time Remaining(float& time remaining);
    void Hud Gate Timer - Set Time Scale(float time scale);
    void Hud Gate Timer - Hide();
    void Hud Gate Timer - Show(float duration seconds, float starting seconds elapsed, TEnumAsByte<EHudGateTimerType::Type> timer type, EFalconTimeBarPlacement Placement);
}; // Size: 0x28

#endif
