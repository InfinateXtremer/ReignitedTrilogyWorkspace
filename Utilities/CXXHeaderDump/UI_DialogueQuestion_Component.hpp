#ifndef UE4SS_SDK_UI_DialogueQuestion_Component_HPP
#define UE4SS_SDK_UI_DialogueQuestion_Component_HPP

class UUI_DialogueQuestion_Component_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* Disabled;                                                 // 0x0210 (size: 0x8)
    class UWidgetAnimation* FocusLoop;                                                // 0x0218 (size: 0x8)
    class UWidgetAnimation* BeginFocus;                                               // 0x0220 (size: 0x8)
    class UWidgetAnimation* UnFocused;                                                // 0x0228 (size: 0x8)
    class UTextBlock* FocusedText;                                                    // 0x0230 (size: 0x8)
    class UImage* Glow;                                                               // 0x0238 (size: 0x8)
    class UImage* HL;                                                                 // 0x0240 (size: 0x8)
    class UImage* Left;                                                               // 0x0248 (size: 0x8)
    class UOverlay* Overlay_0;                                                        // 0x0250 (size: 0x8)
    class UScaleBox* ScaleBox_6;                                                      // 0x0258 (size: 0x8)
    class USizeBox* SizeBox_1;                                                        // 0x0260 (size: 0x8)
    class UTextBlock* UnFocusedText;                                                  // 0x0268 (size: 0x8)
    FText Text;                                                                       // 0x0270 (size: 0x18)
    class UObject* Controller;                                                        // 0x0288 (size: 0x8)
    bool is disabled;                                                                 // 0x0290 (size: 0x1)
    bool do debug print;                                                              // 0x0291 (size: 0x1)

    void ui button get data(FText& Text);
    void adjust for RTL culture();
    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    FLinearColor Shadow Color();
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void debug print(FText Label);
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void ui button set disabled(bool Disabled);
    void enable focus anims();
    void Construct();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void ui button set controller(class UObject* Controller);
    void ui button set text(FText Text);
    void ExecuteUbergraph_UI_DialogueQuestion_Component(int32 EntryPoint);
}; // Size: 0x292

#endif
