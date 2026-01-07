#ifndef UE4SS_SDK_UI_Inventory_Gem_HPP
#define UE4SS_SDK_UI_Inventory_Gem_HPP

class UUI_Inventory_Gem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UImage* GemAnimationsRV;                                                    // 0x0210 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0218 (size: 0x8)
    class UTextBlock* Text;                                                           // 0x0220 (size: 0x8)
    class UTextBlock* TextShadow;                                                     // 0x0228 (size: 0x8)
    int32 treasure collected;                                                         // 0x0230 (size: 0x4)
    int32 available treasure;                                                         // 0x0234 (size: 0x4)

    FLinearColor Shadow Color();
    FText GetText_0();
    void OnLoaded_811FFF2843E89835B5AA3E9FE3F59EDE(class UObject* Loaded);
    void Construct();
    void ExecuteUbergraph_UI_Inventory_Gem(int32 EntryPoint);
}; // Size: 0x238

#endif
