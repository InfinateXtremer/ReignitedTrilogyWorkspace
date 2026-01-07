#ifndef UE4SS_SDK_UI_InventoryLevelList_Component_HPP
#define UE4SS_SDK_UI_InventoryLevelList_Component_HPP

class UUI_InventoryLevelList_Component_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* Disabled;                                                 // 0x0210 (size: 0x8)
    class UWidgetAnimation* FocusLoop;                                                // 0x0218 (size: 0x8)
    class UWidgetAnimation* BeginFocus;                                               // 0x0220 (size: 0x8)
    class UWidgetAnimation* UnFocused;                                                // 0x0228 (size: 0x8)
    class UImage* Arrow;                                                              // 0x0230 (size: 0x8)
    class UImage* ArrowHL;                                                            // 0x0238 (size: 0x8)
    class UImage* Base;                                                               // 0x0240 (size: 0x8)
    class UTextBlock* DisabledText;                                                   // 0x0248 (size: 0x8)
    class UTextBlock* DisabledTextPercent;                                            // 0x0250 (size: 0x8)
    class UImage* FillImage;                                                          // 0x0258 (size: 0x8)
    class UTextBlock* FocusedText;                                                    // 0x0260 (size: 0x8)
    class UTextBlock* FocusTextPercent;                                               // 0x0268 (size: 0x8)
    class UImage* Glow;                                                               // 0x0270 (size: 0x8)
    class UImage* HL;                                                                 // 0x0278 (size: 0x8)
    class UOverlay* SpyroMarker;                                                      // 0x0280 (size: 0x8)
    class UTextBlock* UnFocusedText;                                                  // 0x0288 (size: 0x8)
    class UTextBlock* UnFocusedTextPercent;                                           // 0x0290 (size: 0x8)
    FText Text;                                                                       // 0x0298 (size: 0x18)
    class UObject* Controller;                                                        // 0x02B0 (size: 0x8)
    FText display text;                                                               // 0x02B8 (size: 0x18)
    FText completion pct;                                                             // 0x02D0 (size: 0x18)

    void ui button get data(FText& Text);
    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    void set display text(FText& InText);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void enable focus anims();
    void Construct();
    void ui button set controller(class UObject* Controller);
    void ui button set text(FText Text);
    void ui button set disabled(bool Disabled);
    void OnFocusLost(FFocusEvent InFocusEvent);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void set current level(bool is current);
    void ExecuteUbergraph_UI_InventoryLevelList_Component(int32 EntryPoint);
}; // Size: 0x2E8

#endif
