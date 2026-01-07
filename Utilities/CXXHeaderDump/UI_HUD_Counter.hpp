#ifndef UE4SS_SDK_UI_HUD_Counter_HPP
#define UE4SS_SDK_UI_HUD_Counter_HPP

class UUI_HUD_Counter_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0210 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0218 (size: 0x8)
    class UBorder* Border_0;                                                          // 0x0220 (size: 0x8)
    class UUI_FlightIcon_C* UI_FlightIcon;                                            // 0x0228 (size: 0x8)
    class UUI_HUD_CountWidget_C* UI_HUD_CountWidgetcount;                             // 0x0230 (size: 0x8)
    class UUI_HUD_CountWidget_C* UI_HUD_CountWidgettotal;                             // 0x0238 (size: 0x8)
    class UUI_HUD_Slash_C* UI_HUD_Slash;                                              // 0x0240 (size: 0x8)
    FTimerHandle timer display;                                                       // 0x0248 (size: 0x8)
    bool do debug print;                                                              // 0x0250 (size: 0x1)
    int32 total count;                                                                // 0x0254 (size: 0x4)
    int32 current count;                                                              // 0x0258 (size: 0x4)
    float auto hide;                                                                  // 0x025C (size: 0x4)
    bool Shown;                                                                       // 0x0260 (size: 0x1)
    FString counter name;                                                             // 0x0268 (size: 0x10)
    int32 state: 0=out, 1=coming in, 2=in, 3=going out;                               // 0x0278 (size: 0x4)
    TEnumAsByte<EHudPosition::Type> Alignment;                                        // 0x027C (size: 0x1)
    bool Active;                                                                      // 0x027D (size: 0x1)
    bool shown for pause;                                                             // 0x027E (size: 0x1)
    bool allow show in pause;                                                         // 0x027F (size: 0x1)

    void Hud Counter - Get Active Counters(TArray<FString>& counter names);
    void Hud Counter - Get Counts(FString Name, int32& current count, int32& total count, bool& is shown);
    void debug print values(FString Label);
    void set alignment();
    void set total();
    void set count();
    void outro anim finished();
    void auto hide timer elapsed();
    void show counter();
    void start auto hide timer();
    void init for flight screen(EFlightLevelTargetType target type);
    void Init icon by name(FString icon name);
    void intro anim finished();
    void autohide completed();
    void show for pause menu(bool Show, bool autohide);
    void Hud Counter - Show While Paused(FString counter name, bool Show);
    void Hud Counter - Hide(FString counter name);
    void Hud Counter - Set Count(FString counter name, int32 Count);
    void Hud Counter - Show(FString counter name, int32 total count, int32 Start Count, float Auto Hide Seconds, TEnumAsByte<EHudPosition::Type> hud position);
    void Destruct();
    void Construct();
    void ExecuteUbergraph_UI_HUD_Counter(int32 EntryPoint);
}; // Size: 0x280

#endif
