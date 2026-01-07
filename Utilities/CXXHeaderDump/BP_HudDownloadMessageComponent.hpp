#ifndef UE4SS_SDK_BP_HudDownloadMessageComponent_HPP
#define UE4SS_SDK_BP_HudDownloadMessageComponent_HPP

class UBP_HudDownloadMessageComponent_C : public UHudDownloadMessageComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00F0 (size: 0x8)

    void HideDownloadMessage();
    void ShowDownloadMessage();
    void ExecuteUbergraph_BP_HudDownloadMessageComponent(int32 EntryPoint);
}; // Size: 0xF8

#endif
