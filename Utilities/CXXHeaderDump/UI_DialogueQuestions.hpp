#ifndef UE4SS_SDK_UI_DialogueQuestions_HPP
#define UE4SS_SDK_UI_DialogueQuestions_HPP

class UUI_DialogueQuestions_C : public UFalconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0218 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0220 (size: 0x8)
    class UPhasmidRichTextBox* PhasmidRichTextBox_0;                                  // 0x0228 (size: 0x8)
    class UVerticalBox* questionlist;                                                 // 0x0230 (size: 0x8)
    bool Open;                                                                        // 0x0238 (size: 0x1)
    bool Closed;                                                                      // 0x0239 (size: 0x1)
    bool notified hud;                                                                // 0x023A (size: 0x1)
    FText DialogText;                                                                 // 0x0240 (size: 0x18)
    FText character name;                                                             // 0x0258 (size: 0x18)
    int32 text char count;                                                            // 0x0270 (size: 0x4)
    float text update time;                                                           // 0x0274 (size: 0x4)
    float text update interval;                                                       // 0x0278 (size: 0x4)
    float display time;                                                               // 0x027C (size: 0x4)
    int32 displayed char count;                                                       // 0x0280 (size: 0x4)
    FString dialog string;                                                            // 0x0288 (size: 0x10)
    class UObject* callback actor;                                                    // 0x0298 (size: 0x8)
    FText question;                                                                   // 0x02A0 (size: 0x18)
    bool question shown;                                                              // 0x02B8 (size: 0x1)
    bool returned reply;                                                              // 0x02B9 (size: 0x1)
    int32 selected index;                                                             // 0x02BC (size: 0x4)
    int32 default answer;                                                             // 0x02C0 (size: 0x4)
    FText footer label;                                                               // 0x02C8 (size: 0x18)

    void handle key up(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle focus(class UUserWidget* Widget, FEventReply& result value);
    void handle key down(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle mouse down(class UUserWidget* Widget, FPointerEvent pointer event, FEventReply& return value);
    void OnKeyDownFromGameInstance(const FKeyEvent& KeyEvent, bool& Handled);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void wrap focus index(int32 Index, int32& the wrapped index);
    void navigate(bool Up, class UUserWidget* Widget);
    void close dialog();
    void return reply();
    void pop the question();
    void Initialize question(TArray<FText>& Array);
    void update dialog text(float Delta);
    void initialize dialog text(FText DialogText, float display time);
    void calculate non-space char count(FString SourceString);
    void do open anim();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void Destruct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void HudDialogBalloonist(const class UObject* Owner, const FText& question, const TArray<FText>& destinations, int32 defaultDestinationIndex);
    void HudDialogHide();
    void HudDialogActivate(const class UObject* Owner, const FText& Title, const FText& question, float questionVOSecs, const TArray<FText>& answers, int32 defaultAnswerIndex);
    void ExecuteUbergraph_UI_DialogueQuestions(int32 EntryPoint);
}; // Size: 0x2E0

#endif
