#ifndef UE4SS_SDK_UI_HealhBars_BottomLeftRight_HPP
#define UE4SS_SDK_UI_HealhBars_BottomLeftRight_HPP

class UUI_HealhBars_BottomLeftRight_C : public USparxHealthBarWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* LeftOutro;                                                // 0x0210 (size: 0x8)
    class UWidgetAnimation* LeftIntro;                                                // 0x0218 (size: 0x8)
    class UWidgetAnimation* RightOutro;                                               // 0x0220 (size: 0x8)
    class UWidgetAnimation* RightIntro;                                               // 0x0228 (size: 0x8)
    class UUI_HealthBar_Horizontal_C* LeftBar;                                        // 0x0230 (size: 0x8)
    class UUI_HealthBar_Horizontal_C* RightBar;                                       // 0x0238 (size: 0x8)
    class UUI_BossIcons_C* UI_BossIcons;                                              // 0x0240 (size: 0x8)
    class UUI_BossIcons_C* UI_BossIcons_C_0;                                          // 0x0248 (size: 0x8)
    int32 prev health;                                                                // 0x0250 (size: 0x4)
    bool right active;                                                                // 0x0254 (size: 0x1)
    bool left active;                                                                 // 0x0255 (size: 0x1)
    bool do close;                                                                    // 0x0256 (size: 0x1)

    void update health(bool Left, int32 Count, int32 Total, bool play anim);
    void get bar delta(class UUI_HealthBar_Horizontal_C*& bar ref, float& movement towards empty);
    void do hide();
    class UUI_HealthBar_Horizontal_C* Get Bar Widget(bool Left);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void Close();
    void SetHealth(bool Left, int32 Count, int32 Total, bool PlayDamageAnim);
    void SetIcon(bool Left, FName Name);
    void Hide();
    void bp set bar progress(bool Left, int32 Count, int32 Total, bool do anim);
    void bp close();
    void ExecuteUbergraph_UI_HealhBars_BottomLeftRight(int32 EntryPoint);
}; // Size: 0x257

#endif
