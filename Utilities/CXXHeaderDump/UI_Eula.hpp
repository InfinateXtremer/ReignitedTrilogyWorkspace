#ifndef UE4SS_SDK_UI_Eula_HPP
#define UE4SS_SDK_UI_Eula_HPP

class UUI_Eula_C : public UFalconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0218 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0220 (size: 0x8)
    class UImage* Background;                                                         // 0x0228 (size: 0x8)
    class UImage* blackbase;                                                          // 0x0230 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0238 (size: 0x8)
    class UFalconMultiLineEditableTextBox* FalconMultiLineEditableTextBox_arabic;     // 0x0240 (size: 0x8)
    class UFalconMultiLineEditableTextBox* FalconMultiLineEditableTextBox_western;    // 0x0248 (size: 0x8)
    class UInvalidationBox* InvalidationBox_0;                                        // 0x0250 (size: 0x8)
    class UInvalidationBox* InvalidationBox_Arabic;                                   // 0x0258 (size: 0x8)
    class UInvalidationBox* InvalidationBox_Western;                                  // 0x0260 (size: 0x8)
    class UOverlay* Overlay_0;                                                        // 0x0268 (size: 0x8)
    class USizeBox* SizeBoxarabicinner;                                               // 0x0270 (size: 0x8)
    class USizeBox* SizeBoxwesterninner;                                              // 0x0278 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x0280 (size: 0x8)
    class UTextBlock* Title;                                                          // 0x0288 (size: 0x8)
    class UUI_Container_001_C* UI_Container_001_57;                                   // 0x0290 (size: 0x8)
    class UUI_Container_002_C* UI_Container_002;                                      // 0x0298 (size: 0x8)
    class UOverlay* warningtextoverlay;                                               // 0x02A0 (size: 0x8)
    class UObject* Controller;                                                        // 0x02A8 (size: 0x8)
    bool Activated;                                                                   // 0x02B0 (size: 0x1)
    bool warning displayed;                                                           // 0x02B1 (size: 0x1)
    FText menu select;                                                                // 0x02B8 (size: 0x18)
    FText menu right;                                                                 // 0x02D0 (size: 0x18)
    FText menu left;                                                                  // 0x02E8 (size: 0x18)
    FText menu back;                                                                  // 0x0300 (size: 0x18)
    bool is falcon callback;                                                          // 0x0318 (size: 0x1)
    bool constructed;                                                                 // 0x0319 (size: 0x1)
    FText eula text 1;                                                                // 0x0320 (size: 0x18)
    FText eula text 2;                                                                // 0x0338 (size: 0x18)
    FText eula text 3;                                                                // 0x0350 (size: 0x18)
    FString eula string;                                                              // 0x0368 (size: 0x10)
    class UFalconMultiLineEditableTextBox* active widget;                             // 0x0378 (size: 0x8)
    bool viewed;                                                                      // 0x0380 (size: 0x1)
    FText menu return;                                                                // 0x0388 (size: 0x18)
    FText private policy text;                                                        // 0x03A0 (size: 0x18)
    float prev scroll pct;                                                            // 0x03B8 (size: 0x4)
    FText QuitApplication;                                                            // 0x03C0 (size: 0x18)
    class UInvalidationBox* active invalidation box;                                  // 0x03D8 (size: 0x8)
    bool Active;                                                                      // 0x03E0 (size: 0x1)

    void handle key up(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle focus(class UUserWidget* Widget, FEventReply& result value);
    void handle key down(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle mouse down(class UUserWidget* Widget, FPointerEvent pointer event, FEventReply& return value);
    void handle accept pressed();
    void scroll forward();
    void scroll back();
    void handle EULA scrolled(float scroll pct, bool Scrolled To Bottom, bool Play Sound);
    void OnKeyDownFromGameInstance(const FKeyEvent& KeyEvent, bool& Handled);
    void adjust for resolution();
    void adjust for culture();
    void set the focus();
    FFalconScreenConfigData QueryScreen(const FFalconScreenConfigData configData);
    void send response(int32 selected);
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void show footer(bool do show);
    void handle activate button(bool accept);
    void OnLoaded_F91461FD4B860B4D73281E9E10FDE9FA(class UObject* Loaded);
    void question menu - config(FString question, FString button 1 label, FString button 2 label, bool button 2 is default, class UObject* Controller, bool ShowCountdown);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void Construct();
    void UI panel close(bool immediate);
    void UI panel set controller(class UObject* panel controller);
    void HideScreen(bool immediate);
    void question menu - response(int32 button clicked index);
    void Destruct();
    void BndEvt__FalconMultiLineEditableTextBox_arabic_K2Node_ComponentBoundEvent_3_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
    void BndEvt__FalconMultiLineEditableTextBox_western_K2Node_ComponentBoundEvent_12_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
    void ExecuteUbergraph_UI_Eula(int32 EntryPoint);
}; // Size: 0x3E1

#endif
