#ifndef UE4SS_SDK_UI_MiniMap_Spyro_HPP
#define UE4SS_SDK_UI_MiniMap_Spyro_HPP

class UUI_MiniMap_Spyro_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UImage* SpyroDirection;                                                     // 0x0210 (size: 0x8)
    class UImage* SpyroDot;                                                           // 0x0218 (size: 0x8)

    void set pip rotation(float angle);
    void set cone rotation(float angle);
    void ExecuteUbergraph_UI_MiniMap_Spyro(int32 EntryPoint);
}; // Size: 0x220

#endif
