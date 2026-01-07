#ifndef UE4SS_SDK_UI_MenuHeader_HPP
#define UE4SS_SDK_UI_MenuHeader_HPP

class UUI_MenuHeader_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UTextBlock* Base;                                                           // 0x0210 (size: 0x8)
    class UTextBlock* Shadow;                                                         // 0x0218 (size: 0x8)
    FText Header;                                                                     // 0x0220 (size: 0x18)

    FLinearColor Shadow Color();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_UI_MenuHeader(int32 EntryPoint);
}; // Size: 0x238

#endif
