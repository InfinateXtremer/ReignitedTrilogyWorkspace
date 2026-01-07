#ifndef UE4SS_SDK_UI_Dialogue_GemTotal_HPP
#define UE4SS_SDK_UI_Dialogue_GemTotal_HPP

class UUI_Dialogue_GemTotal_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UImage* GemAnimationsRV;                                                    // 0x0210 (size: 0x8)
    class UHorizontalBox* HorizontalBox_0;                                            // 0x0218 (size: 0x8)
    class UTextBlock* Number;                                                         // 0x0220 (size: 0x8)
    class UTextBlock* NumberShadow;                                                   // 0x0228 (size: 0x8)
    class USpacer* Spacer_ltr;                                                        // 0x0230 (size: 0x8)
    class USpacer* Spacer_rtl;                                                        // 0x0238 (size: 0x8)
    class UTextBlock* Text_ltr;                                                       // 0x0240 (size: 0x8)
    class UTextBlock* TextBlock_rtl;                                                  // 0x0248 (size: 0x8)

    FLinearColor Shadow Color();
    void OnLoaded_331FCF3C4D7C87598E1BE692382E150B(class UObject* Loaded);
    void Construct();
    void ExecuteUbergraph_UI_Dialogue_GemTotal(int32 EntryPoint);
}; // Size: 0x250

#endif
