#ifndef UE4SS_SDK_UI_FlightScreen_HPP
#define UE4SS_SDK_UI_FlightScreen_HPP

class UUI_FlightScreen_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* CollectedAll;                                             // 0x0210 (size: 0x8)
    class UWidgetAnimation* TimerIntro;                                               // 0x0218 (size: 0x8)
    class UWidgetAnimation* AddTime;                                                  // 0x0220 (size: 0x8)
    class UWidgetAnimation* CollectingOutro;                                          // 0x0228 (size: 0x8)
    class UWidgetAnimation* CollectingIntro;                                          // 0x0230 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0238 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0240 (size: 0x8)
    class UUI_FlightIcon_C* 001;                                                      // 0x0248 (size: 0x8)
    class UUI_FlightIcon_C* 002;                                                      // 0x0250 (size: 0x8)
    class UUI_FlightIcon_C* 003;                                                      // 0x0258 (size: 0x8)
    class UUI_FlightIcon_C* 004;                                                      // 0x0260 (size: 0x8)
    class UUI_FlightIcon_C* 005;                                                      // 0x0268 (size: 0x8)
    class UUI_FlightIcon_C* 006;                                                      // 0x0270 (size: 0x8)
    class UUI_FlightIcon_C* 007;                                                      // 0x0278 (size: 0x8)
    class UUI_FlightIcon_C* 008;                                                      // 0x0280 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0288 (size: 0x8)
    class UHorizontalBox* CurrentlyCollecting;                                        // 0x0290 (size: 0x8)
    class UUI_FlightScreen_AllInOne_C* UI_FlightScreen_AllInOne;                      // 0x0298 (size: 0x8)
    class UUI_FlightScreen_OneSet_C* UI_FlightScreen_OneSet_001;                      // 0x02A0 (size: 0x8)
    class UUI_FlightScreen_OneSet_C* UI_FlightScreen_OneSet_002;                      // 0x02A8 (size: 0x8)
    class UUI_FlightScreen_OneSet_C* UI_FlightScreen_OneSet_003;                      // 0x02B0 (size: 0x8)
    class UUI_FlightScreen_OneSet_C* UI_FlightScreen_OneSet_004;                      // 0x02B8 (size: 0x8)
    class UUI_HUD_Numbers_C* UI_HUD_Numbers;                                          // 0x02C0 (size: 0x8)
    class UUI_HUD_Numbers_C* UI_HUD_Numbers_2;                                        // 0x02C8 (size: 0x8)
    class UUI_HUD_Numbers_C* UI_HUD_Numbers_C_3;                                      // 0x02D0 (size: 0x8)
    class UUI_HUD_Numbers_C* UI_HUD_Numbers_C_4;                                      // 0x02D8 (size: 0x8)
    class UUI_HUD_Period_C* UI_HUD_Period_C_0;                                        // 0x02E0 (size: 0x8)
    class UUI_HUD_Period_C* UI_HUD_Period_Hidden;                                     // 0x02E8 (size: 0x8)
    class UUI_HUD_Plus_C* UI_HUD_Plus;                                                // 0x02F0 (size: 0x8)
    class UUI_HUD_Plus_C* UI_HUD_Plus_C_0;                                            // 0x02F8 (size: 0x8)
    class UUI_HUD_Timer_C* UI_HUD_Timer;                                              // 0x0300 (size: 0x8)
    bool Active;                                                                      // 0x0308 (size: 0x1)
    bool orb challenge;                                                               // 0x0309 (size: 0x1)
    EFlightLevelTargetType last collected;                                            // 0x030A (size: 0x1)
    bool collected progress shown;                                                    // 0x030B (size: 0x1)
    EFlightLevelTargetType just collected;                                            // 0x030C (size: 0x1)
    float bonus time;                                                                 // 0x0310 (size: 0x4)
    int32 orb challenge count;                                                        // 0x0314 (size: 0x4)
    TArray<EFlightLevelTargetType> pending collected;                                 // 0x0318 (size: 0x10)
    int32 completely collected count;                                                 // 0x0328 (size: 0x4)
    int32 collecting status;                                                          // 0x032C (size: 0x4)
    TArray<EFlightLevelTargetType> pending completed;                                 // 0x0330 (size: 0x10)
    float warning threshold;                                                          // 0x0340 (size: 0x4)
    float starting time;                                                              // 0x0344 (size: 0x4)
    float accumulated bonus time;                                                     // 0x0348 (size: 0x4)
    int32 targets collected;                                                          // 0x034C (size: 0x4)
    TMap<EFlightLevelTargetType, int32> target collected counts;                      // 0x0350 (size: 0x50)
    bool ReadingSign;                                                                 // 0x03A0 (size: 0x1)

    float FlightScreenGetTimeElapsed();
    float FlightScreenGetTimeRemaining();
    void Reset Collecting Widgets();
    void initialize screen();
    void debug print time vars();
    void update warning threshold();
    void clear collecting icons(EFlightLevelTargetType Type);
    void show orb collected();
    void collected counts - get(EFlightLevelTargetType Type, int32& Count);
    void show set completed(EFlightLevelTargetType Type);
    void do intro anim();
    void update time();
    void show bonus();
    void collected counts - update(EFlightLevelTargetType target type, int32& Count);
    void show collected(bool& all collected, EFlightLevelTargetType& type collected);
    void debug print collected(float bonus, EFlightLevelTargetType Target);
    void collected counts - init(TArray<EFlightLevelTargetType>& Array);
    void Construct();
    void FlightScreenCollect(UClass* flightScreenWidgetClass, EFlightLevelTargetType ItemType, float bonusSeconds);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void FlightScreenShow(UClass* flightScreenWidgetClass, float startingSeconds, bool orbChallenge, const TArray<EFlightLevelTargetType>& Targets);
    void FlightScreenHide(UClass* flightScreenWidgetClass);
    void Destruct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UI_FlightScreen(int32 EntryPoint);
}; // Size: 0x3A1

#endif
