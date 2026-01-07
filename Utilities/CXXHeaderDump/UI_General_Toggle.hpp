#ifndef UE4SS_SDK_UI_General_Toggle_HPP
#define UE4SS_SDK_UI_General_Toggle_HPP

class UUI_General_Toggle_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* Toggle;                                                   // 0x0210 (size: 0x8)
    class UWidgetAnimation* Disabled;                                                 // 0x0218 (size: 0x8)
    class UWidgetAnimation* FocusLoop;                                                // 0x0220 (size: 0x8)
    class UWidgetAnimation* BeginFocus;                                               // 0x0228 (size: 0x8)
    class UWidgetAnimation* UnFocused;                                                // 0x0230 (size: 0x8)
    class UTextBlock* FocusedDefaultOption;                                           // 0x0238 (size: 0x8)
    class UTextBlock* FocusedDefaultOptionShadow;                                     // 0x0240 (size: 0x8)
    class UTextBlock* FocusedText;                                                    // 0x0248 (size: 0x8)
    class UTextBlock* FocusedTextShadow;                                              // 0x0250 (size: 0x8)
    class UImage* Glow;                                                               // 0x0258 (size: 0x8)
    class UImage* HL;                                                                 // 0x0260 (size: 0x8)
    class USizeBox* LabelSizeBox;                                                     // 0x0268 (size: 0x8)
    class UImage* Left;                                                               // 0x0270 (size: 0x8)
    class UOverlay* Overlay_label_focused;                                            // 0x0278 (size: 0x8)
    class UOverlay* Overlay_label_unfocused;                                          // 0x0280 (size: 0x8)
    class UOverlay* Overlay_Spacer_unfocused;                                         // 0x0288 (size: 0x8)
    class UOverlay* Overlay_value_focused;                                            // 0x0290 (size: 0x8)
    class UOverlay* Overlay_value_unfocused;                                          // 0x0298 (size: 0x8)
    class UOverlay* OverlayText;                                                      // 0x02A0 (size: 0x8)
    class UImage* Right;                                                              // 0x02A8 (size: 0x8)
    class UImage* SparxLeft;                                                          // 0x02B0 (size: 0x8)
    class UTextBlock* UnFocusedDefaultOption;                                         // 0x02B8 (size: 0x8)
    class UTextBlock* UnFocusedDefaultOptionShadow;                                   // 0x02C0 (size: 0x8)
    class UTextBlock* UnFocusedText;                                                  // 0x02C8 (size: 0x8)
    class UTextBlock* UnFocusedTextShadow;                                            // 0x02D0 (size: 0x8)
    FText Label;                                                                      // 0x02D8 (size: 0x18)
    FText Default Option;                                                             // 0x02F0 (size: 0x18)
    FText Alternate Option;                                                           // 0x0308 (size: 0x18)
    bool default selected;                                                            // 0x0320 (size: 0x1)
    class UObject* Controller;                                                        // 0x0328 (size: 0x8)
    FString setting name;                                                             // 0x0330 (size: 0x10)
    FText label template;                                                             // 0x0340 (size: 0x18)
    FString label string;                                                             // 0x0358 (size: 0x10)
    FString option string;                                                            // 0x0368 (size: 0x10)
    bool right to left culture;                                                       // 0x0378 (size: 0x1)
    bool focused;                                                                     // 0x0379 (size: 0x1)
    bool focus anim enabled;                                                          // 0x037A (size: 0x1)
    float WidthOverride;                                                              // 0x037C (size: 0x4)
    bool IsDisabled;                                                                  // 0x0380 (size: 0x1)

    void ui button get data(FText& Text);
    void do focus anim();
    void set label text();
    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    void Get Setting Name(FString& name string);
    FText GetLabelText();
    FLinearColor Shadow Color();
    void is default option selected(bool& return);
    void select default option(bool selected);
    FText get option text();
    void Set Option Text();
    void Do Toggle();
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnLoaded_2FCB194D41A4CA8D8A23238F8EBDD213(class UObject* Loaded);
    void OnLoaded_E8311DEA4BABC4F0ABA0FE9DE80E29E9(class UObject* Loaded);
    void OnLoaded_3946248140D208853674C69ABFB72411(class UObject* Loaded);
    void OnLoaded_3D22426D4C8A8C0655479285082DE191(class UObject* Loaded);
    void Construct();
    void ui button set controller(class UObject* Controller);
    void ui button set disabled(bool Disabled);
    void ui button set text(FText Text);
    void OnFocusLost(FFocusEvent InFocusEvent);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void enable focus anims();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_General_Toggle(int32 EntryPoint);
}; // Size: 0x381

#endif
