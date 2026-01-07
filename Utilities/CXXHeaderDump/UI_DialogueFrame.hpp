#ifndef UE4SS_SDK_UI_DialogueFrame_HPP
#define UE4SS_SDK_UI_DialogueFrame_HPP

class UUI_DialogueFrame_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0210 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0218 (size: 0x8)
    class UImage* blackbase;                                                          // 0x0220 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0228 (size: 0x8)
    class UImage* Effect;                                                             // 0x0230 (size: 0x8)
    class UTextBlock* NameLeftSide;                                                   // 0x0238 (size: 0x8)
    class UTextBlock* NameLeftSideShadow;                                             // 0x0240 (size: 0x8)
    class UTextBlock* NameRightSide;                                                  // 0x0248 (size: 0x8)
    class UTextBlock* NameRightSideShadow;                                            // 0x0250 (size: 0x8)
    class UOverlay* Overlay_0;                                                        // 0x0258 (size: 0x8)
    class UOverlay* Overlay_1;                                                        // 0x0260 (size: 0x8)
    class UOverlay* OverlayMaster;                                                    // 0x0268 (size: 0x8)
    class UUI_Container_001_C* UI_Container_001;                                      // 0x0270 (size: 0x8)
    class UUserWidget* dialog widget;                                                 // 0x0278 (size: 0x8)
    int32 number of selectable answers;                                               // 0x0280 (size: 0x4)

    void adjust for RTL culture();
    FLinearColor Shadow Color();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void HudDialogHide();
    void HudDialogActivate(const class UObject* Owner, const FText& Title, const FText& question, float questionVOSecs, const TArray<FText>& answers, int32 defaultAnswerIndex);
    void Construct();
    void HudDialogBalloonist(const class UObject* Owner, const FText& question, const TArray<FText>& destinations, int32 defaultDestinationIndex);
    void ExecuteUbergraph_UI_DialogueFrame(int32 EntryPoint);
}; // Size: 0x284

#endif
