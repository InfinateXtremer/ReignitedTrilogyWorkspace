#ifndef UE4SS_SDK_UI_HealthBar_Horizontal_HPP
#define UE4SS_SDK_UI_HealthBar_Horizontal_HPP

class UUI_HealthBar_Horizontal_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* Boost;                                                    // 0x0210 (size: 0x8)
    class UWidgetAnimation* Heal;                                                     // 0x0218 (size: 0x8)
    class UWidgetAnimation* TakeDamage;                                               // 0x0220 (size: 0x8)
    class UWidgetAnimation* HealthBar;                                                // 0x0228 (size: 0x8)
    class UImage* bar;                                                                // 0x0230 (size: 0x8)
    class UImage* blackbase;                                                          // 0x0238 (size: 0x8)
    class UImage* BlackOuterGlow;                                                     // 0x0240 (size: 0x8)
    class UImage* ColorBase;                                                          // 0x0248 (size: 0x8)
    class UOverlay* OverlayRV;                                                        // 0x0250 (size: 0x8)
    class UImage* Pulse;                                                              // 0x0258 (size: 0x8)
    class UImage* Red;                                                                // 0x0260 (size: 0x8)
    class UImage* RedTrimGlow;                                                        // 0x0268 (size: 0x8)
    class UImage* Trim;                                                               // 0x0270 (size: 0x8)
    class UImage* TrimGlow;                                                           // 0x0278 (size: 0x8)
    float new time;                                                                   // 0x0280 (size: 0x4)
    float last time;                                                                  // 0x0284 (size: 0x4)
    int32 hbhoriz_count;                                                              // 0x0288 (size: 0x4)
    int32 hbhoriz_total;                                                              // 0x028C (size: 0x4)

    void set bar animation position(float pct, bool animate);
    void set progress(int32 Count, int32 Total, bool animate);
    void show boost(bool On);
    void set progress by pct(float pct, bool animate);
    void ExecuteUbergraph_UI_HealthBar_Horizontal(int32 EntryPoint);
}; // Size: 0x290

#endif
