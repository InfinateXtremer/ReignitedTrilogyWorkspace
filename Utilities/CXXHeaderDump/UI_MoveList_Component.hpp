#ifndef UE4SS_SDK_UI_MoveList_Component_HPP
#define UE4SS_SDK_UI_MoveList_Component_HPP

class UUI_MoveList_Component_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UImage* Image_ltr;                                                          // 0x0210 (size: 0x8)
    class UImage* Image_rtl;                                                          // 0x0218 (size: 0x8)
    class UPhasmidRichTextBox* PhasmidRichTextBox_0;                                  // 0x0220 (size: 0x8)
    class UTextBlock* TextBlock_ltr;                                                  // 0x0228 (size: 0x8)
    class UTextBlock* TextBlock_rtl;                                                  // 0x0230 (size: 0x8)
    FText Action;                                                                     // 0x0238 (size: 0x18)
    FText button presses;                                                             // 0x0250 (size: 0x18)

    void Construct();
    void ExecuteUbergraph_UI_MoveList_Component(int32 EntryPoint);
}; // Size: 0x268

#endif
