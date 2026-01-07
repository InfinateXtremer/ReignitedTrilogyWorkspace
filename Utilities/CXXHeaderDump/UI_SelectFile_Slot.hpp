#ifndef UE4SS_SDK_UI_SelectFile_Slot_HPP
#define UE4SS_SDK_UI_SelectFile_Slot_HPP

class UUI_SelectFile_Slot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* selected;                                                 // 0x0210 (size: 0x8)
    class UWidgetAnimation* Disabled;                                                 // 0x0218 (size: 0x8)
    class UWidgetAnimation* FocusLoop;                                                // 0x0220 (size: 0x8)
    class UWidgetAnimation* BeginFocus;                                               // 0x0228 (size: 0x8)
    class UWidgetAnimation* UnFocused;                                                // 0x0230 (size: 0x8)
    class UImage* 1;                                                                  // 0x0238 (size: 0x8)
    class UImage* 1Depth;                                                             // 0x0240 (size: 0x8)
    class UImage* 1Shadow;                                                            // 0x0248 (size: 0x8)
    class UImage* 1Stroke;                                                            // 0x0250 (size: 0x8)
    class UImage* 1StrokeShadow;                                                      // 0x0258 (size: 0x8)
    class UImage* 2;                                                                  // 0x0260 (size: 0x8)
    class UImage* 2Depth;                                                             // 0x0268 (size: 0x8)
    class UImage* 2Shadow;                                                            // 0x0270 (size: 0x8)
    class UImage* 2Stroke;                                                            // 0x0278 (size: 0x8)
    class UImage* 2StrokeShadow;                                                      // 0x0280 (size: 0x8)
    class UImage* 3;                                                                  // 0x0288 (size: 0x8)
    class UImage* 3Depth;                                                             // 0x0290 (size: 0x8)
    class UImage* 3Shadow;                                                            // 0x0298 (size: 0x8)
    class UImage* 3Stroke;                                                            // 0x02A0 (size: 0x8)
    class UImage* 3StrokeShadow;                                                      // 0x02A8 (size: 0x8)
    class UTextBlock* difficulty;                                                     // 0x02B0 (size: 0x8)
    class UTextBlock* difficultyshadow;                                               // 0x02B8 (size: 0x8)
    class UOverlay* EmptyOverlay;                                                     // 0x02C0 (size: 0x8)
    class UTextBlock* game1Percentage;                                                // 0x02C8 (size: 0x8)
    class UTextBlock* game1Percentageshadow;                                          // 0x02D0 (size: 0x8)
    class UTextBlock* game2percentage;                                                // 0x02D8 (size: 0x8)
    class UTextBlock* game2percentageshadow;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* game3percentage;                                                // 0x02E8 (size: 0x8)
    class UTextBlock* game3percentageshadow;                                          // 0x02F0 (size: 0x8)
    class UImage* HL;                                                                 // 0x02F8 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0300 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0308 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0310 (size: 0x8)
    class UOverlay* LogosandTotalsOverlay;                                            // 0x0318 (size: 0x8)
    class UOverlay* Number1;                                                          // 0x0320 (size: 0x8)
    class UOverlay* Number2;                                                          // 0x0328 (size: 0x8)
    class UOverlay* Number3;                                                          // 0x0330 (size: 0x8)
    class UTextBlock* Time;                                                           // 0x0338 (size: 0x8)
    class UTextBlock* timeshadow;                                                     // 0x0340 (size: 0x8)
    class UTextBlock* totalpercentage;                                                // 0x0348 (size: 0x8)
    class UTextBlock* totalpercentageshadow;                                          // 0x0350 (size: 0x8)
    class UUI_Container_001_C* UI_Container_001;                                      // 0x0358 (size: 0x8)
    class UUI_Container_002_C* UI_Container_002;                                      // 0x0360 (size: 0x8)
    class UUI_Container_002_C* UI_Container_002HL;                                    // 0x0368 (size: 0x8)
    class UVerticalBox* VerticalBoxPercentTimeDiff;                                   // 0x0370 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_0;                                          // 0x0378 (size: 0x8)
    class UObject* Controller;                                                        // 0x0380 (size: 0x8)
    FText Text;                                                                       // 0x0388 (size: 0x18)
    int32 slot id;                                                                    // 0x03A0 (size: 0x4)
    bool slot has save;                                                               // 0x03A4 (size: 0x1)
    FText completion pct template;                                                    // 0x03A8 (size: 0x18)
    FString slot_difficulty;                                                          // 0x03C0 (size: 0x10)
    TArray<FString> difficulty names;                                                 // 0x03D0 (size: 0x10)

    void ui button get data(FText& Text);
    void set text percentage(class UTextBlock* Widget, float pct);
    void init summary();
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FLinearColor Shadow Color();
    void ui button set disabled(bool Disabled);
    void enable focus anims();
    void Construct();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void ui button set controller(class UObject* Controller);
    void ui button set text(FText Text);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void update slot();
    void ExecuteUbergraph_UI_SelectFile_Slot(int32 EntryPoint);
}; // Size: 0x3E0

#endif
