#ifndef UE4SS_SDK_UI_MovieTheatre_Component_HPP
#define UE4SS_SDK_UI_MovieTheatre_Component_HPP

class UUI_MovieTheatre_Component_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* FocusLoop;                                                // 0x0210 (size: 0x8)
    class UWidgetAnimation* BeginFocus;                                               // 0x0218 (size: 0x8)
    class UWidgetAnimation* UnFocused;                                                // 0x0220 (size: 0x8)
    class UTextBlock* FocusedText;                                                    // 0x0228 (size: 0x8)
    class UImage* Glow;                                                               // 0x0230 (size: 0x8)
    class UImage* HL;                                                                 // 0x0238 (size: 0x8)
    class UTextBlock* UnFocusedText;                                                  // 0x0240 (size: 0x8)
    FString Text;                                                                     // 0x0248 (size: 0x10)
    bool focused;                                                                     // 0x0258 (size: 0x1)
    class UObject* Controller;                                                        // 0x0260 (size: 0x8)

    void ui button get data(FText& Text);
    void handle focused();
    void handle activate();
    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void ui button set disabled(bool Disabled);
    void enable focus anims();
    void Construct();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnFocusLost(FFocusEvent InFocusEvent);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void ui button set controller(class UObject* Controller);
    void ui button set text(FText Text);
    void ExecuteUbergraph_UI_MovieTheatre_Component(int32 EntryPoint);
}; // Size: 0x268

#endif
