#ifndef UE4SS_SDK_UI_KBMControls_HPP
#define UE4SS_SDK_UI_KBMControls_HPP

class UUI_KBMControls_C : public UFalconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0218 (size: 0x8)
    class UTextBlock* BindingPromptTextBlock;                                         // 0x0220 (size: 0x8)
    class UScrollBox* ItemScrollBox;                                                  // 0x0228 (size: 0x8)
    class UVerticalBox* ItemsVerticalBox;                                             // 0x0230 (size: 0x8)
    class UUI_KBMBindingComponent_C* KBMBinding1;                                     // 0x0238 (size: 0x8)
    class UUI_KBMBindingComponent_C* KBMBinding2;                                     // 0x0240 (size: 0x8)
    class UUI_KBMBindingComponent_C* KBMBinding3;                                     // 0x0248 (size: 0x8)
    class UUI_KBMBindingComponent_C* KBMBinding4;                                     // 0x0250 (size: 0x8)
    class UUI_KBMBindingComponent_C* KBMBinding5;                                     // 0x0258 (size: 0x8)
    class UUI_KBMBindingComponent_C* KBMBinding6;                                     // 0x0260 (size: 0x8)
    class UUI_Title_Background_C* ScreenBgWBP;                                        // 0x0268 (size: 0x8)
    FString menu key;                                                                 // 0x0270 (size: 0x10)
    bool closing;                                                                     // 0x0280 (size: 0x1)
    FText FooterSelectText;                                                           // 0x0288 (size: 0x18)
    FText FooterCancelText;                                                           // 0x02A0 (size: 0x18)
    FText KeyboardControlsBtnText;                                                    // 0x02B8 (size: 0x18)
    FText GraphicsBtnTxt;                                                             // 0x02D0 (size: 0x18)
    bool InPauseMenu;                                                                 // 0x02E8 (size: 0x1)
    TArray<FText> DebugBindingNames;                                                  // 0x02F0 (size: 0x10)
    TArray<FText> DebugPrimaryBindings;                                               // 0x0300 (size: 0x10)
    TArray<FText> DebugSecondaryBindings;                                             // 0x0310 (size: 0x10)
    bool IsBindingBeingSet;                                                           // 0x0320 (size: 0x1)
    FText FooterSaveText;                                                             // 0x0328 (size: 0x18)
    FText FooterResetText;                                                            // 0x0340 (size: 0x18)
    FText PreviousBinding;                                                            // 0x0358 (size: 0x18)
    class UUI_KBMBindingComponent_C* BindingBeingSet;                                 // 0x0370 (size: 0x8)
    class UObject* PanelController;                                                   // 0x0378 (size: 0x8)
    bool ChangedSomething;                                                            // 0x0380 (size: 0x1)
    bool SetDefaultQuestionActive;                                                    // 0x0381 (size: 0x1)
    FText SetToDefaultQuestion;                                                       // 0x0388 (size: 0x18)
    FText QuestionYes;                                                                // 0x03A0 (size: 0x18)
    FText QuestionNo;                                                                 // 0x03B8 (size: 0x18)
    bool SameKeybindQuestionActive;                                                   // 0x03D0 (size: 0x1)
    bool SameKeybindQuestionAnswered;                                                 // 0x03D1 (size: 0x1)
    FText SameKeybindQuestion;                                                        // 0x03D8 (size: 0x18)
    FKey NewKeyToChangeTo;                                                            // 0x03F0 (size: 0x18)
    TArray<class UUI_KBMBindingComponent_C*> KBMBindingWidgets;                       // 0x0408 (size: 0x10)
    bool ApplyChangesQuestionActive;                                                  // 0x0418 (size: 0x1)
    FText ApplyChangesQuestion;                                                       // 0x0420 (size: 0x18)
    FText FooterRemoveBinding;                                                        // 0x0438 (size: 0x18)
    bool UnboundActionsQuestionActive;                                                // 0x0450 (size: 0x1)
    FText UnboundActionsQuestionFromLeaving;                                          // 0x0458 (size: 0x18)
    FText UnboundActionsAnswerStay;                                                   // 0x0470 (size: 0x18)
    FText UnboundActionsAnswerRevert;                                                 // 0x0488 (size: 0x18)
    FText UnboundActionsQuestionFromSaving;                                           // 0x04A0 (size: 0x18)
    FText UnboundActionsAnswerContinue;                                               // 0x04B8 (size: 0x18)
    bool UnboundActionsQuestionIsFromSaving;                                          // 0x04D0 (size: 0x1)

    void handle key up(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle focus(class UUserWidget* Widget, FEventReply& result value);
    void handle key down(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle mouse down(class UUserWidget* Widget, FPointerEvent pointer event, FEventReply& return value);
    void SetMenuKeyData(class UWidget* Focused Widget);
    void Prepare Binding Controls(bool Is Waiting For Input);
    void CanActionHaveReboundedKeys(EPhasmidAction Action, bool& ReturnVal);
    void AskUnboundActionsQuestion(bool FromSaving, bool& ShowingPopup);
    void HandleDeleteBinding(class UObject* Object);
    void HandleSaveCurrentBindingChanges();
    void HandleBackPress();
    void CloseScreen();
    void UpdateBindings();
    void CreateStringOfActionNames(TArray<EPhasmidAction>& Actions, FText& CreatedText);
    void AskSameKeybindQuestion(FKey Key, EPhasmidAction CurrentAction);
    void AskDefaultQuestion();
    void UpdateCurrentBinding(FKey Key, bool& HandleInput);
    void DoSave();
    void OnMouseButtonDownFromGameInstance(const FKey& MouseKey, bool& Handled);
    void CancelSettingBinding();
    void CreateBindings();
    void CloseMenu();
    void ShowFooter(bool Show);
    void OnKeyDownFromGameInstance(const FKeyEvent& KeyEvent, bool& Handled);
    void EnableButtonFocusAnims();
    void SelectDefaultFocus();
    void SetWidgetFocused(class UWidget* widget to focus, bool ScrollToWidget);
    void GetAdjacentWidget(class UWidget* Widget, bool prev, class UWidget*& adj widget);
    void HandleActivate(class UUserWidget* Widget);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void Construct();
    void UI panel set controller(class UObject* panel controller);
    void UI panel close(bool immediate);
    void question menu - response(int32 button clicked index);
    void ExecuteUbergraph_UI_KBMControls(int32 EntryPoint);
}; // Size: 0x4D1

#endif
