#ifndef UE4SS_SDK_UI_Main_HPP
#define UE4SS_SDK_UI_Main_HPP

class UUI_Main_C : public UFalconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UWidgetAnimation* warningOutro;                                             // 0x0218 (size: 0x8)
    class UWidgetAnimation* warningIntro;                                             // 0x0220 (size: 0x8)
    class UWidgetAnimation* BannerOutro;                                              // 0x0228 (size: 0x8)
    class UWidgetAnimation* BannerIntro;                                              // 0x0230 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0238 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0240 (size: 0x8)
    class UUI_GameSelect_Button_C* 001;                                               // 0x0248 (size: 0x8)
    class UUI_GameSelect_Button_C* 002;                                               // 0x0250 (size: 0x8)
    class UUI_GameSelect_Button_C* 003;                                               // 0x0258 (size: 0x8)
    class UImage* Banner;                                                             // 0x0260 (size: 0x8)
    class UTextBlock* Base;                                                           // 0x0268 (size: 0x8)
    class UImage* Black;                                                              // 0x0270 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0278 (size: 0x8)
    class UTextBlock* DownloadRequired;                                               // 0x0280 (size: 0x8)
    class UOverlay* Overlay_level_name;                                               // 0x0288 (size: 0x8)
    class UTextBlock* Shadow;                                                         // 0x0290 (size: 0x8)
    class UImage* Spyro;                                                              // 0x0298 (size: 0x8)
    class UUI_Title_Background_C* UI_Title_Background;                                // 0x02A0 (size: 0x8)
    bool do debug print;                                                              // 0x02A8 (size: 0x1)
    int32 game index;                                                                 // 0x02AC (size: 0x4)
    class UUserWidget* focus widget;                                                  // 0x02B0 (size: 0x8)
    bool Active;                                                                      // 0x02B8 (size: 0x1)
    FText menu select;                                                                // 0x02C0 (size: 0x18)
    FText menu back;                                                                  // 0x02D8 (size: 0x18)
    bool from title;                                                                  // 0x02F0 (size: 0x1)
    FText game completion pct template;                                               // 0x02F8 (size: 0x18)
    FText starting level name;                                                        // 0x0310 (size: 0x18)
    FString LevelPath;                                                                // 0x0328 (size: 0x10)
    FText notify patch msg;                                                           // 0x0338 (size: 0x18)
    FText notify patch button label;                                                  // 0x0350 (size: 0x18)
    FText art gallery footer label;                                                   // 0x0368 (size: 0x18)
    class UUI_Epilogue_C* art gallery;                                                // 0x0380 (size: 0x8)
    FText download some message;                                                      // 0x0388 (size: 0x18)
    FText download all message;                                                       // 0x03A0 (size: 0x18)
    FString download message;                                                         // 0x03B8 (size: 0x10)
    bool GameChosen;                                                                  // 0x03C8 (size: 0x1)

    void handle key up(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle focus(class UUserWidget* Widget, FEventReply& result value);
    void handle key down(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle mouse down(class UUserWidget* Widget, FPointerEvent pointer event, FEventReply& return value);
    void OnKeyDownFromGameInstance(const FKeyEvent& KeyEvent, bool& Handled);
    void update level name and warning();
    void cheat up some skills();
    void obtain skill point(class USkillPointComponent* skill point component ref, ESkillPoint skill point);
    void get skill points required to view art gallery(int32 game index, int32& min skill points);
    void can show art gallery(bool& Result);
    void handle activate(int32 game index);
    void focus initial button();
    void configure button(class UUserWidget* Button, float completion pct);
    void set dragon for game();
    void Set Default Selected Widget();
    void close panel();
    void show footer(bool do show);
    void set input to game  Mode();
    void navigate(class UUserWidget* Widget, bool Left);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    void get game index from widget(class UUserWidget* Widget, int32& game index);
    void debug print(FString Label);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void OnLoaded_D55885954C0A0764815E8DA578984EE8(class UObject* Loaded);
    void OnLoaded_4FD85F80483ADCA91F418A83B7732380(class UObject* Loaded);
    void Destruct();
    void UI panel close(bool immediate);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void Set Dragon Texture By Game();
    void question menu - response(int32 button clicked index);
    void Construct();
    void UI panel set controller(class UObject* panel controller);
    void HideScreen(bool immediate);
    void ExecuteUbergraph_UI_Main(int32 EntryPoint);
}; // Size: 0x3C9

#endif
