#ifndef UE4SS_SDK_UI_Epilogue_HPP
#define UE4SS_SDK_UI_Epilogue_HPP

class UUI_Epilogue_C : public UFalconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0218 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0220 (size: 0x8)
    class UWidgetAnimation* PressLeftImageFromRight;                                  // 0x0228 (size: 0x8)
    class UWidgetAnimation* PressRightImageFromLeft;                                  // 0x0230 (size: 0x8)
    class UImage* Black;                                                              // 0x0238 (size: 0x8)
    class UTextBlock* DescriptionText;                                                // 0x0240 (size: 0x8)
    class UImage* ImagePlacement;                                                     // 0x0248 (size: 0x8)
    class UUI_Arrow_002_C* LeftUI_Arrow_002;                                          // 0x0250 (size: 0x8)
    class UUI_Arrow_002_C* RightUI_Arrow_002;                                         // 0x0258 (size: 0x8)
    class UTextBlock* TextBlock_1;                                                    // 0x0260 (size: 0x8)
    bool Active;                                                                      // 0x0268 (size: 0x1)
    FText footer label;                                                               // 0x0270 (size: 0x18)
    class UObject* Controller;                                                        // 0x0288 (size: 0x8)
    int32 image order number;                                                         // 0x0290 (size: 0x4)
    int32 image number;                                                               // 0x0294 (size: 0x4)
    FString image description string;                                                 // 0x0298 (size: 0x10)
    bool view all games;                                                              // 0x02A8 (size: 0x1)
    int32 viewable image count;                                                       // 0x02AC (size: 0x4)
    FString image count string;                                                       // 0x02B0 (size: 0x10)
    TArray<bool> anim dirs;                                                           // 0x02C0 (size: 0x10)

    void handle key up(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle focus(class UUserWidget* Widget, FEventReply& result value);
    void handle key down(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle mouse down(class UUserWidget* Widget, FPointerEvent pointer event, FEventReply& return value);
    void ui button get data(FText& Text);
    void OnKeyDownFromGameInstance(const FKeyEvent& KeyEvent, bool& Handled);
    void get page index from skill points required and game index(int32 skill points required, int32 game index, int32& page index);
    void update arrows();
    void set image count string();
    void get viewable image count();
    void show next image(bool higher index, bool& there is a next image);
    void handle navigate(bool Forward);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void show footer(bool Show);
    void OnLoaded_2685C6AB49CAACFF163A99BB3AACCE56(class UObject* Loaded);
    void ui button set text(FText Text);
    void ui button set disabled(bool Disabled);
    void enable focus anims();
    void Construct();
    void ShowScreen();
    void HideScreen(bool immediate);
    void ui button set controller(class UObject* Controller);
    void load image(TSoftObjectPtr<UTexture2D> Texture);
    void ExecuteUbergraph_UI_Epilogue(int32 EntryPoint);
}; // Size: 0x2D0

#endif
