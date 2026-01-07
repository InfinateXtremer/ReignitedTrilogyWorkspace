#ifndef UE4SS_SDK_UI_MiniMap_GreenOrbMarker_HPP
#define UE4SS_SDK_UI_MiniMap_GreenOrbMarker_HPP

class UUI_MiniMap_GreenOrbMarker_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UImage* Pulsing;                                                            // 0x0210 (size: 0x8)
    class UImage* Static;                                                             // 0x0218 (size: 0x8)

    void set completed();
    void ExecuteUbergraph_UI_MiniMap_GreenOrbMarker(int32 EntryPoint);
}; // Size: 0x220

#endif
