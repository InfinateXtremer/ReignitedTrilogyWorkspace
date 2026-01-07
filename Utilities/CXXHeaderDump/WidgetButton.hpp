#ifndef UE4SS_SDK_WidgetButton_HPP
#define UE4SS_SDK_WidgetButton_HPP

class UWidgetButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UButton* Button_0;                                                          // 0x0210 (size: 0x8)
    class UUI_Cine_TextBlock_C* CineTextBlock;                                        // 0x0218 (size: 0x8)
    class UUserWidget* Widget;                                                        // 0x0220 (size: 0x8)
    class UReignitedWidgetBrowser_C* UI;                                              // 0x0228 (size: 0x8)
    TSubclassOf<class UUserWidget> UserWidgetClass;                                   // 0x0230 (size: 0x8)

    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ToggleDisplay();
    void ExecuteUbergraph_WidgetButton(int32 EntryPoint);
}; // Size: 0x238

#endif
