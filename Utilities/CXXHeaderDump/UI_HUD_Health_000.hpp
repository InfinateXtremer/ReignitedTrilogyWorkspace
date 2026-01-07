#ifndef UE4SS_SDK_UI_HUD_Health_000_HPP
#define UE4SS_SDK_UI_HUD_Health_000_HPP

class UUI_HUD_Health_000_C : public UHudHealthCountWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)
    class UWidgetAnimation* OutroFlight;                                              // 0x0240 (size: 0x8)
    class UWidgetAnimation* IntroFlight;                                              // 0x0248 (size: 0x8)
    class UWidgetAnimation* Spyro Head Bounce;                                        // 0x0250 (size: 0x8)
    class UWidgetAnimation* Orbs Removed;                                             // 0x0258 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0260 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0268 (size: 0x8)
    class UUI_HUD_HealthOrb_C* 001;                                                   // 0x0270 (size: 0x8)
    class UUI_HUD_HealthOrb_C* 002;                                                   // 0x0278 (size: 0x8)
    class UUI_HUD_HealthOrb_C* 003;                                                   // 0x0280 (size: 0x8)
    class UUI_HUD_HealthOrb_C* 004;                                                   // 0x0288 (size: 0x8)
    class UUI_HUD_HealthOrb_C* 005;                                                   // 0x0290 (size: 0x8)
    class UUI_HUD_HealthOrb_C* 006;                                                   // 0x0298 (size: 0x8)
    class UUI_HUD_HealthOrb_C* 007;                                                   // 0x02A0 (size: 0x8)
    class UUI_HUD_HealthOrb_C* 008;                                                   // 0x02A8 (size: 0x8)
    class UUI_HUD_HealthOrb_C* 009;                                                   // 0x02B0 (size: 0x8)
    class UUI_HUD_HealthOrb_C* 010;                                                   // 0x02B8 (size: 0x8)
    class UUI_HUD_HealthOrb_C* 011;                                                   // 0x02C0 (size: 0x8)
    class UUI_HUD_HealthOrb_C* 012;                                                   // 0x02C8 (size: 0x8)
    class UUI_HUD_HealthOrb_C* 013;                                                   // 0x02D0 (size: 0x8)
    class UUI_HUD_HealthOrb_C* 014;                                                   // 0x02D8 (size: 0x8)
    class UUI_HUD_HealthOrb_C* 015;                                                   // 0x02E0 (size: 0x8)
    class UUI_HUD_HealthOrb_C* 016;                                                   // 0x02E8 (size: 0x8)
    class UUI_HUD_HealthOrb_C* 017;                                                   // 0x02F0 (size: 0x8)
    class UUI_HUD_HealthOrb_C* 018;                                                   // 0x02F8 (size: 0x8)
    class UUI_HUD_HealthOrb_C* 019;                                                   // 0x0300 (size: 0x8)
    class UUI_HUD_HealthOrb_C* 020;                                                   // 0x0308 (size: 0x8)
    class UImage* Placementimage;                                                     // 0x0310 (size: 0x8)
    class UImage* Shadow;                                                             // 0x0318 (size: 0x8)
    class USizeBox* SizeBoxDoubleDigits;                                              // 0x0320 (size: 0x8)
    class UImage* Spyroimage;                                                         // 0x0328 (size: 0x8)
    class UOverlay* SpyroOverlay;                                                     // 0x0330 (size: 0x8)
    class UUI_HUD_Numbers_C* UI_HUD_Numbers001;                                       // 0x0338 (size: 0x8)
    class UUI_HUD_Numbers_C* UI_HUD_Numbers002;                                       // 0x0340 (size: 0x8)
    TArray<class UUI_HUD_Numbers_C*> Numbers;                                         // 0x0348 (size: 0x10)
    FTimerHandle outro timer;                                                         // 0x0358 (size: 0x8)
    bool do debug print;                                                              // 0x0360 (size: 0x1)
    bool played flight intro;                                                         // 0x0361 (size: 0x1)

    void Slide In();
    void Update Counts();
    void in flight level?(bool& Result);
    void make update event(FHudHealthCountEvent& update event);
    void add update event();
    void change partial orbs();
    void do outro stuff();
    void change numbers();
    void Destruct();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void play outro();
    void Hud Inventory - Updated(bool force display);
    void play intro();
    void Construct();
    void ConfigureScreen(const FFalconScreenConfigData& configData);
    void HealthCountUpdated();
    void ExecuteUbergraph_UI_HUD_Health_000(int32 EntryPoint);
}; // Size: 0x362

#endif
