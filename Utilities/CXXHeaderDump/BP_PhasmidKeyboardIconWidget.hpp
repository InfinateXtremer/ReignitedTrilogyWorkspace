#ifndef UE4SS_SDK_BP_PhasmidKeyboardIconWidget_HPP
#define UE4SS_SDK_BP_PhasmidKeyboardIconWidget_HPP

class UBP_PhasmidKeyboardIconWidget_C : public UPhasmidKeyboardIconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0210 (size: 0x8)
    class UTextBlock* KeyText;                                                        // 0x0218 (size: 0x8)

    void SetKeyForIconText(FKey Key);
    void SetSize(FVector2D NewSize);
    void ExecuteUbergraph_BP_PhasmidKeyboardIconWidget(int32 EntryPoint);
}; // Size: 0x220

#endif
