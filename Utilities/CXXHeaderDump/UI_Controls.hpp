#ifndef UE4SS_SDK_UI_Controls_HPP
#define UE4SS_SDK_UI_Controls_HPP

class UUI_Controls_C : public UFalconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UWidgetAnimation* Intro_Desktop;                                            // 0x0218 (size: 0x8)
    class UWidgetAnimation* Outro_0;                                                  // 0x0220 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0228 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0230 (size: 0x8)
    class UUI_General_Toggle_C* 001Vibration;                                         // 0x0238 (size: 0x8)
    class UUI_Pause_Button_C* 005ControlScheme;                                       // 0x0240 (size: 0x8)
    class UUI_Pause_Button_C* 0060KeyboardControls;                                   // 0x0248 (size: 0x8)
    class UUI_Pause_Button_C* 007MoveList;                                            // 0x0250 (size: 0x8)
    class UUI_General_Toggle_C* 008MouseFlyingToggle;                                 // 0x0258 (size: 0x8)
    class UUI_General_Toggle_C* 009MouseFlyingInvertToggle;                           // 0x0260 (size: 0x8)
    class UUI_Container_001_C* UI_Container_001;                                      // 0x0268 (size: 0x8)
    class UUI_Container_002_C* UI_Container_002;                                      // 0x0270 (size: 0x8)
    class UUI_MenuHeader_C* UI_MenuHeader;                                            // 0x0278 (size: 0x8)
    class UVerticalBox* VerticalBox_3;                                                // 0x0280 (size: 0x8)
    class UObject* Controller;                                                        // 0x0288 (size: 0x8)
    bool do debug print;                                                              // 0x0290 (size: 0x1)
    float selected index;                                                             // 0x0294 (size: 0x4)
    FString menu key;                                                                 // 0x0298 (size: 0x10)
    bool closing;                                                                     // 0x02A8 (size: 0x1)
    bool changed setting;                                                             // 0x02A9 (size: 0x1)
    FText footer label select;                                                        // 0x02B0 (size: 0x18)
    FText footer label toggle;                                                        // 0x02C8 (size: 0x18)
    FText footer label back;                                                          // 0x02E0 (size: 0x18)
    TMap<class EInputSource, class TSoftObjectPtr<UForceFeedbackEffect>> VibrationEffectMap; // 0x02F8 (size: 0x50)
    FName VibrationEffectName;                                                        // 0x0348 (size: 0x8)

    void handle key up(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle focus(class UUserWidget* Widget, FEventReply& result value);
    void handle key down(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle mouse down(class UUserWidget* Widget, FPointerEvent pointer event, FEventReply& return value);
    void SetMenuKeyData(class UWidget* Focused Widget);
    void OnKeyDownFromGameInstance(const FKeyEvent& KeyEvent, bool& Handled);
    void enable button focus anims();
    void Select Default Button();
    void update footer(class UUserWidget* user widget);
    void do close();
    void do save();
    void load toggle setting(FString setting, bool& default is selected);
    void save toggle setting(FString setting, bool Default Option);
    void focus this widget(class UWidget* Widget);
    void set focus widget(class UWidget* self2, class UUserWidget*& ItemToFind, bool NewParam);
    void set map(bool Default);
    void set invert camera Y(bool Default);
    void set invert camera X(bool Default);
    void set camera(bool Default);
    void set vibration(bool Default);
    void get adjacent widget(class UWidget* Widget, bool prev, class UWidget*& adj widget);
    void handle activate(class UUserWidget* Widget);
    void is key in set(FKey Key, TArray<FKey>& key set, bool& Result);
    void Construct();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void UI panel set controller(class UObject* panel controller);
    void UI panel close(bool immediate);
    void ExecuteUbergraph_UI_Controls(int32 EntryPoint);
}; // Size: 0x350

#endif
