#ifndef UE4SS_SDK_panelButtonWidget_HPP
#define UE4SS_SDK_panelButtonWidget_HPP

class UpanelButtonWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* Pressed;                                                  // 0x0210 (size: 0x8)
    class UBorder* Background;                                                        // 0x0218 (size: 0x8)
    class UTextBlock* Label;                                                          // 0x0220 (size: 0x8)
    FpanelButtonData button data;                                                     // 0x0228 (size: 0x50)
    bool debug print;                                                                 // 0x0278 (size: 0x1)
    FLinearColor focused background brush color;                                      // 0x027C (size: 0x10)
    FLinearColor unfocused background brush color;                                    // 0x028C (size: 0x10)

    void button widget get data(FpanelButtonData& button data);
    void show pressed();
    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    void play focus sound();
    void play key down sound();
    FText Get_label_Text();
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void OnFocusLost(FFocusEvent InFocusEvent);
    void button widget configure(class UObject* Owner, FpanelButtonDef button def);
    void button widget update label(FString Label);
    void ExecuteUbergraph_panelButtonWidget(int32 EntryPoint);
}; // Size: 0x29C

#endif
