#ifndef UE4SS_SDK_UI_HUD_GreenOrb_HPP
#define UE4SS_SDK_UI_HUD_GreenOrb_HPP

class UUI_HUD_GreenOrb_C : public UFalconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UWidgetAnimation* Bounce;                                                   // 0x0218 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0220 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0228 (size: 0x8)
    class UImage* Base;                                                               // 0x0230 (size: 0x8)
    class UImage* gloweffect;                                                         // 0x0238 (size: 0x8)
    class UHorizontalBox* NumbersHBox;                                                // 0x0240 (size: 0x8)
    class UImage* Shadow;                                                             // 0x0248 (size: 0x8)
    class UImage* toplayer;                                                           // 0x0250 (size: 0x8)
    class UUI_HUD_Numbers_C* UI_HUD_Numbers001;                                       // 0x0258 (size: 0x8)
    class UUI_HUD_Numbers_C* UI_HUD_Numbers002;                                       // 0x0260 (size: 0x8)
    class UUI_HUD_Numbers_C* UI_HUD_Numbers003;                                       // 0x0268 (size: 0x8)
    bool updated;                                                                     // 0x0270 (size: 0x1)
    int32 Count;                                                                      // 0x0274 (size: 0x4)
    FString State;                                                                    // 0x0278 (size: 0x10)
    bool Deactivated;                                                                 // 0x0288 (size: 0x1)
    FTimerHandle Idle Timer;                                                          // 0x0290 (size: 0x8)
    bool do debug print;                                                              // 0x0298 (size: 0x1)
    FString update context;                                                           // 0x02A0 (size: 0x10)
    bool show all orbs fanfare;                                                       // 0x02B0 (size: 0x1)
    bool show level complete fanfare;                                                 // 0x02B1 (size: 0x1)

    void Show Fanfares if necessary();
    void Is Fanfare Showing(bool& Result);
    void Check if Should Show Fanfare();
    void do bounce();
    void Cancel Idle Timer();
    void do outro();
    void idle in timeout();
    void handle update();
    void check should update();
    void complete outro anim();
    void complete intro anim();
    void update numbers();
    void get orb count(int32& Count, bool& count changed);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void Destruct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Hud Inventory - Updated(bool force display);
    void Construct();
    void ConfigureScreen(const FFalconScreenConfigData& configData);
    void ExecuteUbergraph_UI_HUD_GreenOrb(int32 EntryPoint);
}; // Size: 0x2B2

#endif
