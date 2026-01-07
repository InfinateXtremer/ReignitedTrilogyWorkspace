#ifndef UE4SS_SDK_UI_LevelTransitionInfo_HPP
#define UE4SS_SDK_UI_LevelTransitionInfo_HPP

class UUI_LevelTransitionInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* GemPayoutLoop;                                            // 0x0210 (size: 0x8)
    class UWidgetAnimation* FoundFade;                                                // 0x0218 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0220 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0228 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0230 (size: 0x8)
    class UTextBlock* collectednumber;                                                // 0x0238 (size: 0x8)
    class UTextBlock* collectednumbershadow;                                          // 0x0240 (size: 0x8)
    class UImage* Corners;                                                            // 0x0248 (size: 0x8)
    class UTextBlock* DestinationName;                                                // 0x0250 (size: 0x8)
    class UTextBlock* DestinationNameShadow;                                          // 0x0258 (size: 0x8)
    class UImage* GemAnimationRV;                                                     // 0x0260 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0268 (size: 0x8)
    class UOverlay* OverlayDestination;                                               // 0x0270 (size: 0x8)
    class UOverlay* OverlayFound;                                                     // 0x0278 (size: 0x8)
    class USizeBox* SizeBox_001;                                                      // 0x0280 (size: 0x8)
    class USizeBox* SizeBox_002;                                                      // 0x0288 (size: 0x8)
    class USizeBox* SizeBox_003;                                                      // 0x0290 (size: 0x8)
    class USizeBox* SizeBox_004;                                                      // 0x0298 (size: 0x8)
    class USizeBox* SizeBox_005;                                                      // 0x02A0 (size: 0x8)
    class UHorizontalBox* totalnumbersbox;                                            // 0x02A8 (size: 0x8)
    class UUI_HUD_Numbers_C* UI_HUD_Numbers_C_5;                                      // 0x02B0 (size: 0x8)
    class UUI_HUD_Numbers_C* UI_HUD_Numbers_C_6;                                      // 0x02B8 (size: 0x8)
    class UUI_HUD_Numbers_C* UI_HUD_Numbers_C_7;                                      // 0x02C0 (size: 0x8)
    class UUI_HUD_Numbers_C* UI_HUD_Numbers_C_8;                                      // 0x02C8 (size: 0x8)
    class UUI_HUD_Numbers_C* UI_HUD_Numbers_C_9;                                      // 0x02D0 (size: 0x8)
    class UObject* panel controller;                                                  // 0x02D8 (size: 0x8)
    FText destination template - entering;                                            // 0x02E0 (size: 0x18)
    int32 starting treasure;                                                          // 0x02F8 (size: 0x4)
    int32 total treasure;                                                             // 0x02FC (size: 0x4)
    TArray<class UUI_HUD_Numbers_C*> Numbers;                                         // 0x0300 (size: 0x10)
    int32 accumulated treasure;                                                       // 0x0310 (size: 0x4)
    bool payout active;                                                               // 0x0314 (size: 0x1)
    TEnumAsByte<ELevelTransitionType::Type> transition type;                          // 0x0315 (size: 0x1)
    FText destination template - return home;                                         // 0x0318 (size: 0x18)
    FText destination template - confronting;                                         // 0x0330 (size: 0x18)
    FText level display name table ref;                                               // 0x0348 (size: 0x18)
    FText boss name table ref;                                                        // 0x0360 (size: 0x18)
    bool do debug print;                                                              // 0x0378 (size: 0x1)
    TArray<class USizeBox*> SizeBoxes;                                                // 0x0380 (size: 0x10)
    FText world name table ref;                                                       // 0x0390 (size: 0x18)
    FText destination template - entering via balloonist;                             // 0x03A8 (size: 0x18)
    float Seconds;                                                                    // 0x03C0 (size: 0x4)
    float total seconds;                                                              // 0x03C4 (size: 0x4)
    FText collected count;                                                            // 0x03C8 (size: 0x18)
    bool Shown;                                                                       // 0x03E0 (size: 0x1)

    void is boss level(bool& Result);
    void update count texts();
    void get collected counts();
    void play ka-ching sound();
    void stop counting();
    void start counting();
    void Set Title Text();
    FLinearColor Shadow Color();
    void do close();
    void OnLoaded_9775747D47EA442330EC53967D1083E7(class UObject* Loaded);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void set transition type(TEnumAsByte<ELevelTransitionType::Type> transition type, float fade in time, float fade out time);
    void Destruct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void UI panel close(bool immediate);
    void UI panel set controller(class UObject* panel controller);
    void Construct();
    void hide transition screen(float fade time);
    void ExecuteUbergraph_UI_LevelTransitionInfo(int32 EntryPoint);
}; // Size: 0x3E1

#endif
