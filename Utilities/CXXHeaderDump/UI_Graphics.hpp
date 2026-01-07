#ifndef UE4SS_SDK_UI_Graphics_HPP
#define UE4SS_SDK_UI_Graphics_HPP

class UUI_Graphics_C : public UFalconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0218 (size: 0x8)
    class UUI_MultiToggle_C* AmbientOcclusionToggleWBP;                               // 0x0220 (size: 0x8)
    class UUI_MultiToggle_C* AntiAliasingToggleWBP;                                   // 0x0228 (size: 0x8)
    class UUI_MultiToggle_C* BloomToggleWBP;                                          // 0x0230 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0238 (size: 0x8)
    class UUI_MultiToggle_C* DisplayModeToggleWBP;                                    // 0x0240 (size: 0x8)
    class UUI_MultiToggle_C* FoliageQualityToggleWBP;                                 // 0x0248 (size: 0x8)
    class UScrollBox* ItemScrollBox;                                                  // 0x0250 (size: 0x8)
    class UVerticalBox* ItemsVerticalBox;                                             // 0x0258 (size: 0x8)
    class UUI_MultiToggle_C* MaxFpsToggleWBP;                                         // 0x0260 (size: 0x8)
    class UUI_MultiToggle_C* MotionBlurToggleWBP;                                     // 0x0268 (size: 0x8)
    class UUI_MultiToggle_C* PresetToggleWBP;                                         // 0x0270 (size: 0x8)
    class UUI_MultiToggle_C* ResolutionToggleWBP;                                     // 0x0278 (size: 0x8)
    class UUI_Title_Background_C* ScreenBgWBP;                                        // 0x0280 (size: 0x8)
    class UUI_MultiToggle_C* ShadowQualityToggleWBP;                                  // 0x0288 (size: 0x8)
    class UUI_MultiToggle_C* SsrToggleWBP;                                            // 0x0290 (size: 0x8)
    class UTextBlock* ToolTipTextBlock;                                               // 0x0298 (size: 0x8)
    class UUI_MultiToggle_C* ViewDistanceQualityToggleWBP;                            // 0x02A0 (size: 0x8)
    class UUI_MultiToggle_C* VignetteToggleWBP;                                       // 0x02A8 (size: 0x8)
    class UUI_MultiToggle_C* VsyncToggleWBP;                                          // 0x02B0 (size: 0x8)
    FString MenuKey;                                                                  // 0x02B8 (size: 0x10)
    bool closing;                                                                     // 0x02C8 (size: 0x1)
    FText FooterSelectText;                                                           // 0x02D0 (size: 0x18)
    FText FooterCancelText;                                                           // 0x02E8 (size: 0x18)
    bool InPauseMenu;                                                                 // 0x0300 (size: 0x1)
    FText FooterSaveText;                                                             // 0x0308 (size: 0x18)
    FText FooterResetText;                                                            // 0x0320 (size: 0x18)
    class UObject* PanelController;                                                   // 0x0338 (size: 0x8)
    bool SetDefaultQuestionActive;                                                    // 0x0340 (size: 0x1)
    TArray<FText> OffOnText;                                                          // 0x0348 (size: 0x10)
    TArray<TEnumAsByte<EWindowMode::Type>> WindowModeHash;                            // 0x0358 (size: 0x10)
    TArray<FText> WindowModeText;                                                     // 0x0368 (size: 0x10)
    TArray<EGraphicsOptionPreset> PresetHash;                                         // 0x0378 (size: 0x10)
    TArray<FText> PresetText;                                                         // 0x0388 (size: 0x10)
    TArray<EGraphicsQuality> BloomHash;                                               // 0x0398 (size: 0x10)
    TArray<FText> BloomText;                                                          // 0x03A8 (size: 0x10)
    TArray<EGraphicsQuality> DepthOfFieldHash;                                        // 0x03B8 (size: 0x10)
    TArray<FText> DepthOfFieldText;                                                   // 0x03C8 (size: 0x10)
    TArray<EGraphicsQuality> AntiAliasingHash;                                        // 0x03D8 (size: 0x10)
    TArray<FText> AntiAliasingText;                                                   // 0x03E8 (size: 0x10)
    TArray<EGraphicsQuality> AmbientOcclusionHash;                                    // 0x03F8 (size: 0x10)
    TArray<FText> AmbientOcclusionText;                                               // 0x0408 (size: 0x10)
    TArray<EGraphicsQuality> SSRHash;                                                 // 0x0418 (size: 0x10)
    TArray<FText> SSRText;                                                            // 0x0428 (size: 0x10)
    TArray<EGraphicsQuality> TextureQualityHash;                                      // 0x0438 (size: 0x10)
    TArray<FText> TextureQualityText;                                                 // 0x0448 (size: 0x10)
    TArray<EGraphicsQuality> ShadowQualityHash;                                       // 0x0458 (size: 0x10)
    TArray<FText> ShadowQualityText;                                                  // 0x0468 (size: 0x10)
    TArray<EGraphicsQuality> FoliageQualityHash;                                      // 0x0478 (size: 0x10)
    TArray<FText> FoliageQualityText;                                                 // 0x0488 (size: 0x10)
    TArray<EGraphicsQuality> ViewDistanceQualityHash;                                 // 0x0498 (size: 0x10)
    TArray<FText> ViewDistanceQualityText;                                            // 0x04A8 (size: 0x10)
    TArray<class UUI_MultiToggle_C*> ToggleOptionsWBP;                                // 0x04B8 (size: 0x10)
    bool UnsavedQuestionActive;                                                       // 0x04C8 (size: 0x1)
    int32 SelectedResponseIndex;                                                      // 0x04CC (size: 0x4)
    class UUserWidget* FocusedWidget;                                                 // 0x04D0 (size: 0x8)
    TArray<class UUI_MultiToggle_C*> PresetEffectedOptionsWBP;                        // 0x04D8 (size: 0x10)
    bool DisplaySettingChangedQuestionActive;                                         // 0x04E8 (size: 0x1)
    TEnumAsByte<EWindowMode::Type> PreviousDisplayMode;                               // 0x04E9 (size: 0x1)
    int32 PreviousResolution;                                                         // 0x04EC (size: 0x4)
    TArray<FText> ResolutionListTextGlobal;                                           // 0x04F0 (size: 0x10)
    bool ResolutionPrevDisabled;                                                      // 0x0500 (size: 0x1)
    bool InQuestionMenu;                                                              // 0x0501 (size: 0x1)

    void handle key up(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle focus(class UUserWidget* Widget, FEventReply& result value);
    void handle key down(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle mouse down(class UUserWidget* Widget, FPointerEvent pointer event, FEventReply& return value);
    void HandleResolutionDisable();
    void SetMenuKeyData(class UWidget* Widget Focused);
    void OnKeyDownFromGameInstance(const FKeyEvent& KeyEvent, bool& Handled);
    void AskDisplaySettingChangedQuestion();
    void UpdatePresetOptions();
    void AskUnsavedQuestion();
    void HasAnythingChanged(bool& return);
    void ApplySettings();
    void InitializeOptions();
    void HandleBackPress();
    void CloseScreen();
    void AskDefaultQuestion();
    void DoSave();
    void CloseMenu();
    void ShowFooter(bool Show);
    void EnableButtonFocusAnims();
    void SelectDefaultFocus();
    void SetWidgetFocused(class UWidget* widget to focus, bool Scroll Into View);
    void GetAdjacentWidget(class UWidget* Widget, bool prev, class UWidget*& adj widget);
    void HandleActivate(class UUserWidget* Widget);
    void UI panel close(bool immediate);
    void Construct();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void UI panel set controller(class UObject* panel controller);
    void question menu - response(int32 button clicked index);
    void ExecuteUbergraph_UI_Graphics(int32 EntryPoint);
}; // Size: 0x502

#endif
