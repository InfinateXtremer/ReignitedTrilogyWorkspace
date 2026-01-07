#ifndef UE4SS_SDK_UI_Pause_Button_HPP
#define UE4SS_SDK_UI_Pause_Button_HPP

class UUI_Pause_Button_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* Disabled;                                                 // 0x0210 (size: 0x8)
    class UWidgetAnimation* FocusLoop;                                                // 0x0218 (size: 0x8)
    class UWidgetAnimation* BeginFocus;                                               // 0x0220 (size: 0x8)
    class UWidgetAnimation* UnFocused;                                                // 0x0228 (size: 0x8)
    class UTextBlock* FocusedText;                                                    // 0x0230 (size: 0x8)
    class UTextBlock* FocusedTextShadow;                                              // 0x0238 (size: 0x8)
    class UImage* Glow;                                                               // 0x0240 (size: 0x8)
    class UImage* HL;                                                                 // 0x0248 (size: 0x8)
    class UImage* Left;                                                               // 0x0250 (size: 0x8)
    class UOverlay* OverlayText;                                                      // 0x0258 (size: 0x8)
    class UImage* Right;                                                              // 0x0260 (size: 0x8)
    class UTextBlock* UnFocusedText;                                                  // 0x0268 (size: 0x8)
    class UTextBlock* UnFocusedTextShadow;                                            // 0x0270 (size: 0x8)
    FText Text;                                                                       // 0x0278 (size: 0x18)
    class UObject* Controller;                                                        // 0x0290 (size: 0x8)
    bool is disabled;                                                                 // 0x0298 (size: 0x1)
    bool do debug print;                                                              // 0x0299 (size: 0x1)
    bool allow focus anim;                                                            // 0x029A (size: 0x1)
    bool focused;                                                                     // 0x029B (size: 0x1)

    void ui button get data(FText& Text);
    void do focus anim();
    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void debug print(FText Label);
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void OnLoaded_E19027464643BBE995D8A5B8387679AA(class UObject* Loaded);
    void OnLoaded_8F950BF44E788CF5FCEA578FD9F98D72(class UObject* Loaded);
    void OnLoaded_3844963A4AED082D159C0C8A5D1865AE(class UObject* Loaded);
    void OnLoaded_741EB94E4352EE92B1B2B8B2D4CC71CC(class UObject* Loaded);
    void ui button set disabled(bool Disabled);
    void Construct();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void ui button set controller(class UObject* Controller);
    void ui button set text(FText Text);
    void enable focus anim();
    void enable focus anims();
    void ExecuteUbergraph_UI_Pause_Button(int32 EntryPoint);
}; // Size: 0x29C

#endif
