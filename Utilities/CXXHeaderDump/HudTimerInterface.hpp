#ifndef UE4SS_SDK_HudTimerInterface_HPP
#define UE4SS_SDK_HudTimerInterface_HPP

class IHudTimerInterface_C : public IInterface
{

    void Hud Timer - Set Paused(bool paused);
    void Hud Timer - Hide();
    void Hud Timer - Get Time Remaining(float& time remaining);
    void Hud Timer - Show(TEnumAsByte<EHudPosition::Type> Position, float time in seconds);
}; // Size: 0x28

#endif
