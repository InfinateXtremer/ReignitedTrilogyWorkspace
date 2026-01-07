#ifndef UE4SS_SDK_BP_TrickWidget_HPP
#define UE4SS_SDK_BP_TrickWidget_HPP

class UBP_TrickWidget_C : public UTrickWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0228 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0230 (size: 0x8)
    class UVerticalBox* TrickList;                                                    // 0x0238 (size: 0x8)
    class UUI_HUD_Counter_C* UI_HUD_Counter_0;                                        // 0x0240 (size: 0x8)
    TArray<class UUI_HUD_Numbers_C*> number set;                                      // 0x0248 (size: 0x10)
    FString counter icon;                                                             // 0x0258 (size: 0x10)

    void adjust position();
    void Construct();
    void CloseWidget();
    void SetTotalScore(int32 score);
    void UpdateTrickScore(FString TrickName, int32 TrickScore, ETrickStatus TrickStatus);
    void ClearScore();
    void outro anim finished();
    void ShowWidget(FName IconName, EFalconHudWidgetPosition Position);
    void ExecuteUbergraph_BP_TrickWidget(int32 EntryPoint);
}; // Size: 0x268

#endif
