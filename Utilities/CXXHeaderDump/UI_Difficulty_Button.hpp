#ifndef UE4SS_SDK_UI_Difficulty_Button_HPP
#define UE4SS_SDK_UI_Difficulty_Button_HPP

class UUI_Difficulty_Button_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* selected;                                                 // 0x0210 (size: 0x8)
    class UWidgetAnimation* Disabled;                                                 // 0x0218 (size: 0x8)
    class UWidgetAnimation* BeginFocus;                                               // 0x0220 (size: 0x8)
    class UWidgetAnimation* FocusLoop;                                                // 0x0228 (size: 0x8)
    class UWidgetAnimation* UnFocused;                                                // 0x0230 (size: 0x8)
    class UTextBlock* difficulty;                                                     // 0x0238 (size: 0x8)
    class UTextBlock* difficultyshadow;                                               // 0x0240 (size: 0x8)
    class UImage* HL;                                                                 // 0x0248 (size: 0x8)
    class UImage* ImageEasy;                                                          // 0x0250 (size: 0x8)
    class UImage* ImageHard;                                                          // 0x0258 (size: 0x8)
    class UImage* ImageNightmare;                                                     // 0x0260 (size: 0x8)
    class UImage* ImageNormal;                                                        // 0x0268 (size: 0x8)
    class UImage* Lock;                                                               // 0x0270 (size: 0x8)
    class UImage* lockShadow;                                                         // 0x0278 (size: 0x8)
    class UUI_Container_001_C* UI_Container_001;                                      // 0x0280 (size: 0x8)
    class UUI_Container_002_C* UI_Container_002;                                      // 0x0288 (size: 0x8)
    class UUI_Container_002_C* UI_Container_002HL;                                    // 0x0290 (size: 0x8)
    bool Show Easy Image;                                                             // 0x0298 (size: 0x1)
    bool Show Normal Image;                                                           // 0x0299 (size: 0x1)
    bool Show Hard Image;                                                             // 0x029A (size: 0x1)
    bool Show Nightmare Image;                                                        // 0x029B (size: 0x1)
    FString button label;                                                             // 0x02A0 (size: 0x10)
    class UObject* Controller;                                                        // 0x02B0 (size: 0x8)
    bool is focused;                                                                  // 0x02B8 (size: 0x1)

    void ui button get data(FText& Text);
    bool Should Show Locked();
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void Set Label();
    void Initialize Visibility(bool Show, class UImage* Image);
    void ui button set disabled(bool Disabled);
    void enable focus anims();
    void Construct();
    void ui button set controller(class UObject* Controller);
    void OnFocusLost(FFocusEvent InFocusEvent);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void ui button set text(FText Text);
    void ExecuteUbergraph_UI_Difficulty_Button(int32 EntryPoint);
}; // Size: 0x2B9

#endif
