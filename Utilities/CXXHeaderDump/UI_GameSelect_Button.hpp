#ifndef UE4SS_SDK_UI_GameSelect_Button_HPP
#define UE4SS_SDK_UI_GameSelect_Button_HPP

class UUI_GameSelect_Button_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* Disabled;                                                 // 0x0210 (size: 0x8)
    class UWidgetAnimation* FocusLoop;                                                // 0x0218 (size: 0x8)
    class UWidgetAnimation* BeginFocus;                                               // 0x0220 (size: 0x8)
    class UWidgetAnimation* UnFocused;                                                // 0x0228 (size: 0x8)
    class UBorder* Border_0;                                                          // 0x0230 (size: 0x8)
    class UImage* Burst;                                                              // 0x0238 (size: 0x8)
    class UTextBlock* GameTotal;                                                      // 0x0240 (size: 0x8)
    class UTextBlock* GameTotalShadow;                                                // 0x0248 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0250 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0258 (size: 0x8)
    class UImage* Image_5;                                                            // 0x0260 (size: 0x8)
    class UImage* Image_6;                                                            // 0x0268 (size: 0x8)
    class UImage* Image_7;                                                            // 0x0270 (size: 0x8)
    class UImage* Image_8;                                                            // 0x0278 (size: 0x8)
    class UImage* Image_9;                                                            // 0x0280 (size: 0x8)
    class UImage* Image_10;                                                           // 0x0288 (size: 0x8)
    class UImage* Image_21;                                                           // 0x0290 (size: 0x8)
    class UImage* Image_22;                                                           // 0x0298 (size: 0x8)
    class UImage* Image_23;                                                           // 0x02A0 (size: 0x8)
    class UImage* Image_24;                                                           // 0x02A8 (size: 0x8)
    class UImage* PurpleCenter;                                                       // 0x02B0 (size: 0x8)
    class UImage* WhiteBack;                                                          // 0x02B8 (size: 0x8)
    class UImage* WhiteFront;                                                         // 0x02C0 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcherLogos;                                       // 0x02C8 (size: 0x8)
    FText Text;                                                                       // 0x02D0 (size: 0x18)
    class UObject* Controller;                                                        // 0x02E8 (size: 0x8)
    bool is disabled;                                                                 // 0x02F0 (size: 0x1)
    bool do debug print;                                                              // 0x02F1 (size: 0x1)
    int32 switcher index;                                                             // 0x02F4 (size: 0x4)
    bool platform w64;                                                                // 0x02F8 (size: 0x1)
    bool Active;                                                                      // 0x02F9 (size: 0x1)

    void ui button get data(FText& Text);
    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    FLinearColor Shadow Color();
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void debug print(FText Label);
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void ui button set disabled(bool Disabled);
    void enable focus anims();
    void Construct();
    void ui button set controller(class UObject* Controller);
    void ui button set text(FText Text);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void OnFocusLost(FFocusEvent InFocusEvent);
    void ExecuteUbergraph_UI_GameSelect_Button(int32 EntryPoint);
}; // Size: 0x2FA

#endif
