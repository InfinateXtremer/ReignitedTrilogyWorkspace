#ifndef UE4SS_SDK_UI_PauseMenu_HPP
#define UE4SS_SDK_UI_PauseMenu_HPP

class UUI_PauseMenu_C : public UFalconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UCanvasPanel* CanvasPanel_4;                                                // 0x0218 (size: 0x8)
    class UUI_Background_000_C* UI_Background_000;                                    // 0x0220 (size: 0x8)
    FVector2D viewport size;                                                          // 0x0228 (size: 0x8)
    float last viewport scale;                                                        // 0x0230 (size: 0x4)
    bool focused;                                                                     // 0x0234 (size: 0x1)
    TArray<class TSubclassOf<UUserWidget>> pending panel class;                       // 0x0238 (size: 0x10)
    class UUserWidget* child panel;                                                   // 0x0248 (size: 0x8)
    int32 selected panel button;                                                      // 0x0250 (size: 0x4)
    bool do inventory;                                                                // 0x0254 (size: 0x1)
    bool do debug print;                                                              // 0x0255 (size: 0x1)
    bool menu closing;                                                                // 0x0256 (size: 0x1)
    bool we jumped;                                                                   // 0x0257 (size: 0x1)

    void ResizeChildren();
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void debug print pending panels();
    void open child panel();
    void UI panel set controller(class UObject* panel controller);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void add child widget(class UUserWidget* user widget, int32 ZOrder);
    void Destruct();
    void UI panel controller - open panel(class UUserWidget* UI panel ref, TSubclassOf<class UUserWidget> UI panel class, bool Pop Previous);
    void UI panel controller - panel closed(class UUserWidget* panel widget, bool close all);
    void UI panel close(bool immediate);
    void ShowScreen();
    void ExecuteUbergraph_UI_PauseMenu(int32 EntryPoint);
}; // Size: 0x258

#endif
