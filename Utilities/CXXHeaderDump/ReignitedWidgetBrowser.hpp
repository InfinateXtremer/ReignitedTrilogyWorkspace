#ifndef UE4SS_SDK_ReignitedWidgetBrowser_HPP
#define UE4SS_SDK_ReignitedWidgetBrowser_HPP

class UReignitedWidgetBrowser_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UUI_Cine_TextBlock_C* CineTextBlock;                                        // 0x0210 (size: 0x8)
    class UExpandableArea* ExpandableArea_0;                                          // 0x0218 (size: 0x8)
    class UScrollBox* ScrollBox_0;                                                    // 0x0220 (size: 0x8)
    TArray<class TSubclassOf<UUserWidget>> WidgetList;                                // 0x0228 (size: 0x10)

    void FindUIElements();
    void BndEvt__ExpandableArea_0_K2Node_ComponentBoundEvent_16_OnExpandableAreaExpansionChanged__DelegateSignature(class UExpandableArea* Area, bool bIsExpanded);
    void ExecuteUbergraph_ReignitedWidgetBrowser(int32 EntryPoint);
}; // Size: 0x238

#endif
