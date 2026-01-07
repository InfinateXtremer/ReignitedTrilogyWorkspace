#ifndef UE4SS_SDK_UI_HUD_Gems_000_HPP
#define UE4SS_SDK_UI_HUD_Gems_000_HPP

class UUI_HUD_Gems_000_C : public UHudGemCountWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UWidgetAnimation* Bounce;                                                   // 0x0230 (size: 0x8)
    class UWidgetAnimation* StarGlowing;                                              // 0x0238 (size: 0x8)
    class UWidgetAnimation* Glowing;                                                  // 0x0240 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0248 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0250 (size: 0x8)
    class UImage* GemAnimationRV;                                                     // 0x0258 (size: 0x8)
    class UImage* GemShadow;                                                          // 0x0260 (size: 0x8)
    class UImage* Glow;                                                               // 0x0268 (size: 0x8)
    class UImage* Star001;                                                            // 0x0270 (size: 0x8)
    class UImage* Star002;                                                            // 0x0278 (size: 0x8)
    class UImage* Star003;                                                            // 0x0280 (size: 0x8)
    class UImage* Star004;                                                            // 0x0288 (size: 0x8)
    class UUI_HUD_Numbers_C* UI_HUD_Numbers001;                                       // 0x0290 (size: 0x8)
    class UUI_HUD_Numbers_C* UI_HUD_Numbers002;                                       // 0x0298 (size: 0x8)
    class UUI_HUD_Numbers_C* UI_HUD_Numbers003;                                       // 0x02A0 (size: 0x8)
    class UUI_HUD_Numbers_C* UI_HUD_Numbers_004;                                      // 0x02A8 (size: 0x8)
    class UUI_HUD_Numbers_C* UI_HUD_Numbers_005;                                      // 0x02B0 (size: 0x8)
    TArray<class UUI_HUD_Numbers_C*> Numbers;                                         // 0x02B8 (size: 0x10)
    int32 total gem count;                                                            // 0x02C8 (size: 0x4)
    int32 gem count to show;                                                          // 0x02CC (size: 0x4)
    int32 gem increment;                                                              // 0x02D0 (size: 0x4)
    int32 gem count;                                                                  // 0x02D4 (size: 0x4)
    float default update wait;                                                        // 0x02D8 (size: 0x4)
    FTimerHandle timer handle;                                                        // 0x02E0 (size: 0x8)
    bool was not in play;                                                             // 0x02E8 (size: 0x1)
    bool do debug print;                                                              // 0x02E9 (size: 0x1)

    void update gem counter display();
    void calculate update increment and change increment();
    void go state outro();
    void get gem count(bool& changed);
    void update gem count();
    void OnLoaded_AF7D4A2946036C000A9B59BFAC2EB485(class UObject* Loaded);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void Timeout();
    void change numbers();
    void play intro();
    void play outro();
    void ConfigureScreen(const FFalconScreenConfigData& configData);
    void Construct();
    void Destruct();
    void Hud Inventory - Updated(bool force display);
    void UpdateDisplay();
    void ExecuteUbergraph_UI_HUD_Gems_000(int32 EntryPoint);
}; // Size: 0x2EA

#endif
