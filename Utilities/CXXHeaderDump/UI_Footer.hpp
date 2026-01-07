#ifndef UE4SS_SDK_UI_Footer_HPP
#define UE4SS_SDK_UI_Footer_HPP

class UUI_Footer_C : public UFalconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UWidgetAnimation* JustifyRight;                                             // 0x0218 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0220 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0228 (size: 0x8)
    class UBorder* Border_0;                                                          // 0x0230 (size: 0x8)
    class UHorizontalBox* FooterHorizontalBox;                                        // 0x0238 (size: 0x8)

    void Hud Footer - Show(class UObject*& hud footer);
    void Hud Footer - Get Footer(class UObject*& hud footer);
    void rescale box(bool& Successful);
    void remove entry(TEnumAsByte<EMenuControls::Type> Control);
    void Construct();
    void Hud Footer - Add Entry(TEnumAsByte<EMenuControls::Type> Control, FString Label);
    void Hud Footer - Hide();
    void Hud Footer - Remove All();
    void Hud Footer - Remove Entry(TEnumAsByte<EMenuControls::Type> Control);
    void Destruct();
    void outro finished();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UI_Footer(int32 EntryPoint);
}; // Size: 0x240

#endif
