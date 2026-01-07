#ifndef UE4SS_SDK_UI_PlayerInfo_HPP
#define UE4SS_SDK_UI_PlayerInfo_HPP

class UUI_PlayerInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0210 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0218 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0220 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x0228 (size: 0x8)
    class UTexture* Texture;                                                          // 0x0230 (size: 0x8)
    FText no user label;                                                              // 0x0238 (size: 0x18)

    void debug print player info(FString Label);
    void Hud - Boss Bar - Show(int32 hit count, FString Boss);
    void Hud - Boss Bar - Hide();
    void Hud - Boss Bar - Damage(int32 Count);
    void Hud - Boss Bar - Heal(int32 Count);
    void Construct();
    void ExecuteUbergraph_UI_PlayerInfo(int32 EntryPoint);
}; // Size: 0x250

#endif
