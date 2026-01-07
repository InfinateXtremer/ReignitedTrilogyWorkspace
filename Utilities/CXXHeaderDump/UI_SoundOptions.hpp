#ifndef UE4SS_SDK_UI_SoundOptions_HPP
#define UE4SS_SDK_UI_SoundOptions_HPP

class UUI_SoundOptions_C : public UFalconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UWidgetAnimation* Outro_0;                                                  // 0x0218 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0220 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0228 (size: 0x8)
    class UUI_Pause_Button_C* 001;                                                    // 0x0230 (size: 0x8)
    class UUI_General_Toggle_C* 002;                                                  // 0x0238 (size: 0x8)
    class UOverlay* 003;                                                              // 0x0240 (size: 0x8)
    class UUI_Container_001_C* UI_Container_001;                                      // 0x0248 (size: 0x8)
    class UUI_Container_002_C* UI_Container_002;                                      // 0x0250 (size: 0x8)
    class UUI_MenuHeader_C* UI_MenuHeader;                                            // 0x0258 (size: 0x8)
    class UVerticalBox* VerticalBox_3;                                                // 0x0260 (size: 0x8)
    class UObject* Controller;                                                        // 0x0268 (size: 0x8)
    bool do debug print;                                                              // 0x0270 (size: 0x1)
    FString menu key;                                                                 // 0x0278 (size: 0x10)
    bool closing;                                                                     // 0x0288 (size: 0x1)
    bool changed setting;                                                             // 0x0289 (size: 0x1)
    FText footer label activate;                                                      // 0x0290 (size: 0x18)
    FText footer label toggle;                                                        // 0x02A8 (size: 0x18)
    FText footer label back;                                                          // 0x02C0 (size: 0x18)
    class AMusicManager_C* the music manager;                                         // 0x02D8 (size: 0x8)
    FText Dynamic Music - Label;                                                      // 0x02E0 (size: 0x18)
    FText Dynamic Music - Option - Default;                                           // 0x02F8 (size: 0x18)
    FText Dynamic Music - Option - Alternate;                                         // 0x0310 (size: 0x18)
    TArray<class UWidget*> button widgets;                                            // 0x0328 (size: 0x10)
    bool intro anim done;                                                             // 0x0338 (size: 0x1)

    void handle key up(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle focus(class UUserWidget* Widget, FEventReply& result value);
    void handle key down(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle mouse down(class UUserWidget* Widget, FPointerEvent pointer event, FEventReply& return value);
    void SetMenuKeyData(class UWidget* Focused Widget);
    void OnKeyDownFromGameInstance(const FKeyEvent& KeyEvent, bool& Handled);
    void Select Default Button();
    void enable button focus anims();
    void configure dynamic button();
    void Toggle Music - Dynamic: on/off();
    void Toggle Music - re-ignited/remastered();
    void handle close button();
    void update footer(class UUserWidget* Widget);
    void do close();
    void do save();
    void load toggle setting(FString setting, bool& default is selected);
    void save toggle setting(FString setting, bool Default Option);
    void focus this widget(class UWidget* Widget);
    void set map(bool Default);
    void set invert camera Y(bool Default);
    void set invert camera X(bool Default);
    void set camera(bool Default);
    void set vibration(bool Default);
    void get adjacent widget(class UWidget* Widget, bool prev, class UWidget*& adj widget);
    void handle activate(class UUserWidget* Widget);
    void is key in set(FKey Key, TArray<FKey>& key set, bool& Result);
    void Construct();
    void UI panel set controller(class UObject* panel controller);
    void intro anim finished();
    void start outro();
    void outro anim finished();
    void UI panel close(bool immediate);
    void ExecuteUbergraph_UI_SoundOptions(int32 EntryPoint);
}; // Size: 0x339

#endif
