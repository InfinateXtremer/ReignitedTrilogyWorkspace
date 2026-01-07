#ifndef UE4SS_SDK_UI_SelectFile_NoSaveButton_HPP
#define UE4SS_SDK_UI_SelectFile_NoSaveButton_HPP

class UUI_SelectFile_NoSaveButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* selected;                                                 // 0x0210 (size: 0x8)
    class UWidgetAnimation* Disabled;                                                 // 0x0218 (size: 0x8)
    class UWidgetAnimation* FocusLoop;                                                // 0x0220 (size: 0x8)
    class UWidgetAnimation* BeginFocus;                                               // 0x0228 (size: 0x8)
    class UWidgetAnimation* UnFocused;                                                // 0x0230 (size: 0x8)
    class UOverlay* EmptyOverlay;                                                     // 0x0238 (size: 0x8)
    class UImage* HL;                                                                 // 0x0240 (size: 0x8)
    class UUI_Container_001_C* UI_Container_001;                                      // 0x0248 (size: 0x8)
    class UUI_Container_002_C* UI_Container_002;                                      // 0x0250 (size: 0x8)
    class UObject* Controller;                                                        // 0x0258 (size: 0x8)
    FText Text;                                                                       // 0x0260 (size: 0x18)
    int32 slot id;                                                                    // 0x0278 (size: 0x4)
    bool slot has save;                                                               // 0x027C (size: 0x1)
    FText completion pct template;                                                    // 0x0280 (size: 0x18)

    void ui button get data(FText& Text);
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
    void ExecuteUbergraph_UI_SelectFile_NoSaveButton(int32 EntryPoint);
}; // Size: 0x298

#endif
