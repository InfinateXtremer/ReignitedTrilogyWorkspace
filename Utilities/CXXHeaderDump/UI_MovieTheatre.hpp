#ifndef UE4SS_SDK_UI_MovieTheatre_HPP
#define UE4SS_SDK_UI_MovieTheatre_HPP

class UUI_MovieTheatre_C : public UFalconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0218 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0220 (size: 0x8)
    class UUI_MovieTheatre_Component_C* 001;                                          // 0x0228 (size: 0x8)
    class UUI_MovieTheatre_Component_C* 002;                                          // 0x0230 (size: 0x8)
    class UUI_MovieTheatre_Component_C* 003;                                          // 0x0238 (size: 0x8)
    class UUI_MovieTheatre_Component_C* 004;                                          // 0x0240 (size: 0x8)
    class UUI_MovieTheatre_Component_C* 005;                                          // 0x0248 (size: 0x8)
    class UUI_MovieTheatre_Component_C* 006;                                          // 0x0250 (size: 0x8)
    class UUI_MovieTheatre_Component_C* 007;                                          // 0x0258 (size: 0x8)
    class UUI_MovieTheatre_Component_C* 008;                                          // 0x0260 (size: 0x8)
    class UUI_MovieTheatre_Component_C* 009;                                          // 0x0268 (size: 0x8)
    class UUI_MovieTheatre_Component_C* 010;                                          // 0x0270 (size: 0x8)
    class UUI_MovieTheatre_Component_C* 011;                                          // 0x0278 (size: 0x8)
    class UUI_Background_000_C* UI_Background_000;                                    // 0x0280 (size: 0x8)
    class UUI_Container_001_C* UI_Container_001;                                      // 0x0288 (size: 0x8)
    class UUI_Container_002_C* UI_Container_002;                                      // 0x0290 (size: 0x8)
    class UUI_MenuHeader_C* UI_MenuHeader;                                            // 0x0298 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x02A0 (size: 0x8)
    FText footer select label;                                                        // 0x02A8 (size: 0x18)
    FText footer back label;                                                          // 0x02C0 (size: 0x18)
    bool Active;                                                                      // 0x02D8 (size: 0x1)
    class UUserWidget* focus widget;                                                  // 0x02E0 (size: 0x8)
    class UTexturePlayerUI_C* movie widget;                                           // 0x02E8 (size: 0x8)
    TArray<class UFileMediaSource*> file media source;                                // 0x02F0 (size: 0x10)
    TArray<FText> media titles;                                                       // 0x0300 (size: 0x10)

    void handle key up(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle focus(class UUserWidget* Widget, FEventReply& result value);
    void handle key down(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle mouse down(class UUserWidget* Widget, FPointerEvent pointer event, FEventReply& return value);
    void OnMouseButtonDownFromGameInstance(const FKey& MouseKey, bool& Handled);
    void OnKeyDownFromGameInstance(const FKeyEvent& KeyEvent, bool& Handled);
    void setup movie titles(int32 Index);
    void handle navigate(class UUserWidget* Widget, bool fwd);
    void handle activate(class UUserWidget* Widget);
    void handle close button();
    void Close();
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void show footer(bool Show);
    void Construct();
    void ShowScreen();
    void HideScreen(bool immediate);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void ConfigureScreen(const FFalconScreenConfigData& configData);
    void ExecuteUbergraph_UI_MovieTheatre(int32 EntryPoint);
}; // Size: 0x310

#endif
