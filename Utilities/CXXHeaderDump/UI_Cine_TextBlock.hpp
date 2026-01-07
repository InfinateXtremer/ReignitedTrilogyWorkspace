#ifndef UE4SS_SDK_UI_Cine_TextBlock_HPP
#define UE4SS_SDK_UI_Cine_TextBlock_HPP

class UUI_Cine_TextBlock_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x0210 (size: 0x8)
    FText Text;                                                                       // 0x0218 (size: 0x18)
    TEnumAsByte<ETextTypes::Type> TextType;                                           // 0x0230 (size: 0x1)
    TEnumAsByte<ETextJustify::Type> TextJustification;                                // 0x0231 (size: 0x1)
    int32 OverrideTextSize;                                                           // 0x0234 (size: 0x4)
    FFontOutlineSettings OutlineSettings;                                             // 0x0238 (size: 0x28)

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void UpdateText(FText TextVariable);
    void ExecuteUbergraph_UI_Cine_TextBlock(int32 EntryPoint);
}; // Size: 0x260

#endif
