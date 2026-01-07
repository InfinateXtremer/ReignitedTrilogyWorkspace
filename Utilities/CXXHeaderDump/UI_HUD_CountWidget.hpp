#ifndef UE4SS_SDK_UI_HUD_CountWidget_HPP
#define UE4SS_SDK_UI_HUD_CountWidget_HPP

class UUI_HUD_CountWidget_C : public UFalconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UHorizontalBox* NumbersHBox;                                                // 0x0218 (size: 0x8)
    bool do debug print;                                                              // 0x0220 (size: 0x1)
    int32 last count;                                                                 // 0x0224 (size: 0x4)
    TEnumAsByte<EHudPosition::Type> Alignment;                                        // 0x0228 (size: 0x1)
    bool Active;                                                                      // 0x0229 (size: 0x1)
    int32 last digit count;                                                           // 0x022C (size: 0x4)

    void set count(int32 Count);
    void Destruct();
    void Construct();
    void update count(int32 new count);
    void ExecuteUbergraph_UI_HUD_CountWidget(int32 EntryPoint);
}; // Size: 0x230

#endif
