#ifndef UE4SS_SDK_BP_TrickWidget_Component_HPP
#define UE4SS_SDK_BP_TrickWidget_Component_HPP

class UBP_TrickWidget_Component_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* Fail;                                                     // 0x0210 (size: 0x8)
    class UWidgetAnimation* go_gold;                                                  // 0x0218 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0220 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0228 (size: 0x8)
    class UTextBlock* Base;                                                           // 0x0230 (size: 0x8)
    class UTextBlock* Shadow;                                                         // 0x0238 (size: 0x8)
    class USpacer* Spacer_ltr;                                                        // 0x0240 (size: 0x8)
    class USpacer* Spacer_rtl;                                                        // 0x0248 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x0250 (size: 0x8)
    class UTextBlock* TextBlock_1;                                                    // 0x0258 (size: 0x8)
    class UTextBlock* TextBlock_2;                                                    // 0x0260 (size: 0x8)
    class UTextBlock* TextBlock_3;                                                    // 0x0268 (size: 0x8)
    class UOverlay* TrickNameLTR;                                                     // 0x0270 (size: 0x8)
    class USizeBox* TrickNameLTRSizeBox;                                              // 0x0278 (size: 0x8)
    class UOverlay* TrickNameRTL;                                                     // 0x0280 (size: 0x8)
    class USizeBox* TrickNameRTLSizeBox;                                              // 0x0288 (size: 0x8)
    FString Trick Component Name;                                                     // 0x0290 (size: 0x10)
    FString Trick Component Count;                                                    // 0x02A0 (size: 0x10)
    ETrickStatus trick status;                                                        // 0x02B0 (size: 0x1)

    void adjust for culture();
    void Construct();
    void go gold();
    void update status();
    void ExecuteUbergraph_BP_TrickWidget_Component(int32 EntryPoint);
}; // Size: 0x2B1

#endif
