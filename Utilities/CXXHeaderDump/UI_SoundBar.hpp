#ifndef UE4SS_SDK_UI_SoundBar_HPP
#define UE4SS_SDK_UI_SoundBar_HPP

class UUI_SoundBar_C : public UFalconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UWidgetAnimation* BarProgress;                                              // 0x0218 (size: 0x8)
    class UWidgetAnimation* Disabled;                                                 // 0x0220 (size: 0x8)
    class UWidgetAnimation* FocusLoop;                                                // 0x0228 (size: 0x8)
    class UWidgetAnimation* BeginFocus;                                               // 0x0230 (size: 0x8)
    class UWidgetAnimation* UnFocused;                                                // 0x0238 (size: 0x8)
    class UImage* bar;                                                                // 0x0240 (size: 0x8)
    class UBorder* BarBorder;                                                         // 0x0248 (size: 0x8)
    class UImage* Base;                                                               // 0x0250 (size: 0x8)
    class UTextBlock* FocusedText;                                                    // 0x0258 (size: 0x8)
    class UTextBlock* FocusedTextShadow;                                              // 0x0260 (size: 0x8)
    class UImage* Glow;                                                               // 0x0268 (size: 0x8)
    class UImage* HL;                                                                 // 0x0270 (size: 0x8)
    class UImage* HLBase;                                                             // 0x0278 (size: 0x8)
    class UUI_Arrow_001_C* LeftArrow;                                                 // 0x0280 (size: 0x8)
    class UUI_Arrow_001_C* RightArrow;                                                // 0x0288 (size: 0x8)
    class UUI_SliderToggle_C* SliderToggle;                                           // 0x0290 (size: 0x8)
    class UImage* Stroke;                                                             // 0x0298 (size: 0x8)
    class UImage* StrokeGlow;                                                         // 0x02A0 (size: 0x8)
    class UImage* StrokeHL;                                                           // 0x02A8 (size: 0x8)
    class UTextBlock* UnFocusedText;                                                  // 0x02B0 (size: 0x8)
    class UTextBlock* UnFocusedTextShadow;                                            // 0x02B8 (size: 0x8)
    class UObject* Controller;                                                        // 0x02C0 (size: 0x8)
    float Value;                                                                      // 0x02C8 (size: 0x4)
    bool focused;                                                                     // 0x02CC (size: 0x1)
    float max value;                                                                  // 0x02D0 (size: 0x4)
    float increment;                                                                  // 0x02D4 (size: 0x4)
    FText Text;                                                                       // 0x02D8 (size: 0x18)
    bool focus anim enabled;                                                          // 0x02F0 (size: 0x1)

    void handle key up(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle focus(class UUserWidget* Widget, FEventReply& result value);
    void handle key down(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle mouse down(class UUserWidget* Widget, FPointerEvent pointer event, FEventReply& return value);
    void ui button get data(FText& Text);
    void Set Value From Audio Bar(float New Value);
    void On Audio Slider Bar Clicked(FGeometry MyGeometry, const FPointerEvent& MouseEvent, FEventReply& return value);
    void OnMouseButtonUpFromGameInstance(const FKey& MouseKey, bool& Handled);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void Is At Min Value(bool& Value);
    void Is At Max Value(bool& Value);
    void do focus anim();
    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    FLinearColor Shadow Color();
    FText Get_VolumeNumber_Text_0();
    void set bar position();
    void handle activate(bool Left, bool animate button);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void ui button set text(FText Text);
    void ui button set disabled(bool Disabled);
    void Construct();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void ui button set controller(class UObject* Controller);
    void OnFocusLost(FFocusEvent InFocusEvent);
    void set value(float Value);
    void enable focus anims();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UI_SoundBar(int32 EntryPoint);
}; // Size: 0x2F1

#endif
