#ifndef UE4SS_SDK_UI_MultiToggle_HPP
#define UE4SS_SDK_UI_MultiToggle_HPP

class UUI_MultiToggle_C : public UFalconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UWidgetAnimation* NavLeftAnim;                                              // 0x0218 (size: 0x8)
    class UWidgetAnimation* Disabled;                                                 // 0x0220 (size: 0x8)
    class UWidgetAnimation* FocusLoop;                                                // 0x0228 (size: 0x8)
    class UWidgetAnimation* BeginFocus;                                               // 0x0230 (size: 0x8)
    class UWidgetAnimation* UnFocused;                                                // 0x0238 (size: 0x8)
    class UTextBlock* FocusedLabelText;                                               // 0x0240 (size: 0x8)
    class UTextBlock* FocusedLabelTextShadow;                                         // 0x0248 (size: 0x8)
    class UTextBlock* FocusedOptionText;                                              // 0x0250 (size: 0x8)
    class UTextBlock* FocusedOptionTextShadow;                                        // 0x0258 (size: 0x8)
    class USizeBox* LabelSizeBox;                                                     // 0x0260 (size: 0x8)
    class UUI_Arrow_001_C* LeftArrow;                                                 // 0x0268 (size: 0x8)
    class UOverlay* MainOverlay;                                                      // 0x0270 (size: 0x8)
    class UHorizontalBox* OptionsHorizontalBox;                                       // 0x0278 (size: 0x8)
    class UUI_Arrow_001_C* RightArrow;                                                // 0x0280 (size: 0x8)
    class UHorizontalBox* TextHorizontalBox;                                          // 0x0288 (size: 0x8)
    class UTextBlock* UnFocusedLabelText;                                             // 0x0290 (size: 0x8)
    class UTextBlock* UnFocusedLabelTextShadow;                                       // 0x0298 (size: 0x8)
    class UTextBlock* UnFocusedOptionText;                                            // 0x02A0 (size: 0x8)
    class UTextBlock* UnFocusedOptionTextShadow;                                      // 0x02A8 (size: 0x8)
    class UObject* Controller;                                                        // 0x02B0 (size: 0x8)
    float Value;                                                                      // 0x02B8 (size: 0x4)
    bool IsFocused;                                                                   // 0x02BC (size: 0x1)
    float max value;                                                                  // 0x02C0 (size: 0x4)
    float increment;                                                                  // 0x02C4 (size: 0x4)
    FText LabelText;                                                                  // 0x02C8 (size: 0x18)
    bool IsFocusAnimEnabled;                                                          // 0x02E0 (size: 0x1)
    TArray<FText> Options;                                                            // 0x02E8 (size: 0x10)
    int32 CurrentOptionIndex;                                                         // 0x02F8 (size: 0x4)
    bool IsDisabled;                                                                  // 0x02FC (size: 0x1)
    bool SettingSaved;                                                                // 0x02FD (size: 0x1)
    int32 SavedOptionIndex;                                                           // 0x0300 (size: 0x4)

    void handle key up(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle focus(class UUserWidget* Widget, FEventReply& result value);
    void handle key down(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle mouse down(class UUserWidget* Widget, FPointerEvent pointer event, FEventReply& return value);
    void ui button get data(FText& Text);
    void AdjustForCulture();
    void HandleDisable(bool Disabled);
    void GetSavedOption(int32& Index);
    void SetCurrentOption(int32 CurrentOptionIndex);
    void SetIsSettingSaved(bool IsSaved);
    void GetIsSettingSaved(bool& SettingChanged);
    void SetOptions(TArray<FText>& Options, int32 CurrentOptionIndex);
    FText GetCurrentOptionText();
    void GetCurrentOption(int32& Index);
    void UpdateOptionText();
    void DoFocusAnim();
    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    void HandleActivate(bool Left);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void ui button set controller(class UObject* Controller);
    void OnFocusLost(FFocusEvent InFocusEvent);
    void enable focus anims();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ui button set disabled(bool Disabled);
    void ui button set text(FText Text);
    void UpdateOptionTextEvent();
    void ExecuteUbergraph_UI_MultiToggle(int32 EntryPoint);
}; // Size: 0x304

#endif
