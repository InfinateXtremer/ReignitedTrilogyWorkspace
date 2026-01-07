#ifndef UE4SS_SDK_BP_HudTimerUpperRightComponent_HPP
#define UE4SS_SDK_BP_HudTimerUpperRightComponent_HPP

class UBP_HudTimerUpperRightComponent_C : public UHudTimerComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00F0 (size: 0x8)
    TSubclassOf<class AFalconHud> Player Hud;                                         // 0x00F8 (size: 0x8)
    TSubclassOf<class UUI_HUD_Timer_C> hud counter widget;                            // 0x0100 (size: 0x8)

    void get player hud(int32 Player Index, class AGameHud_C*& Game Hud);
    void get hud timer (int32 Player Index, class UUI_HUD_Timer_C*& hud timer);
    void SetRemainingSeconds(float Seconds);
    void HideTimer();
    void ShowTimer();
    void ExecuteUbergraph_BP_HudTimerUpperRightComponent(int32 EntryPoint);
}; // Size: 0x108

#endif
