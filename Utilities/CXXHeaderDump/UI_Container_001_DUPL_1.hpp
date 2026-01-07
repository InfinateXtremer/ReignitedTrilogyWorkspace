#ifndef UE4SS_SDK_UI_Container_001_DUPL_1_HPP
#define UE4SS_SDK_UI_Container_001_DUPL_1_HPP

class UUI_Container_001_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UImage* baseblack;                                                          // 0x0210 (size: 0x8)
    class UImage* Glass1;                                                             // 0x0218 (size: 0x8)
    class UImage* Glass2;                                                             // 0x0220 (size: 0x8)
    class UImage* GlassColor1;                                                        // 0x0228 (size: 0x8)
    class UImage* GlassColor2;                                                        // 0x0230 (size: 0x8)
    class UOverlay* Overlay_0;                                                        // 0x0238 (size: 0x8)

    void OnLoaded_32123D454CC27CBA638CBCAC1BD98437(class UObject* Loaded);
    void Construct();
    void ExecuteUbergraph_UI_Container_001(int32 EntryPoint);
}; // Size: 0x240

#endif
