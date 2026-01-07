#ifndef UE4SS_SDK_UI_DownloadMessage_HPP
#define UE4SS_SDK_UI_DownloadMessage_HPP

class UUI_DownloadMessage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0210 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0218 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0220 (size: 0x8)
    class UTextBlock* traveltext;                                                     // 0x0228 (size: 0x8)
    class UTextBlock* traveltextshadow;                                               // 0x0230 (size: 0x8)
    class UObject* panel controller;                                                  // 0x0238 (size: 0x8)
    float fade out time;                                                              // 0x0240 (size: 0x4)
    bool is hidden;                                                                   // 0x0244 (size: 0x1)

    FLinearColor Shadow Color();
    void UI panel close(bool immediate);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void UI panel set controller(class UObject* panel controller);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_UI_DownloadMessage(int32 EntryPoint);
}; // Size: 0x245

#endif
