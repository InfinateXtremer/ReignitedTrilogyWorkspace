#ifndef UE4SS_SDK_UI_Title_HPP
#define UE4SS_SDK_UI_Title_HPP

class UUI_Title_C : public UFalconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UWidgetAnimation* LoadingOutro;                                             // 0x0218 (size: 0x8)
    class UWidgetAnimation* LoadingIntro;                                             // 0x0220 (size: 0x8)
    class UWidgetAnimation* Intro_buttons;                                            // 0x0228 (size: 0x8)
    class UWidgetAnimation* Loop;                                                     // 0x0230 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0238 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0240 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0248 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0250 (size: 0x8)
    class UImage* IntroGlow;                                                          // 0x0258 (size: 0x8)
    class UImage* IntroGlowTag;                                                       // 0x0260 (size: 0x8)
    class UImage* LoadingIcon;                                                        // 0x0268 (size: 0x8)
    class UImage* Logoimage;                                                          // 0x0270 (size: 0x8)
    class UImage* OutlineGlowFront;                                                   // 0x0278 (size: 0x8)
    class UImage* OutlineGlowTag;                                                     // 0x0280 (size: 0x8)
    class UImage* OverlayHL;                                                          // 0x0288 (size: 0x8)
    class UImage* OverlayHLTag;                                                       // 0x0290 (size: 0x8)
    class UImage* PurpleCenter;                                                       // 0x0298 (size: 0x8)
    class UImage* sparkleeffect;                                                      // 0x02A0 (size: 0x8)
    class UUI_Title_Background_C* UI_Title_Background;                                // 0x02A8 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x02B0 (size: 0x8)
    class UImage* WhiteBack;                                                          // 0x02B8 (size: 0x8)
    class UImage* WhiteFront;                                                         // 0x02C0 (size: 0x8)
    bool Active;                                                                      // 0x02C8 (size: 0x1)
    FText Start Game;                                                                 // 0x02D0 (size: 0x18)
    FText New Game;                                                                   // 0x02E8 (size: 0x18)
    FText CONTINUE;                                                                   // 0x0300 (size: 0x18)
    FText menu select;                                                                // 0x0318 (size: 0x18)
    FText change user;                                                                // 0x0330 (size: 0x18)
    bool StatePressKeyToStart;                                                        // 0x0348 (size: 0x1)
    class UWidget* PressStartButton;                                                  // 0x0350 (size: 0x8)
    FText PressStart;                                                                 // 0x0358 (size: 0x18)
    TArray<FKey> test key list;                                                       // 0x0370 (size: 0x10)
    TArray<FKey> entered key list;                                                    // 0x0380 (size: 0x10)
    FText Show Credits;                                                               // 0x0390 (size: 0x18)
    bool waiting for eula;                                                            // 0x03A8 (size: 0x1)
    bool eula accepted;                                                               // 0x03A9 (size: 0x1)
    FText EULA;                                                                       // 0x03B0 (size: 0x18)
    bool do debug print;                                                              // 0x03C8 (size: 0x1)
    bool played loading intro;                                                        // 0x03C9 (size: 0x1)
    FString really long test string;                                                  // 0x03D0 (size: 0x10)
    FText Options;                                                                    // 0x03E0 (size: 0x18)
    FText QuitQuestion;                                                               // 0x03F8 (size: 0x18)
    FText QuitAnswer1;                                                                // 0x0410 (size: 0x18)
    FText QuitAnswer2;                                                                // 0x0428 (size: 0x18)
    int32 ResponseIndex;                                                              // 0x0440 (size: 0x4)
    FText QuitGame;                                                                   // 0x0448 (size: 0x18)
    bool QuitPopUpOpen;                                                               // 0x0460 (size: 0x1)

    void handle key up(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle focus(class UUserWidget* Widget, FEventReply& result value);
    void handle key down(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle mouse down(class UUserWidget* Widget, FPointerEvent pointer event, FEventReply& return value);
    void ShowQuitPopUp();
    void OnKeyDownFromGameInstance(const FKeyEvent& KeyEvent, bool& Handled);
    void Show Eula();
    void Show Credits Screen();
    void OnLoadGameAsyncCompleteFn();
    void print time(FString Label);
    void check sequence matched();
    void check key entered(FKey input key);
    void clear press start state();
    void should show player info(bool& return);
    void show player info();
    void create buttons();
    void show footer(bool do show);
    void add button(FText Label, bool use rich text);
    void handle navigate(class UUserWidget* Widget, bool GoingDown);
    void handle activate(class UUserWidget* Widget);
    void show xbox system menu();
    void question menu - response(int32 button clicked index);
    void do button animation();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void UI panel set controller(class UObject* panel controller);
    void button anim done();
    void Destruct();
    void Construct();
    void UI panel close(bool immediate);
    void ExecuteUbergraph_UI_Title(int32 EntryPoint);
}; // Size: 0x461

#endif
