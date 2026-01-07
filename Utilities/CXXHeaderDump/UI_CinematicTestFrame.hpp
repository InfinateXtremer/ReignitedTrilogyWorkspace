#ifndef UE4SS_SDK_UI_CinematicTestFrame_HPP
#define UE4SS_SDK_UI_CinematicTestFrame_HPP

class UUI_CinematicTestFrame_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0210 (size: 0x8)

    void HudDialogActivate(const class UObject* Owner, const FText& Title, const FText& question, float questionVOSecs, const TArray<FText>& answers, int32 defaultAnswerIndex);
    void HudDialogBalloonist(const class UObject* Owner, const FText& question, const TArray<FText>& destinations, int32 defaultDestinationIndex);
    void HudDialogHide();
    void Construct();
    void ExecuteUbergraph_UI_CinematicTestFrame(int32 EntryPoint);
}; // Size: 0x218

#endif
