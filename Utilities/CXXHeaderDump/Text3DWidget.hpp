#ifndef UE4SS_SDK_Text3DWidget_HPP
#define UE4SS_SDK_Text3DWidget_HPP

class UText3DWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0210 (size: 0x8)
    class AHudText3D_C* HudText3D;                                                    // 0x0218 (size: 0x8)
    class ASceneCapture2D* captureCamera3D;                                           // 0x0220 (size: 0x8)
    FString Text;                                                                     // 0x0228 (size: 0x10)

    void IsReady(bool& ready);
    void ShowText(FString Text);
    void Hide Text();
    void ExecuteUbergraph_Text3DWidget(int32 EntryPoint);
}; // Size: 0x238

#endif
