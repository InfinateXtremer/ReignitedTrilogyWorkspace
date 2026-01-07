#ifndef UE4SS_SDK_UI_BossBar_HPP
#define UE4SS_SDK_UI_BossBar_HPP

class UUI_BossBar_C : public UFalconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UWidgetAnimation* Heal;                                                     // 0x0218 (size: 0x8)
    class UWidgetAnimation* TakeDamage;                                               // 0x0220 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0228 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0230 (size: 0x8)
    class UUI_BossBar_Pip_C* 001;                                                     // 0x0238 (size: 0x8)
    class UUI_BossBar_Pip_C* 002;                                                     // 0x0240 (size: 0x8)
    class UUI_BossBar_Pip_C* 003;                                                     // 0x0248 (size: 0x8)
    class UUI_BossBar_Pip_C* 004;                                                     // 0x0250 (size: 0x8)
    class UUI_BossBar_Pip_C* 005;                                                     // 0x0258 (size: 0x8)
    class UUI_BossBar_Pip_C* 006;                                                     // 0x0260 (size: 0x8)
    class UUI_BossBar_Pip_C* 007;                                                     // 0x0268 (size: 0x8)
    class UUI_BossBar_Pip_C* 008;                                                     // 0x0270 (size: 0x8)
    class UUI_BossBar_Pip_C* 009;                                                     // 0x0278 (size: 0x8)
    class UUI_BossBar_Pip_C* 010;                                                     // 0x0280 (size: 0x8)
    class UImage* blackbase;                                                          // 0x0288 (size: 0x8)
    class UImage* BlackOuterGlow;                                                     // 0x0290 (size: 0x8)
    class UImage* ColorBase;                                                          // 0x0298 (size: 0x8)
    class UImage* HealEffect;                                                         // 0x02A0 (size: 0x8)
    class UOverlay* OverlayRV;                                                        // 0x02A8 (size: 0x8)
    class UHorizontalBox* piphbox;                                                    // 0x02B0 (size: 0x8)
    class UImage* PortraitCrush;                                                      // 0x02B8 (size: 0x8)
    class UImage* PortraitCrushShadow;                                                // 0x02C0 (size: 0x8)
    class UImage* PortraitGlow;                                                       // 0x02C8 (size: 0x8)
    class UImage* PortraitGulp;                                                       // 0x02D0 (size: 0x8)
    class UImage* PortraitGulpShadow;                                                 // 0x02D8 (size: 0x8)
    class USizeBox* SizeBox10;                                                        // 0x02E0 (size: 0x8)
    class USizeBox* SizeBox402;                                                       // 0x02E8 (size: 0x8)
    class UImage* Trim;                                                               // 0x02F0 (size: 0x8)
    class UImage* TrimGlow;                                                           // 0x02F8 (size: 0x8)
    int32 total pips;                                                                 // 0x0300 (size: 0x4)
    FString Boss;                                                                     // 0x0308 (size: 0x10)
    int32 damaged pips;                                                               // 0x0318 (size: 0x4)
    bool Active;                                                                      // 0x031C (size: 0x1)
    int32 first pip;                                                                  // 0x0320 (size: 0x4)

    void initialize pips();
    void OnLoaded_878D12964D3517FE3AB4D591E7FD661F(class UObject* Loaded);
    void Construct();
    void Hud - Boss Bar - Show(int32 hit count, FString Boss);
    void Hud - Boss Bar - Hide();
    void Hud - Boss Bar - Damage(int32 Count);
    void Hud - Boss Bar - Heal(int32 Count);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void HideScreen(bool immediate);
    void ConfigureScreen(const FFalconScreenConfigData& configData);
    void Destruct();
    void ExecuteUbergraph_UI_BossBar(int32 EntryPoint);
}; // Size: 0x324

#endif
