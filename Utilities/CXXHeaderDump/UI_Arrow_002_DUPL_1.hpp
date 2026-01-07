#ifndef UE4SS_SDK_UI_Arrow_002_DUPL_1_HPP
#define UE4SS_SDK_UI_Arrow_002_DUPL_1_HPP

class UUI_Arrow_002_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* OnHovered;                                                // 0x0210 (size: 0x8)
    class UWidgetAnimation* Disabled;                                                 // 0x0218 (size: 0x8)
    class UImage* Color;                                                              // 0x0220 (size: 0x8)
    class UObject* Controller;                                                        // 0x0228 (size: 0x8)

    void ui button get data(FText& Text);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void ui button set text(FText Text);
    void ui button set disabled(bool Disabled);
    void enable focus anims();
    void ui button set controller(class UObject* Controller);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_UI_Arrow_002(int32 EntryPoint);
}; // Size: 0x230

#endif
