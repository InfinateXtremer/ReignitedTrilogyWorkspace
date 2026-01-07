#ifndef UE4SS_SDK_UI_KBMBindingComponent_HPP
#define UE4SS_SDK_UI_KBMBindingComponent_HPP

class UUI_KBMBindingComponent_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* FocusLoop;                                                // 0x0210 (size: 0x8)
    class UWidgetAnimation* BeginFocus;                                               // 0x0218 (size: 0x8)
    class UWidgetAnimation* UnFocused;                                                // 0x0220 (size: 0x8)
    class UOverlay* BindingNameOverlay;                                               // 0x0228 (size: 0x8)
    class USizeBox* BindingNameSizeBox;                                               // 0x0230 (size: 0x8)
    class UUniformGridPanel* BindingsUniformGridPanel;                                // 0x0238 (size: 0x8)
    class UTextBlock* FocusedShadowTextBlock;                                         // 0x0240 (size: 0x8)
    class UTextBlock* FocusedTextBlock;                                               // 0x0248 (size: 0x8)
    class UImage* Glow;                                                               // 0x0250 (size: 0x8)
    class UImage* HL;                                                                 // 0x0258 (size: 0x8)
    class UImage* Left;                                                               // 0x0260 (size: 0x8)
    class UHorizontalBox* MainHorizontalBox;                                          // 0x0268 (size: 0x8)
    class UImage* PrimaryBindingArrowImageArabic;                                     // 0x0270 (size: 0x8)
    class UImage* PrimaryBindingArrowImageWestern;                                    // 0x0278 (size: 0x8)
    class UButton* PrimaryBindingButton;                                              // 0x0280 (size: 0x8)
    class UHorizontalBox* PrimaryBindingHorizontalBox;                                // 0x0288 (size: 0x8)
    class UImage* PrimaryBindingIcon;                                                 // 0x0290 (size: 0x8)
    class UBP_PhasmidKeyboardIconWidget_C* PrimaryBindingKeyboardWidget;              // 0x0298 (size: 0x8)
    class UTextBlock* PrimaryBindingTextBlock;                                        // 0x02A0 (size: 0x8)
    class UWidgetSwitcher* PrimarySwitch;                                             // 0x02A8 (size: 0x8)
    class UImage* Right;                                                              // 0x02B0 (size: 0x8)
    class UOverlay* RootOverlay;                                                      // 0x02B8 (size: 0x8)
    class UImage* SecondaryBindingArrowImageArabic;                                   // 0x02C0 (size: 0x8)
    class UImage* SecondaryBindingArrowImageWestern;                                  // 0x02C8 (size: 0x8)
    class UButton* SecondaryBindingButton;                                            // 0x02D0 (size: 0x8)
    class UHorizontalBox* SecondaryBindingHorizontalBox;                              // 0x02D8 (size: 0x8)
    class UImage* SecondaryBindingIcon;                                               // 0x02E0 (size: 0x8)
    class UBP_PhasmidKeyboardIconWidget_C* SecondaryBindingKeyboardWidget;            // 0x02E8 (size: 0x8)
    class UTextBlock* SecondaryBindingTextBlock;                                      // 0x02F0 (size: 0x8)
    class UWidgetSwitcher* SecondarySwitch;                                           // 0x02F8 (size: 0x8)
    class UTextBlock* UnfocusedShadowTextBlock;                                       // 0x0300 (size: 0x8)
    class UTextBlock* UnfocusedTextBlock;                                             // 0x0308 (size: 0x8)
    class UObject* Controller;                                                        // 0x0310 (size: 0x8)
    bool do debug print;                                                              // 0x0318 (size: 0x1)
    bool allow focus anim;                                                            // 0x0319 (size: 0x1)
    bool focused;                                                                     // 0x031A (size: 0x1)
    bool isPrimaryBindingFocused;                                                     // 0x031B (size: 0x1)
    EPhasmidAction Action;                                                            // 0x031C (size: 0x1)
    int32 WIDGET_SWITCH_ICON;                                                         // 0x0320 (size: 0x4)
    int32 WIDGET_SWITCH_TEXT;                                                         // 0x0324 (size: 0x4)
    int32 WIDGET_SWITCH_KEYBOARD_ICON;                                                // 0x0328 (size: 0x4)
    FText BindingNameText;                                                            // 0x0330 (size: 0x18)
    FFalconKeyData BindingEntryOneData;                                               // 0x0348 (size: 0x70)
    FFalconKeyData BindingEntryTwoData;                                               // 0x03B8 (size: 0x70)

    void ui button get data(FText& Text);
    bool IsLanguageArabic();
    void AdjustForLanguage();
    void HasSecondaryBinding(bool& HasBinding);
    void ResetBindingDataBackToDefault();
    void SetAsWaitingForInput(EKeybindingEntry KeybindingEntry);
    void GetAction(EPhasmidAction& Action);
    void GetIsPrimaryBindingFocused(bool& Result);
    void UpdateBindingFocus(bool isPrimaryBindingFocused);
    void NavRight();
    void NavLeft();
    void SetBindingData(EKeybindingEntry Entry, FFalconKeyData KeyData);
    void SetBindingNameText(FText BindingNameText);
    void DoFocusAnim();
    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void DebugPrint(FText Label);
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void OnLoaded_6D0D00AC4E91F19BE25D499E2E30B0AA(class UObject* Loaded);
    void OnLoaded_5DE2B15E47620D5C916B318E4303D185(class UObject* Loaded);
    void OnLoaded_E7FE917449E85F403272CAB5AD15530F(class UObject* Loaded);
    void OnLoaded_91A8F36942ABA55E2E28AF9C93F207F0(class UObject* Loaded);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void ui button set controller(class UObject* Controller);
    void enable focus anim();
    void enable focus anims();
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnFocusLost(FFocusEvent InFocusEvent);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ui button set disabled(bool Disabled);
    void ui button set text(FText Text);
    void BndEvt__PrimaryBindingButton_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__SecondaryBindingButton_K2Node_ComponentBoundEvent_90_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__PrimaryBindingButton_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__SecondaryBindingButton_K2Node_ComponentBoundEvent_83_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_KBMBindingComponent(int32 EntryPoint);
}; // Size: 0x428

#endif
