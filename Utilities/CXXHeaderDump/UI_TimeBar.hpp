#ifndef UE4SS_SDK_UI_TimeBar_HPP
#define UE4SS_SDK_UI_TimeBar_HPP

class UUI_TimeBar_C : public UFalconTimeBarWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0218 (size: 0x8)
    class UWidgetAnimation* SparxPlacement;                                           // 0x0220 (size: 0x8)
    class UWidgetAnimation* RiptoPlacement;                                           // 0x0228 (size: 0x8)
    class UWidgetAnimation* Loop;                                                     // 0x0230 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0238 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0240 (size: 0x8)
    class UWidgetAnimation* BarProgress;                                              // 0x0248 (size: 0x8)
    class UImage* bar;                                                                // 0x0250 (size: 0x8)
    class UImage* barpulse;                                                           // 0x0258 (size: 0x8)
    class UImage* Black;                                                              // 0x0260 (size: 0x8)
    class UImage* Color;                                                              // 0x0268 (size: 0x8)
    class UImage* glassHL;                                                            // 0x0270 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0278 (size: 0x8)
    class UImage* Image_5;                                                            // 0x0280 (size: 0x8)
    class UImage* particleeffect;                                                     // 0x0288 (size: 0x8)
    class UImage* PulseBar;                                                           // 0x0290 (size: 0x8)
    class UImage* pulseeffect;                                                        // 0x0298 (size: 0x8)
    class UImage* PulseIcon;                                                          // 0x02A0 (size: 0x8)
    class UImage* RedPulse;                                                           // 0x02A8 (size: 0x8)
    class UImage* Top;                                                                // 0x02B0 (size: 0x8)
    class UUI_TimeBar_GreenOrb_C* UI_TimeBar_GreenOrb;                                // 0x02B8 (size: 0x8)
    class UUI_TimeBar_Invincible_C* UI_TimeBar_Invincible;                            // 0x02C0 (size: 0x8)
    class UUI_TimeBar_Powerflame_C* UI_TimeBar_Powerflame;                            // 0x02C8 (size: 0x8)
    class UUI_TimeBar_Supercharge_C* UI_TimeBar_Supercharge;                          // 0x02D0 (size: 0x8)
    class UUI_TimeBar_Superfly_C* UI_TimeBar_Superfly;                                // 0x02D8 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_0;                                          // 0x02E0 (size: 0x8)
    float duration seconds;                                                           // 0x02E8 (size: 0x4)
    TEnumAsByte<EHudGateTimerType::Type> timer type;                                  // 0x02EC (size: 0x1)
    float active seconds;                                                             // 0x02F0 (size: 0x4)
    FTimerHandle timer handle;                                                        // 0x02F8 (size: 0x8)
    float anim duration;                                                              // 0x0300 (size: 0x4)
    float time scale;                                                                 // 0x0304 (size: 0x4)
    float update secs;                                                                // 0x0308 (size: 0x4)
    float Seconds;                                                                    // 0x030C (size: 0x4)
    float prev time;                                                                  // 0x0310 (size: 0x4)
    bool Closed;                                                                      // 0x0314 (size: 0x1)

    void Hud Gate Timer - Get Time Remaining(float& time remaining);
    void Adjust Button Prompt(bool In);
    FLinearColor Get_Pulse_Color();
    void update color set();
    FLinearColor Get_barpulse_ColorAndOpacity_0();
    FLinearColor Glass HL Color();
    void Hud Gate Timer - Show(float duration seconds, float starting seconds elapsed, TEnumAsByte<EHudGateTimerType::Type> timer type, EFalconTimeBarPlacement Placement);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void update bar();
    void Destruct();
    void Hud Gate Timer - Set Time Scale(float time scale);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Hud Gate Timer - Hide();
    void ShowTimeBar(float inDuration, EFalconTimeBarType inType, EFalconTimeBarPlacement inPlacement);
    void Close();
    void HideTimeBar();
    void SetTimeScale(float inTimeScale);
    void UpdateTimeBar();
    void Update SFX();
    void ExecuteUbergraph_UI_TimeBar(int32 EntryPoint);
}; // Size: 0x315

#endif
