#ifndef UE4SS_SDK_UI_ScreenshotPanel_HPP
#define UE4SS_SDK_UI_ScreenshotPanel_HPP

class UUI_ScreenshotPanel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UButton* Button_55;                                                         // 0x0210 (size: 0x8)
    class UButton* Button_107;                                                        // 0x0218 (size: 0x8)
    class UButton* Button_108;                                                        // 0x0220 (size: 0x8)
    class UExpandableArea* ExpandableArea_0;                                          // 0x0228 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock;                                     // 0x0230 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock_C_0;                                 // 0x0238 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock_C_1;                                 // 0x0240 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock_C_3;                                 // 0x0248 (size: 0x8)
    class UEditableText* xVal;                                                        // 0x0250 (size: 0x8)
    class UEditableText* yVal;                                                        // 0x0258 (size: 0x8)

    bool GetbIsEnabled_0();
    void BndEvt__Button_55_K2Node_ComponentBoundEvent_165_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_107_K2Node_ComponentBoundEvent_182_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_108_K2Node_ComponentBoundEvent_269_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_ScreenshotPanel(int32 EntryPoint);
}; // Size: 0x260

#endif
