#ifndef UE4SS_SDK_UI_Inventory_Talisman_HPP
#define UE4SS_SDK_UI_Inventory_Talisman_HPP

class UUI_Inventory_Talisman_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UBorder* Border_0;                                                          // 0x0210 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0218 (size: 0x8)
    class UImage* Color;                                                              // 0x0220 (size: 0x8)
    class UHorizontalBox* FoundHorizontalBox;                                         // 0x0228 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0230 (size: 0x8)
    class UHorizontalBox* LostHorizontalBox;                                          // 0x0238 (size: 0x8)
    class UImage* Shadow;                                                             // 0x0240 (size: 0x8)
    class UTextBlock* talisman;                                                       // 0x0248 (size: 0x8)
    class UTextBlock* TalismanName;                                                   // 0x0250 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x0258 (size: 0x8)
    class UTextBlock* TextBlock_4;                                                    // 0x0260 (size: 0x8)
    class UTextBlock* TextBlock_5;                                                    // 0x0268 (size: 0x8)
    bool collected;                                                                   // 0x0270 (size: 0x1)
    FText status text;                                                                // 0x0278 (size: 0x18)

    FLinearColor Outline Color();
    FLinearColor Shadow Color();
    FText GetText_0();
    void OnLoaded_8FFA09E04EAF4494DFF959AA18ED3958(class UObject* Loaded);
    void OnLoaded_7E3D492E4EDFF9AB4EBE4797FB66BCB1(class UObject* Loaded);
    void Construct();
    void set talisman name(FString talisman name);
    void Destruct();
    void ExecuteUbergraph_UI_Inventory_Talisman(int32 EntryPoint);
}; // Size: 0x290

#endif
