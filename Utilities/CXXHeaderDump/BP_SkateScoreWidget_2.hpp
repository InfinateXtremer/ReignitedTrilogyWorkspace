#ifndef UE4SS_SDK_BP_SkateScoreWidget_2_HPP
#define UE4SS_SDK_BP_SkateScoreWidget_2_HPP

class UBP_SkateScoreWidget_2_C : public USkateScoreWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UWidgetAnimation* NewRecord;                                                // 0x02B0 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x02B8 (size: 0x8)
    class UImage* ArrowsLeft;                                                         // 0x02C0 (size: 0x8)
    class UImage* ArrowsRight;                                                        // 0x02C8 (size: 0x8)
    class UTextBlock* bestTime;                                                       // 0x02D0 (size: 0x8)
    class UTextBlock* besttimeNumber;                                                 // 0x02D8 (size: 0x8)
    class UTextBlock* besttimeNumberShadow;                                           // 0x02E0 (size: 0x8)
    class UTextBlock* BESTTIMEShadow;                                                 // 0x02E8 (size: 0x8)
    class UBorder* CourseRecordBorder;                                                // 0x02F0 (size: 0x8)
    class UImage* LineBestTime;                                                       // 0x02F8 (size: 0x8)
    class UImage* LineYourTime;                                                       // 0x0300 (size: 0x8)
    class UTextBlock* playerscore;                                                    // 0x0308 (size: 0x8)
    class UBorder* PlayerScoreBorder;                                                 // 0x0310 (size: 0x8)
    class UTextBlock* playerscoreforeground;                                          // 0x0318 (size: 0x8)
    class UTextBlock* playerscoreNewRecord;                                           // 0x0320 (size: 0x8)
    class UTextBlock* playerSCOREShadow;                                              // 0x0328 (size: 0x8)
    class UTextBlock* ResultsTitle;                                                   // 0x0330 (size: 0x8)
    class UTextBlock* ResultsTitleShadow;                                             // 0x0338 (size: 0x8)
    class UUI_Background_001_C* UI_Background_001;                                    // 0x0340 (size: 0x8)
    class UVerticalBox* VerticalBox-Times;                                            // 0x0348 (size: 0x8)
    class UTextBlock* YOURSCORENumber;                                                // 0x0350 (size: 0x8)
    class UTextBlock* YOURSCORENumberShadow;                                          // 0x0358 (size: 0x8)
    FText footer label;                                                               // 0x0360 (size: 0x18)
    bool paused;                                                                      // 0x0378 (size: 0x1)
    FString your score label;                                                         // 0x0380 (size: 0x10)
    FString title label;                                                              // 0x0390 (size: 0x10)
    bool Closed;                                                                      // 0x03A0 (size: 0x1)
    FText title_newrecord;                                                            // 0x03A8 (size: 0x18)
    FText title_norecord;                                                             // 0x03C0 (size: 0x18)
    FText label your score;                                                           // 0x03D8 (size: 0x18)
    FText label your score time;                                                      // 0x03F0 (size: 0x18)

    void OnMouseButtonDownFromGameInstance(const FKey& MouseKey, bool& Handled);
    void OnKeyDownFromGameInstance(const FKeyEvent& KeyEvent, bool& Handled);
    void set score label();
    void set title();
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void handle button press();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void inro anim done();
    void Construct();
    void bp update score(float your score, float course score, bool is time);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_BP_SkateScoreWidget_2(int32 EntryPoint);
}; // Size: 0x408

#endif
