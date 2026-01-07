#ifndef UE4SS_SDK_UI_Footer_Component_HPP
#define UE4SS_SDK_UI_Footer_Component_HPP

class UUI_Footer_Component_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0210 (size: 0x8)
    class UTextBlock* KeyboardCommand;                                                // 0x0218 (size: 0x8)
    class UBP_PhasmidKeyboardIconWidget_C* KeyboardIconWidget;                        // 0x0220 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x0228 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_0;                                          // 0x0230 (size: 0x8)
    TEnumAsByte<EMenuControls::Type> Control;                                         // 0x0238 (size: 0x1)
    FMenuControl control table row;                                                   // 0x0240 (size: 0x30)
    FString control string;                                                           // 0x0270 (size: 0x10)
    bool BeingHeld;                                                                   // 0x0280 (size: 0x1)
    float TimeHeld;                                                                   // 0x0284 (size: 0x4)
    float TimeToWaitForHolding;                                                       // 0x0288 (size: 0x4)
    bool EveryOtherFrame;                                                             // 0x028C (size: 0x1)

    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void get control(TEnumAsByte<EMenuControls::Type>& control type);
    void entry configure(TEnumAsByte<EMenuControls::Type> Control, FString Label);
    void HandleOnNewInputSource(EInputSource NewInputSource);
    void UpdateIcon();
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UI_Footer_Component(int32 EntryPoint);
}; // Size: 0x28D

#endif
