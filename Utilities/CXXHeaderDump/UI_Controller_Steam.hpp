#ifndef UE4SS_SDK_UI_Controller_Steam_HPP
#define UE4SS_SDK_UI_Controller_Steam_HPP

class UUI_Controller_Steam_C : public UFalconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UWidgetAnimation* ChangeControls;                                           // 0x0218 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0220 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0228 (size: 0x8)
    class UBorder* BorderArrows;                                                      // 0x0230 (size: 0x8)
    class UTextBlock* ControllerName;                                                 // 0x0238 (size: 0x8)
    class UTextBlock* ControllerNameShadow;                                           // 0x0240 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0248 (size: 0x8)
    class UImage* Image_60;                                                           // 0x0250 (size: 0x8)
    class UImage* Image_61;                                                           // 0x0258 (size: 0x8)
    class UImage* Image_62;                                                           // 0x0260 (size: 0x8)
    class UImage* Image_63;                                                           // 0x0268 (size: 0x8)
    class UImage* Image_64;                                                           // 0x0270 (size: 0x8)
    class UImage* Image_65;                                                           // 0x0278 (size: 0x8)
    class UImage* Image_66;                                                           // 0x0280 (size: 0x8)
    class UImage* Image_67;                                                           // 0x0288 (size: 0x8)
    class UImage* Image_68;                                                           // 0x0290 (size: 0x8)
    class UImage* Image_70;                                                           // 0x0298 (size: 0x8)
    class UImage* Image_71;                                                           // 0x02A0 (size: 0x8)
    class UImage* Image_72;                                                           // 0x02A8 (size: 0x8)
    class UImage* Image_110;                                                          // 0x02B0 (size: 0x8)
    class UUI_Arrow_001_C* LeftArrow;                                                 // 0x02B8 (size: 0x8)
    class UImage* Lines;                                                              // 0x02C0 (size: 0x8)
    class UUI_Arrow_001_C* RightArrow;                                                // 0x02C8 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x02D0 (size: 0x8)
    class UTextBlock* TextBlock_1;                                                    // 0x02D8 (size: 0x8)
    class UTextBlock* TextBlock_3;                                                    // 0x02E0 (size: 0x8)
    class UTextBlock* TextBlock_4;                                                    // 0x02E8 (size: 0x8)
    class UTextBlock* TextBlock_5;                                                    // 0x02F0 (size: 0x8)
    class UTextBlock* TextBlock_6;                                                    // 0x02F8 (size: 0x8)
    class UTextBlock* TextBlock_7;                                                    // 0x0300 (size: 0x8)
    class UTextBlock* TextBlock_8;                                                    // 0x0308 (size: 0x8)
    class UTextBlock* TextBlock_9;                                                    // 0x0310 (size: 0x8)
    class UTextBlock* TextBlock_10;                                                   // 0x0318 (size: 0x8)
    class UTextBlock* TextBlock_12;                                                   // 0x0320 (size: 0x8)
    class UTextBlock* TextBlock_13;                                                   // 0x0328 (size: 0x8)
    class UTextBlock* TextBlock_14;                                                   // 0x0330 (size: 0x8)
    class UObject* Controller;                                                        // 0x0338 (size: 0x8)
    FText retro - title;                                                              // 0x0340 (size: 0x18)
    FText retro - L2;                                                                 // 0x0358 (size: 0x18)
    FText retro - R2;                                                                 // 0x0370 (size: 0x18)
    FText reignited - title;                                                          // 0x0388 (size: 0x18)
    FText reignited - L2;                                                             // 0x03A0 (size: 0x18)
    FText reignited - R2;                                                             // 0x03B8 (size: 0x18)
    FText current - title;                                                            // 0x03D0 (size: 0x18)
    FText current - L2;                                                               // 0x03E8 (size: 0x18)
    FText current - R2;                                                               // 0x0400 (size: 0x18)
    FString control setting key;                                                      // 0x0418 (size: 0x10)
    bool retro;                                                                       // 0x0428 (size: 0x1)
    bool started retro;                                                               // 0x0429 (size: 0x1)
    bool Active;                                                                      // 0x042A (size: 0x1)
    TMap<class EInputSource, class TSubclassOf<UUserWidget>> InputSourcePanelMap;     // 0x0430 (size: 0x50)

    void handle key up(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle focus(class UUserWidget* Widget, FEventReply& result value);
    void handle key down(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle mouse down(class UUserWidget* Widget, FPointerEvent pointer event, FEventReply& return value);
    void Handle Input Source Changed(EInputSource New input Source);
    void OnKeyDownFromGameInstance(const FKeyEvent& KeyEvent, bool& Handled);
    void do save();
    void set control mode();
    void get control mode();
    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    void set labels();
    void toggle display(bool Left);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void UI panel set controller(class UObject* panel controller);
    void UI panel close(bool immediate);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void Construct();
    void ExecuteUbergraph_UI_Controller_Steam(int32 EntryPoint);
}; // Size: 0x480

#endif
