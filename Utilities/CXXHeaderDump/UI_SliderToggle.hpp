#ifndef UE4SS_SDK_UI_SliderToggle_HPP
#define UE4SS_SDK_UI_SliderToggle_HPP

class UUI_SliderToggle_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UTextBlock* VolumeNumber;                                                   // 0x0210 (size: 0x8)
    class UObject* Controller;                                                        // 0x0218 (size: 0x8)
    bool Clicked;                                                                     // 0x0220 (size: 0x1)
    float Distance To Toggle One Value;                                               // 0x0224 (size: 0x4)
    float PreviousMouseX;                                                             // 0x0228 (size: 0x4)
    float CurrentMouseX;                                                              // 0x022C (size: 0x4)
    class UUI_SoundBar_C* SoundBar;                                                   // 0x0230 (size: 0x8)
    FSlateColor NormalColor;                                                          // 0x0238 (size: 0x28)
    FSlateColor HoveredColor;                                                         // 0x0260 (size: 0x28)
    FSlateColor ClickedColor;                                                         // 0x0288 (size: 0x28)

    void ui button get data(FText& Text);
    void Is Functionally Under Mouse(bool& Is Under Mouse);
    void Scrub Audio Slider(FGeometry WidgetGeometry);
    void Receive Mouse Button Down(FEventReply& Reply);
    FSlateColor GetSliderTextColor();
    void ParentLostFocus();
    void SetVolumeNumber(float New Volume);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void ui button set text(FText Text);
    void ui button set disabled(bool Disabled);
    void enable focus anims();
    void ui button set controller(class UObject* Controller);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UI_SliderToggle(int32 EntryPoint);
}; // Size: 0x2B0

#endif
