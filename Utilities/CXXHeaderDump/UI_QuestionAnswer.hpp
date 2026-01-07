#ifndef UE4SS_SDK_UI_QuestionAnswer_HPP
#define UE4SS_SDK_UI_QuestionAnswer_HPP

class UUI_QuestionAnswer_C : public UFalconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0218 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0220 (size: 0x8)
    class UImage* Background;                                                         // 0x0228 (size: 0x8)
    class UImage* blackbase;                                                          // 0x0230 (size: 0x8)
    class UTextBlock* CountdownText;                                                  // 0x0238 (size: 0x8)
    class UOverlay* Overlay_0;                                                        // 0x0240 (size: 0x8)
    class UTextBlock* text-question;                                                  // 0x0248 (size: 0x8)
    class UUI_Container_001_C* UI_Container_001_57;                                   // 0x0250 (size: 0x8)
    class UUI_Container_002_C* UI_Container_002;                                      // 0x0258 (size: 0x8)
    class UUI_QuestionAnswer_Button_C* UI_QuestionAnswer_Button_1;                    // 0x0260 (size: 0x8)
    class UUI_QuestionAnswer_Button_C* UI_QuestionAnswer_Button_2;                    // 0x0268 (size: 0x8)
    bool default is 2nd;                                                              // 0x0270 (size: 0x1)
    class UObject* Controller;                                                        // 0x0278 (size: 0x8)
    bool Activated;                                                                   // 0x0280 (size: 0x1)
    FText menu select;                                                                // 0x0288 (size: 0x18)
    FText menu back;                                                                  // 0x02A0 (size: 0x18)
    FString button label 2;                                                           // 0x02B8 (size: 0x10)
    FString button label 1;                                                           // 0x02C8 (size: 0x10)
    FString question string;                                                          // 0x02D8 (size: 0x10)
    bool got 2 buttons;                                                               // 0x02E8 (size: 0x1)
    FText default label;                                                              // 0x02F0 (size: 0x18)
    bool is falcon callback;                                                          // 0x0308 (size: 0x1)
    bool IsCountdownVisible;                                                          // 0x0309 (size: 0x1)
    FTimerHandle CountdownTimerHandle;                                                // 0x0310 (size: 0x8)

    void handle key up(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle focus(class UUserWidget* Widget, FEventReply& result value);
    void handle key down(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle mouse down(class UUserWidget* Widget, FPointerEvent pointer event, FEventReply& return value);
    void CountdownFinished();
    void UpdateCountdown();
    void OnKeyDownFromGameInstance(const FKeyEvent& KeyEvent, bool& Handled);
    void give button the focus();
    FFalconScreenConfigData QueryScreen(const FFalconScreenConfigData configData);
    void send response(int32 selected);
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    void determine button count();
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void configure button(FString button label, class UUI_QuestionAnswer_Button_C* Button);
    void show footer(bool do show);
    void handle activate button(class UUserWidget* Widget);
    void OnLoaded_8B3E4E2345371B41C2501E83CC37F4D1(class UObject* Loaded);
    void question menu - config(FString question, FString button 1 label, FString button 2 label, bool button 2 is default, class UObject* Controller, bool ShowCountdown);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void Construct();
    void UI panel close(bool immediate);
    void UI panel set controller(class UObject* panel controller);
    void HideScreen(bool immediate);
    void ConfigScreen(const class UFalconScreenConfigObject* configData);
    void ExecuteUbergraph_UI_QuestionAnswer(int32 EntryPoint);
}; // Size: 0x318

#endif
