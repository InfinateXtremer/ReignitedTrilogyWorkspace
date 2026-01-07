#ifndef UE4SS_SDK_UI_Credits_HPP
#define UE4SS_SDK_UI_Credits_HPP

class UUI_Credits_C : public UFalconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0218 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0220 (size: 0x8)
    class UUI_Background_001_C* UI_Background_001;                                    // 0x0228 (size: 0x8)
    class UUI_MenuHeader_C* UI_MenuHeader;                                            // 0x0230 (size: 0x8)
    bool Active;                                                                      // 0x0238 (size: 0x1)
    FText footer back;                                                                // 0x0240 (size: 0x18)
    bool show title;                                                                  // 0x0258 (size: 0x1)
    class UUI_FalconMoviePlayer_C* movie widget;                                      // 0x0260 (size: 0x8)
    class UFileMediaSource* file media source;                                        // 0x0268 (size: 0x8)

    void OnKeyDownFromGameInstance(const FKeyEvent& KeyEvent, bool& Handled);
    void handle screen close();
    void handle close();
    void play movie();
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void UI panel close(bool immediate);
    void intro done();
    void play outro();
    void Construct();
    void UI panel set controller(class UObject* panel controller);
    void outro anim finished();
    void ConfigureScreen(const FFalconScreenConfigData& configData);
    void ExecuteUbergraph_UI_Credits(int32 EntryPoint);
}; // Size: 0x270

#endif
