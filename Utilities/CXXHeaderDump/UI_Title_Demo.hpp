#ifndef UE4SS_SDK_UI_Title_Demo_HPP
#define UE4SS_SDK_UI_Title_Demo_HPP

class UUI_Title_Demo_C : public UFalconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UWidgetAnimation* Loop;                                                     // 0x0218 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0220 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0228 (size: 0x8)
    class UImage* Black;                                                              // 0x0230 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0238 (size: 0x8)
    class UImage* IntroGlow;                                                          // 0x0240 (size: 0x8)
    class UImage* IntroGlowTag;                                                       // 0x0248 (size: 0x8)
    class UImage* Logoimage;                                                          // 0x0250 (size: 0x8)
    class UImage* OutlineGlowFront;                                                   // 0x0258 (size: 0x8)
    class UImage* OutlineGlowTag;                                                     // 0x0260 (size: 0x8)
    class UImage* OverlayHL;                                                          // 0x0268 (size: 0x8)
    class UImage* OverlayHLTag;                                                       // 0x0270 (size: 0x8)
    class UImage* PurpleCenter;                                                       // 0x0278 (size: 0x8)
    class UImage* sparkleeffect;                                                      // 0x0280 (size: 0x8)
    class UUI_Title_Background_C* UI_Title_Background;                                // 0x0288 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x0290 (size: 0x8)
    class UImage* WhiteBack;                                                          // 0x0298 (size: 0x8)
    class UImage* WhiteFront;                                                         // 0x02A0 (size: 0x8)
    bool Active;                                                                      // 0x02A8 (size: 0x1)
    FText Start Game;                                                                 // 0x02B0 (size: 0x18)
    FText Idol Springs;                                                               // 0x02C8 (size: 0x18)
    FText Stone Hill;                                                                 // 0x02E0 (size: 0x18)
    FText menu select;                                                                // 0x02F8 (size: 0x18)
    bool allow back;                                                                  // 0x0310 (size: 0x1)
    FText menu back;                                                                  // 0x0318 (size: 0x18)
    FText Sunny Villa;                                                                // 0x0330 (size: 0x18)
    TArray<FKey> test keys;                                                           // 0x0348 (size: 0x10)
    int32 correct keys;                                                               // 0x0358 (size: 0x4)
    bool ls down;                                                                     // 0x035C (size: 0x1)
    bool rs down;                                                                     // 0x035D (size: 0x1)
    bool test active;                                                                 // 0x035E (size: 0x1)
    float test timer;                                                                 // 0x0360 (size: 0x4)
    float test timer limit;                                                           // 0x0364 (size: 0x4)

    void handle key up(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle focus(class UUserWidget* Widget, FEventReply& result value);
    void handle key down(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle mouse down(class UUserWidget* Widget, FPointerEvent pointer event, FEventReply& return value);
    void toggle buttons();
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void handle close();
    void create buttons();
    void show footer(bool do show);
    void add button(FText Label);
    void handle navigate(class UUserWidget* Widget, bool Forward);
    void handle activate(class UUserWidget* Widget);
    void question menu - response(int32 button clicked index);
    void UI panel set controller(class UObject* panel controller);
    void UI panel close(bool immediate);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void ExecuteUbergraph_UI_Title_Demo(int32 EntryPoint);
}; // Size: 0x368

#endif
