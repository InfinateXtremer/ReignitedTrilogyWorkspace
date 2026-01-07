#ifndef UE4SS_SDK_UI_GenericFullScreenContainer_HPP
#define UE4SS_SDK_UI_GenericFullScreenContainer_HPP

class UUI_GenericFullScreenContainer_C : public UFalconLayerWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0218 (size: 0x8)
    class UWidgetAnimation* fade in;                                                  // 0x0220 (size: 0x8)
    class UWidgetAnimation* fade out;                                                 // 0x0228 (size: 0x8)
    class UCanvasPanel* CanvasPanel_4;                                                // 0x0230 (size: 0x8)
    class UUI_LetterBoxBlackBars_C* UI_LetterBoxBlackBars;                            // 0x0238 (size: 0x8)

    class UUserWidget* FindScreen(UClass* inScreenClass);
    void Add Child(class UUserWidget* Widget, int32 ZOrder);
    void add child widget(class UUserWidget* user widget, int32 ZOrder);
    void ShowScreen();
    void HideScreen(bool immediate);
    void AddScreen(class UFalconWidget* inScreen, int32 ZOrder);
    void RemoveScreen(UClass* inScreenClass, bool immediate);
    void do fade in();
    void do fade out();
    void ExecuteUbergraph_UI_GenericFullScreenContainer(int32 EntryPoint);
}; // Size: 0x240

#endif
