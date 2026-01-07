#ifndef UE4SS_SDK_UI_SystemOptions_HPP
#define UE4SS_SDK_UI_SystemOptions_HPP

class UUI_SystemOptions_C : public UFalconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0218 (size: 0x8)
    class UUI_Pause_Button_C* GraphicsBtnWBP;                                         // 0x0220 (size: 0x8)
    class UVerticalBox* ItemsVerticalBox;                                             // 0x0228 (size: 0x8)
    class UUI_Pause_Button_C* KeyboardControlsBtnWBP;                                 // 0x0230 (size: 0x8)
    FString menu key;                                                                 // 0x0238 (size: 0x10)
    bool closing;                                                                     // 0x0248 (size: 0x1)
    FText FooterSelectText;                                                           // 0x0250 (size: 0x18)
    FText FooterBackText;                                                             // 0x0268 (size: 0x18)
    FText KeyboardControlsBtnText;                                                    // 0x0280 (size: 0x18)
    FText GraphicsBtnTxt;                                                             // 0x0298 (size: 0x18)

    void handle key up(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle focus(class UUserWidget* Widget, FEventReply& result value);
    void handle key down(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle mouse down(class UUserWidget* Widget, FPointerEvent pointer event, FEventReply& return value);
    void SetMenuKeyData(class UWidget* Focused Widget);
    void CloseMenu();
    void ShowFooter(bool Show);
    void OnKeyDownFromGameInstance(const FKeyEvent& KeyEvent, bool& Handled);
    void EnableButtonFocusAnims();
    void SelectDefaultFocus();
    void SetWidgetFocused(class UWidget* Widget);
    void GetAdjacentWidget(class UWidget* Widget, bool prev, class UWidget*& adj widget);
    void HandleActivate(class UUserWidget* Widget);
    void UI panel set controller(class UObject* panel controller);
    void UI panel close(bool immediate);
    void Construct();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void ExecuteUbergraph_UI_SystemOptions(int32 EntryPoint);
}; // Size: 0x2B0

#endif
