#ifndef UE4SS_SDK_UI_Difficulty_HPP
#define UE4SS_SDK_UI_Difficulty_HPP

class UUI_Difficulty_C : public UFalconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UWidgetAnimation* TextFadeInOnButtonBeginFocus;                             // 0x0218 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0220 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0228 (size: 0x8)
    class UHorizontalBox* ButtonHBOX;                                                 // 0x0230 (size: 0x8)
    class UTextBlock* DescriptionText;                                                // 0x0238 (size: 0x8)
    class UUI_Difficulty_Button_C* Easy;                                              // 0x0240 (size: 0x8)
    class UUI_Difficulty_Button_C* Hard;                                              // 0x0248 (size: 0x8)
    class UUI_Difficulty_Button_C* Nightmare;                                         // 0x0250 (size: 0x8)
    class UUI_Difficulty_Button_C* Normal;                                            // 0x0258 (size: 0x8)
    class UUI_Container_001_C* UI_Container_001;                                      // 0x0260 (size: 0x8)
    class UUI_Container_002_C* UI_Container_002;                                      // 0x0268 (size: 0x8)
    class UUI_MenuHeader_C* UI_MenuHeader;                                            // 0x0270 (size: 0x8)
    class UUI_Title_Background_C* UI_Title_Background;                                // 0x0278 (size: 0x8)
    bool Active;                                                                      // 0x0280 (size: 0x1)
    FText description text;                                                           // 0x0288 (size: 0x18)
    bool Cancelled;                                                                   // 0x02A0 (size: 0x1)
    FText are you sure text;                                                          // 0x02A8 (size: 0x18)
    FText yes;                                                                        // 0x02C0 (size: 0x18)
    FText no;                                                                         // 0x02D8 (size: 0x18)
    class UUserWidget* focus widget;                                                  // 0x02F0 (size: 0x8)

    void handle key up(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle focus(class UUserWidget* Widget, FEventReply& result value);
    void handle key down(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle mouse down(class UUserWidget* Widget, FPointerEvent pointer event, FEventReply& return value);
    void OnKeyDownFromGameInstance(const FKeyEvent& KeyEvent, bool& Handled);
    void show footer(bool Show);
    void handle navigate(class UUserWidget* user widget, bool Forward);
    void handle activate(class UUserWidget* user widget);
    void handle cancel();
    void panel button handle configure(FpanelButtonData button data);
    void panel button handle activate(FpanelButtonData button data);
    void Construct();
    void HideScreen(bool immediate);
    void ShowScreen();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void question menu - response(int32 button clicked index);
    void ExecuteUbergraph_UI_Difficulty(int32 EntryPoint);
}; // Size: 0x2F8

#endif
