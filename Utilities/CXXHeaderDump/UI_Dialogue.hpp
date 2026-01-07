#ifndef UE4SS_SDK_UI_Dialogue_HPP
#define UE4SS_SDK_UI_Dialogue_HPP

class UUI_Dialogue_C : public UFalconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0218 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0220 (size: 0x8)
    class UImage* FlashingArrow;                                                      // 0x0228 (size: 0x8)
    class UImage* FlashingArrow_R;                                                    // 0x0230 (size: 0x8)
    class UPhasmidRichTextBox* PhasmidRichTextBox_0;                                  // 0x0238 (size: 0x8)
    bool Open;                                                                        // 0x0240 (size: 0x1)
    bool Closed;                                                                      // 0x0241 (size: 0x1)
    FTimerHandle auto hide timer;                                                     // 0x0248 (size: 0x8)
    bool notified hud;                                                                // 0x0250 (size: 0x1)
    FText DialogText;                                                                 // 0x0258 (size: 0x18)
    FText character name;                                                             // 0x0270 (size: 0x18)
    int32 text char count;                                                            // 0x0288 (size: 0x4)
    float text update time;                                                           // 0x028C (size: 0x4)
    float text update interval;                                                       // 0x0290 (size: 0x4)
    float display time;                                                               // 0x0294 (size: 0x4)
    int32 displayed char count;                                                       // 0x0298 (size: 0x4)
    FString dialog string;                                                            // 0x02A0 (size: 0x10)
    class UObject* callback actor;                                                    // 0x02B0 (size: 0x8)
    FText answer;                                                                     // 0x02B8 (size: 0x18)
    bool question shown;                                                              // 0x02D0 (size: 0x1)
    bool returned reply;                                                              // 0x02D1 (size: 0x1)
    bool should show question;                                                        // 0x02D2 (size: 0x1)
    int32 default answer index;                                                       // 0x02D4 (size: 0x4)
    bool text skipped;                                                                // 0x02D8 (size: 0x1)
    FText CONTINUE;                                                                   // 0x02E0 (size: 0x18)

    void OnMouseButtonDownFromGameInstance(const FKey& MouseKey, bool& Handled);
    void HandleKeyDown(FKeyEvent StoredKeyEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void IsKeyboardMouse(bool& Value);
    void OnKeyDownFromGameInstance(const FKeyEvent& KeyEvent, bool& Handled);
    FLinearColor Shadow Color();
    void close dialog();
    void return reply();
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void pop the question();
    void Initialize question(TArray<FText>& Array);
    void update dialog text(float Delta);
    void clear autoclose timer();
    void handle autoclose timer();
    void config autoclose timer();
    void initialize dialog text(FText DialogText, float display time);
    void calculate non-space char count(FString SourceString);
    void do open anim();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void Destruct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void HudDialogHide();
    void HudDialogActivate(const class UObject* Owner, const FText& Title, const FText& question, float questionVOSecs, const TArray<FText>& answers, int32 defaultAnswerIndex);
    void HudDialogBalloonist(const class UObject* Owner, const FText& question, const TArray<FText>& destinations, int32 defaultDestinationIndex);
    void ExecuteUbergraph_UI_Dialogue(int32 EntryPoint);
}; // Size: 0x2F8

#endif
