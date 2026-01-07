#ifndef UE4SS_SDK_UI_HUD_Statues_000_HPP
#define UE4SS_SDK_UI_HUD_Statues_000_HPP

class UUI_HUD_Statues_000_C : public UFalconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0218 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0220 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0228 (size: 0x8)
    class UImage* StatueAnimation;                                                    // 0x0230 (size: 0x8)
    class UImage* StatueShadow;                                                       // 0x0238 (size: 0x8)
    class UUI_HUD_Numbers_C* UI_HUD_Numbers001;                                       // 0x0240 (size: 0x8)
    class UUI_HUD_Numbers_C* UI_HUD_Numbers002;                                       // 0x0248 (size: 0x8)
    TArray<class UUI_HUD_Numbers_C*> Numbers;                                         // 0x0250 (size: 0x10)
    int32 Count;                                                                      // 0x0260 (size: 0x4)
    int32 State;                                                                      // 0x0264 (size: 0x4)
    FTimerHandle timer inventory;                                                     // 0x0268 (size: 0x8)
    FTimerHandle timer display;                                                       // 0x0270 (size: 0x8)
    bool do debug print;                                                              // 0x0278 (size: 0x1)
    int32 new count;                                                                  // 0x027C (size: 0x4)
    bool updated;                                                                     // 0x0280 (size: 0x1)

    void do outro stuff();
    void check inventory();
    void change numbers();
    void Construct();
    void Destruct();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void play intro();
    void play outro();
    void Hud Inventory - Updated(bool force display);
    void ConfigureScreen(const FFalconScreenConfigData& configData);
    void ExecuteUbergraph_UI_HUD_Statues_000(int32 EntryPoint);
}; // Size: 0x281

#endif
