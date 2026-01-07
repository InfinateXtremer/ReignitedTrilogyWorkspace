#ifndef UE4SS_SDK_ProfileChanged_HPP
#define UE4SS_SDK_ProfileChanged_HPP

class UProfileChanged_C : public UFalconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0218 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0220 (size: 0x8)
    class UBorder* Background;                                                        // 0x0228 (size: 0x8)
    class UImage* Black;                                                              // 0x0230 (size: 0x8)
    class UTextBlock* Msg;                                                            // 0x0238 (size: 0x8)
    class UTextBlock* msgshadow;                                                      // 0x0240 (size: 0x8)
    class UUI_Background_001_C* UI_Background_001;                                    // 0x0248 (size: 0x8)
    class UObject* panel controller;                                                  // 0x0250 (size: 0x8)
    FText button label;                                                               // 0x0258 (size: 0x18)
    bool Shown;                                                                       // 0x0270 (size: 0x1)
    FText OneTextToRuleThemAll;                                                       // 0x0278 (size: 0x18)

    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void UI panel set controller(class UObject* panel controller);
    void hide transition screen(float fade time);
    void Construct();
    void HideScreen(bool immediate);
    void ShowScreen();
    void UI panel close(bool immediate);
    void set transition type(TEnumAsByte<ELevelTransitionType::Type> transition type, float fade in time, float fade out time);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void ExecuteUbergraph_ProfileChanged(int32 EntryPoint);
}; // Size: 0x290

#endif
