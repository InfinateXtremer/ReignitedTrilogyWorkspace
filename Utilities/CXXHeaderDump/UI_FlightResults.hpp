#ifndef UE4SS_SDK_UI_FlightResults_HPP
#define UE4SS_SDK_UI_FlightResults_HPP

class UUI_FlightResults_C : public UFalconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UWidgetAnimation* NewRecord;                                                // 0x0218 (size: 0x8)
    class UWidgetAnimation* Loop;                                                     // 0x0220 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0228 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0230 (size: 0x8)
    class UUI_FlightResultsComponent_C* 001;                                          // 0x0238 (size: 0x8)
    class UUI_FlightResultsComponent_C* 002;                                          // 0x0240 (size: 0x8)
    class UUI_FlightResultsComponent_C* 003;                                          // 0x0248 (size: 0x8)
    class UUI_FlightResultsComponent_C* 004;                                          // 0x0250 (size: 0x8)
    class UUI_FlightResultsComponent_C* 005;                                          // 0x0258 (size: 0x8)
    class UImage* ArrowsLeft;                                                         // 0x0260 (size: 0x8)
    class UImage* ArrowsRight;                                                        // 0x0268 (size: 0x8)
    class UImage* Base;                                                               // 0x0270 (size: 0x8)
    class UTextBlock* bestTime;                                                       // 0x0278 (size: 0x8)
    class UBorder* BestTimeBorder;                                                    // 0x0280 (size: 0x8)
    class UTextBlock* besttimeNumber;                                                 // 0x0288 (size: 0x8)
    class UTextBlock* besttimeNumberShadow;                                           // 0x0290 (size: 0x8)
    class UTextBlock* BESTTIMEShadow;                                                 // 0x0298 (size: 0x8)
    class UImage* Black;                                                              // 0x02A0 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x02A8 (size: 0x8)
    class UVerticalBox* CollectableTotalVertcalBox;                                   // 0x02B0 (size: 0x8)
    class UImage* GemAnimationsRV;                                                    // 0x02B8 (size: 0x8)
    class UImage* gloweffect;                                                         // 0x02C0 (size: 0x8)
    class UImage* GlowEffectGreen;                                                    // 0x02C8 (size: 0x8)
    class UImage* GlowEffectYellow;                                                   // 0x02D0 (size: 0x8)
    class UOverlay* GreenOrbOverlay;                                                  // 0x02D8 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02E0 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02E8 (size: 0x8)
    class UImage* Image_8;                                                            // 0x02F0 (size: 0x8)
    class UImage* Line;                                                               // 0x02F8 (size: 0x8)
    class UImage* LineBestTime;                                                       // 0x0300 (size: 0x8)
    class UImage* LineYourTime;                                                       // 0x0308 (size: 0x8)
    class USpacer* NumberSpacer;                                                      // 0x0310 (size: 0x8)
    class UTextBlock* orbawardedTitle;                                                // 0x0318 (size: 0x8)
    class UTextBlock* orbawardedTitleShadow;                                          // 0x0320 (size: 0x8)
    class UBorder* orbawardtextborder;                                                // 0x0328 (size: 0x8)
    class UOverlay* PlaceOverlay;                                                     // 0x0330 (size: 0x8)
    class UTextBlock* ResultsTitle;                                                   // 0x0338 (size: 0x8)
    class UTextBlock* ResultsTitleShadow;                                             // 0x0340 (size: 0x8)
    class UImage* Shadow;                                                             // 0x0348 (size: 0x8)
    class UOverlay* TargetGoalsOverlay;                                               // 0x0350 (size: 0x8)
    class UTextBlock* text-question;                                                  // 0x0358 (size: 0x8)
    class UTextBlock* TextBlock_1;                                                    // 0x0360 (size: 0x8)
    class UTextBlock* TextBlock_4;                                                    // 0x0368 (size: 0x8)
    class UTextBlock* TextBlock_5;                                                    // 0x0370 (size: 0x8)
    class UImage* toplayer;                                                           // 0x0378 (size: 0x8)
    class UTextBlock* Total;                                                          // 0x0380 (size: 0x8)
    class UTextBlock* TotalReward;                                                    // 0x0388 (size: 0x8)
    class UTextBlock* TotalRewardShadow;                                              // 0x0390 (size: 0x8)
    class UTextBlock* TotalShadow;                                                    // 0x0398 (size: 0x8)
    class UUI_Background_001_C* UI_Background_001;                                    // 0x03A0 (size: 0x8)
    class UUI_Container_001_C* UI_Container_001_57;                                   // 0x03A8 (size: 0x8)
    class UUI_Container_002_C* UI_Container_002;                                      // 0x03B0 (size: 0x8)
    class UUI_HUD_Numbers_C* UI_HUD_Numbers;                                          // 0x03B8 (size: 0x8)
    class UUI_QuestionAnswer_Button_C* UI_QuestionAnswer_Button1;                     // 0x03C0 (size: 0x8)
    class UUI_QuestionAnswer_Button_C* UI_QuestionAnswer_Button2;                     // 0x03C8 (size: 0x8)
    class UVerticalBox* verticalbox-answers;                                          // 0x03D0 (size: 0x8)
    class UVerticalBox* VerticalBox-targetgoals;                                      // 0x03D8 (size: 0x8)
    class UVerticalBox* VerticalBox-Times;                                            // 0x03E0 (size: 0x8)
    class UTextBlock* YOURTIMENewRecord;                                              // 0x03E8 (size: 0x8)
    class UTextBlock* YOURTIMENumber;                                                 // 0x03F0 (size: 0x8)
    class UTextBlock* YOURTIMENumberNewRecordShadow;                                  // 0x03F8 (size: 0x8)
    class UTextBlock* YOURTIMENumberShadow;                                           // 0x0400 (size: 0x8)
    class UBorder* YourTimeRecordBorder;                                              // 0x0408 (size: 0x8)
    class UTextBlock* YOURTIMEShadow;                                                 // 0x0410 (size: 0x8)
    bool Active;                                                                      // 0x0418 (size: 0x1)
    bool Idle;                                                                        // 0x0419 (size: 0x1)
    FText menu select;                                                                // 0x0420 (size: 0x18)
    FText menu cancel;                                                                // 0x0438 (size: 0x18)
    class UObject* Controller;                                                        // 0x0450 (size: 0x8)
    TArray<FFlightResult> target results;                                             // 0x0458 (size: 0x10)
    float Time;                                                                       // 0x0468 (size: 0x4)
    float best time;                                                                  // 0x046C (size: 0x4)
    bool orb challenge;                                                               // 0x0470 (size: 0x1)
    EFlightLevelResult flight result;                                                 // 0x0471 (size: 0x1)
    FText title success;                                                              // 0x0478 (size: 0x18)
    FText title orb challenge;                                                        // 0x0490 (size: 0x18)
    FText title timeout;                                                              // 0x04A8 (size: 0x18)
    FText title crash;                                                                // 0x04C0 (size: 0x18)
    FText title orb challenge fail;                                                   // 0x04D8 (size: 0x18)
    EInventoryType flight reward;                                                     // 0x04F0 (size: 0x1)
    FText title quit;                                                                 // 0x04F8 (size: 0x18)
    FText your time text;                                                             // 0x0510 (size: 0x18)
    FText new record text;                                                            // 0x0528 (size: 0x18)
    FText title text;                                                                 // 0x0540 (size: 0x18)
    bool s3 race;                                                                     // 0x0558 (size: 0x1)
    FText title race won;                                                             // 0x0560 (size: 0x18)
    FString place suffix;                                                             // 0x0578 (size: 0x10)
    int32 place;                                                                      // 0x0588 (size: 0x4)
    FText title race finished;                                                        // 0x0590 (size: 0x18)
    FText title race off course;                                                      // 0x05A8 (size: 0x18)

    void handle key up(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle focus(class UUserWidget* Widget, FEventReply& result value);
    void handle key down(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle mouse down(class UUserWidget* Widget, FPointerEvent pointer event, FEventReply& return value);
    void OnKeyDownFromGameInstance(const FKeyEvent& KeyEvent, bool& Handled);
    void get time text(float Seconds, FText& time text);
    void set target entry(class UUI_FlightResultsComponent_C* Widget, FFlightResult Result);
    void was target rewarded(FFlightResult& FlightResult, bool& was rewarded);
    void set total reward();
    void set target results();
    void set times();
    void set title();
    void set mode();
    void handle navigate(class UUserWidget* Widget);
    void show footer(bool Show);
    void handle cancel();
    void handle activate(class UUserWidget* Widget);
    void OnLoaded_E19CB16B4FDB4B80CF2E5DA6CDF72863(class UObject* Loaded);
    void UI panel set controller(class UObject* panel controller);
    void UI panel close(bool immediate);
    void Construct();
    void FlightSummaryShow();
    void FlightSummaryConfigure(class UObject* aOwner, EInventoryType flightReward, const TArray<FFlightResult>& targetResults, EFlightLevelResult FlightResult, float Time, float bestTime, int32 place);
    void FlightSummaryHide();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void ExecuteUbergraph_UI_FlightResults(int32 EntryPoint);
}; // Size: 0x5C0

#endif
