#ifndef UE4SS_SDK_UI_HUD_Timer_HPP
#define UE4SS_SDK_UI_HUD_Timer_HPP

class UUI_HUD_Timer_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0210 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0218 (size: 0x8)
    class USizeBox* box_min10s;                                                       // 0x0220 (size: 0x8)
    class USizeBox* boxMin1s;                                                         // 0x0228 (size: 0x8)
    class USizeBox* boxSec10s;                                                        // 0x0230 (size: 0x8)
    class UUI_HUD_Numbers_C* boxSec1s;                                                // 0x0238 (size: 0x8)
    class USizeBox* boxTenths;                                                        // 0x0240 (size: 0x8)
    class UUI_HUD_Numbers_C* numberhundreths10s;                                      // 0x0248 (size: 0x8)
    class UUI_HUD_Numbers_C* numberminutes10s;                                        // 0x0250 (size: 0x8)
    class UUI_HUD_Numbers_C* numberminutes1s;                                         // 0x0258 (size: 0x8)
    class UUI_HUD_Numbers_C* numberseconds10s;                                        // 0x0260 (size: 0x8)
    class UUI_HUD_Colon_C* UI_HUD_Colon001;                                           // 0x0268 (size: 0x8)
    class UUI_HUD_Period_C* UI_HUD_Period;                                            // 0x0270 (size: 0x8)
    FTimerHandle timer handle;                                                        // 0x0278 (size: 0x8)
    float total seconds;                                                              // 0x0280 (size: 0x4)
    float elapsed seconds;                                                            // 0x0284 (size: 0x4)
    float update interval;                                                            // 0x0288 (size: 0x4)
    float update elapsed;                                                             // 0x028C (size: 0x4)
    float new time;                                                                   // 0x0290 (size: 0x4)
    float added time;                                                                 // 0x0294 (size: 0x4)
    bool use timer;                                                                   // 0x0298 (size: 0x1)
    bool paused;                                                                      // 0x0299 (size: 0x1)
    bool do debug print;                                                              // 0x029A (size: 0x1)
    bool show leading digits;                                                         // 0x029B (size: 0x1)
    bool show decimal;                                                                // 0x029C (size: 0x1)
    TEnumAsByte<EHudPosition::Type> Position;                                         // 0x029D (size: 0x1)

    void adjust position();
    void get elapsed time(float& elapsed);
    void get time remaining(float& seconds remaining);
    void set digits(int32 Amount, class UUI_HUD_Numbers_C* tens, class UUI_HUD_Numbers_C* ones, bool allow collapse leading, bool allow collapse trailing);
    void get minutes(float Time, int32& Minutes);
    void get seconds(float Time, int32& Seconds);
    void get hundreths(float Time, int32& hundreths of a second);
    void set time(float Time);
    void timer remaining time(float& time left);
    void Destruct();
    void timer elapsed();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void add time(float Time);
    void update timer(float new time);
    void timer unpause();
    void timer pause();
    void set timer();
    void outro anim finished();
    void timer close();
    void timer hide();
    void Construct();
    void timer show();
    void timer start(float Time, bool user timer, bool do intro, bool show leading digits, bool show decimal);
    void ExecuteUbergraph_UI_HUD_Timer(int32 EntryPoint);
}; // Size: 0x29E

#endif
