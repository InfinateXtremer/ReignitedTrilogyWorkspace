#ifndef UE4SS_SDK_UI_PortalNameWidget_HPP
#define UE4SS_SDK_UI_PortalNameWidget_HPP

class UUI_PortalNameWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0210 (size: 0x8)
    class UTextBlock* traveltext;                                                     // 0x0218 (size: 0x8)
    class UTextBlock* traveltextshadow;                                               // 0x0220 (size: 0x8)
    FString display string;                                                           // 0x0228 (size: 0x10)

    FLinearColor Shadow Color();
    void UI panel set controller(class UObject* panel controller);
    void UI panel close(bool immediate);
    void ExecuteUbergraph_UI_PortalNameWidget(int32 EntryPoint);
}; // Size: 0x238

#endif
