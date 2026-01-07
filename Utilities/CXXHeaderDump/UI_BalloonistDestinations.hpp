#ifndef UE4SS_SDK_UI_BalloonistDestinations_HPP
#define UE4SS_SDK_UI_BalloonistDestinations_HPP

class UUI_BalloonistDestinations_C : public UFalconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0218 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0220 (size: 0x8)
    class UTextBlock* textblock_question;                                             // 0x0228 (size: 0x8)
    class UUI_Container_001_C* UI_Container_001;                                      // 0x0230 (size: 0x8)
    class UUI_Container_002_C* UI_Container_002;                                      // 0x0238 (size: 0x8)
    class UVerticalBox* VerticalBox_button_list;                                      // 0x0240 (size: 0x8)
    class UObject* callback actor;                                                    // 0x0248 (size: 0x8)
    class AActor* Character;                                                          // 0x0250 (size: 0x8)
    int32 default answer;                                                             // 0x0258 (size: 0x4)
    FText dialog text;                                                                // 0x0260 (size: 0x18)
    TArray<FText> answers;                                                            // 0x0278 (size: 0x10)
    int32 selected index;                                                             // 0x0288 (size: 0x4)
    int32 State;                                                                      // 0x028C (size: 0x4)
    int32 state_intro;                                                                // 0x0290 (size: 0x4)
    int32 state_input_wait;                                                           // 0x0294 (size: 0x4)
    int32 state_reply_sent;                                                           // 0x0298 (size: 0x4)
    int32 state_closing;                                                              // 0x029C (size: 0x4)
    int32 state_closed;                                                               // 0x02A0 (size: 0x4)
    TEnumAsByte<EHorizontalAlignment> NewVar_0;                                       // 0x02A4 (size: 0x1)
    FText footer label;                                                               // 0x02A8 (size: 0x18)

    void handle key up(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle focus(class UUserWidget* Widget, FEventReply& result value);
    void handle key down(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle mouse down(class UUserWidget* Widget, FPointerEvent pointer event, FEventReply& return value);
    void OnKeyDownFromGameInstance(const FKeyEvent& KeyEvent, bool& Handled);
    void enable button focus anims();
    void set character name();
    void wrap child focus index(int32 Index, class UPanelWidget* panel widget, int32& wrapped index);
    void navigate(bool Back, class UUserWidget*& Widget, class UPanelWidget*& panel widget);
    void close dialog();
    void return reply();
    void show answers();
    void initialize answers();
    void initialize text();
    void do open();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void Destruct();
    void HudDialogActivate(const class UObject* Owner, const FText& Title, const FText& question, float questionVOSecs, const TArray<FText>& answers, int32 defaultAnswerIndex);
    void HudDialogHide();
    void HudDialogBalloonist(const class UObject* Owner, const FText& question, const TArray<FText>& destinations, int32 defaultDestinationIndex);
    void ExecuteUbergraph_UI_BalloonistDestinations(int32 EntryPoint);
}; // Size: 0x2C0

#endif
