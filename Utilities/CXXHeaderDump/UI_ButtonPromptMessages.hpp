#ifndef UE4SS_SDK_UI_ButtonPromptMessages_HPP
#define UE4SS_SDK_UI_ButtonPromptMessages_HPP

class UUI_ButtonPromptMessages_C : public UFalconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UWidgetAnimation* SpitOutro;                                                // 0x0218 (size: 0x8)
    class UWidgetAnimation* SpitIntro;                                                // 0x0220 (size: 0x8)
    class UWidgetAnimation* ExitLookOutro;                                            // 0x0228 (size: 0x8)
    class UWidgetAnimation* ExitLookIntro;                                            // 0x0230 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0238 (size: 0x8)
    class UPhasmidRichTextBox* PhasmidRichTextBox_ExitLook;                           // 0x0240 (size: 0x8)
    class UPhasmidRichTextBox* PhasmidRichTextBox_Spit;                               // 0x0248 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x0250 (size: 0x8)
    bool Active;                                                                      // 0x0258 (size: 0x1)
    bool spit shown;                                                                  // 0x0259 (size: 0x1)
    bool look shown;                                                                  // 0x025A (size: 0x1)
    FText look text;                                                                  // 0x0260 (size: 0x18)
    FText talk text;                                                                  // 0x0278 (size: 0x18)

    void collapse ui when nothing is visible();
    void adjust position(bool In);
    void Show Talk(bool Show);
    void Show Look(bool Show);
    void Show Spit(bool Show);
    void ConfigureScreen(const FFalconScreenConfigData& configData);
    void Construct();
    void Destruct();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void ExecuteUbergraph_UI_ButtonPromptMessages(int32 EntryPoint);
}; // Size: 0x290

#endif
