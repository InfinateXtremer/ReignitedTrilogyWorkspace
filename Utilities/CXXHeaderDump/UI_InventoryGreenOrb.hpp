#ifndef UE4SS_SDK_UI_InventoryGreenOrb_HPP
#define UE4SS_SDK_UI_InventoryGreenOrb_HPP

class UUI_InventoryGreenOrb_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UImage* baseimage;                                                          // 0x0210 (size: 0x8)
    class UTextBlock* found;                                                          // 0x0218 (size: 0x8)
    class UImage* gloweffect;                                                         // 0x0220 (size: 0x8)
    class UOverlay* IconFound;                                                        // 0x0228 (size: 0x8)
    class UOverlay* IconLost;                                                         // 0x0230 (size: 0x8)
    class UTextBlock* Lost;                                                           // 0x0238 (size: 0x8)
    class UImage* outline;                                                            // 0x0240 (size: 0x8)
    class UImage* Shadow;                                                             // 0x0248 (size: 0x8)
    class UImage* toplayer;                                                           // 0x0250 (size: 0x8)
    FText found text;                                                                 // 0x0258 (size: 0x18)
    FText lost text;                                                                  // 0x0270 (size: 0x18)
    bool collected;                                                                   // 0x0288 (size: 0x1)

    FLinearColor Outline Color();
    ESlateVisibility Get_Lost_Visibility_0();
    ESlateVisibility Get_Found_Visibility_0();
    void Initialize(FString found, FString not found, bool collected);
    void ExecuteUbergraph_UI_InventoryGreenOrb(int32 EntryPoint);
}; // Size: 0x289

#endif
