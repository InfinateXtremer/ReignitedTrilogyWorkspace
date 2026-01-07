#ifndef UE4SS_SDK_UI_SkateBoostBar_HPP
#define UE4SS_SDK_UI_SkateBoostBar_HPP

class UUI_SkateBoostBar_C : public USkateBoostBarWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0210 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0218 (size: 0x8)
    class UUI_FlightIcon_C* UI_FlightIcon;                                            // 0x0220 (size: 0x8)
    class UUI_HealthBar_Horizontal_C* UI_HealthBar_Horizontal;                        // 0x0228 (size: 0x8)
    bool In;                                                                          // 0x0230 (size: 0x1)

    void bp set boost(bool On);
    void outro anim done();
    void Show();
    void SetBarProgress(int32 Count, int32 Total);
    void Hide();
    void Close();
    void ShowBoost(bool On);
    void bp hide(bool Close);
    void bp set bar position(int32 Count, int32 Total);
    void BP Show();
    void SetIcon(const FName& Icon);
    void bp set icon(FName Icon);
    void SetBarProgressPct(float pct);
    void ExecuteUbergraph_UI_SkateBoostBar(int32 EntryPoint);
}; // Size: 0x231

#endif
