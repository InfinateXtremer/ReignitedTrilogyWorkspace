#ifndef UE4SS_SDK_UI_Arrow_001_DUPL_1_HPP
#define UE4SS_SDK_UI_Arrow_001_DUPL_1_HPP

class UUI_Arrow_001_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* Pressed;                                                  // 0x0210 (size: 0x8)
    class UWidgetAnimation* Able;                                                     // 0x0218 (size: 0x8)
    class UWidgetAnimation* Disabled;                                                 // 0x0220 (size: 0x8)
    class UImage* Arrow;                                                              // 0x0228 (size: 0x8)
    class UBorder* ArrowBorder;                                                       // 0x0230 (size: 0x8)
    class UImage* ArrowHL;                                                            // 0x0238 (size: 0x8)
    class UImage* Base;                                                               // 0x0240 (size: 0x8)
    class UImage* Stroke;                                                             // 0x0248 (size: 0x8)
    class UImage* StrokeHL;                                                           // 0x0250 (size: 0x8)
    class UObject* Controller;                                                        // 0x0258 (size: 0x8)

    void ui button get data(FText& Text);
    FEventReply OnPreviewMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void show pressed();
    void set enabled(bool Enabled);
    void enable focus anims();
    void ui button set disabled(bool Disabled);
    void ui button set text(FText Text);
    void ui button set controller(class UObject* Controller);
    void ExecuteUbergraph_UI_Arrow_001(int32 EntryPoint);
}; // Size: 0x260

#endif
