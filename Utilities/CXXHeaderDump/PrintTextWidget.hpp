#ifndef UE4SS_SDK_PrintTextWidget_HPP
#define UE4SS_SDK_PrintTextWidget_HPP

class UPrintTextWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x0210 (size: 0x8)
    FString inString;                                                                 // 0x0218 (size: 0x10)
    FLinearColor TextColor;                                                           // 0x0228 (size: 0x10)
    float Duration;                                                                   // 0x0238 (size: 0x4)

    FSlateColor GetColorAndOpacity_0();
    void Construct();
    void ExecuteUbergraph_PrintTextWidget(int32 EntryPoint);
}; // Size: 0x23C

#endif
