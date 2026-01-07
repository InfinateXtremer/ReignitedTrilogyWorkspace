#ifndef UE4SS_SDK_UI_Options_HPP
#define UE4SS_SDK_UI_Options_HPP

class UUI_Options_C : public UFalconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UWidgetAnimation* Intro_Desktop;                                            // 0x0218 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0220 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0228 (size: 0x8)
    class UUI_Pause_Button_C* 002Controls;                                            // 0x0230 (size: 0x8)
    class UUI_Pause_Button_C* 003Sound;                                               // 0x0238 (size: 0x8)
    class UUI_Pause_Button_C* 0040GraphicsButton;                                     // 0x0240 (size: 0x8)
    class UUI_Pause_Button_C* 004Camera;                                              // 0x0248 (size: 0x8)
    class UUI_General_Toggle_C* 005Map;                                               // 0x0250 (size: 0x8)
    class UUI_General_Toggle_C* 006Subtitles;                                         // 0x0258 (size: 0x8)
    class UUI_Container_001_C* UI_Container_001;                                      // 0x0260 (size: 0x8)
    class UUI_Container_002_C* UI_Container_002;                                      // 0x0268 (size: 0x8)
    class UUI_MenuHeader_C* UI_MenuHeader;                                            // 0x0270 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x0278 (size: 0x8)
    class UObject* panel controller;                                                  // 0x0280 (size: 0x8)
    TArray<class UUserWidget*> button list;                                           // 0x0288 (size: 0x10)
    class UWidget* Focused Widget;                                                    // 0x0298 (size: 0x8)
    FString menu key;                                                                 // 0x02A0 (size: 0x10)
    TMap<class EInputSource, class TSubclassOf<UUserWidget>> controller ui classes;   // 0x02B0 (size: 0x50)
    TSubclassOf<class UUserWidget> platform controller widget class;                  // 0x0300 (size: 0x8)
    bool closing;                                                                     // 0x0308 (size: 0x1)
    bool do debug print;                                                              // 0x0309 (size: 0x1)
    bool changed something;                                                           // 0x030A (size: 0x1)
    FText footer label activate;                                                      // 0x0310 (size: 0x18)
    FText footer label back;                                                          // 0x0328 (size: 0x18)
    FText footer label toggle;                                                        // 0x0340 (size: 0x18)
    TMap<class UUserWidget*, class TSubclassOf<UUserWidget>> WidgetToPanelMap;        // 0x0358 (size: 0x50)
    bool UpdateMapSetting;                                                            // 0x03A8 (size: 0x1)
    bool UpdateSubtitleSetting;                                                       // 0x03A9 (size: 0x1)

    void handle key up(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle focus(class UUserWidget* Widget, FEventReply& result value);
    void handle key down(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle mouse down(class UUserWidget* Widget, FPointerEvent pointer event, FEventReply& return value);
    void handle toggle activate(class UUserWidget* Widget);
    void SetMenuKeyData(class UWidget* Focused Widget);
    void OnKeyDownFromGameInstance(const FKeyEvent& KeyEvent, bool& Handled);
    void enable focus anims();
    void Focus Default Button();
    void update footer(class UUserWidget* focus widget);
    void do close();
    void do save();
    void is key in set(FKey Key, TArray<FKey>& key set, bool& Result);
    void is activate(FKeyEvent Key, bool& Result);
    void focus widget(class UWidget* Widget);
    void get adjacent widget(class UWidget* widget item, bool prev, class UWidget*& adj widget);
    void is key cancel(FKeyEvent Key, bool& Result);
    void is control down(FKeyEvent Key, bool& Result);
    void is control up(FKeyEvent Key, bool& Result);
    void handle activate(class UUserWidget* Widget);
    void Construct();
    void UI panel set controller(class UObject* panel controller);
    void UI panel close(bool immediate);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void ExecuteUbergraph_UI_Options(int32 EntryPoint);
}; // Size: 0x3AA

#endif
