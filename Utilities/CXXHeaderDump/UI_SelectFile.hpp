#ifndef UE4SS_SDK_UI_SelectFile_HPP
#define UE4SS_SDK_UI_SelectFile_HPP

class UUI_SelectFile_C : public UFalconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0218 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0220 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0228 (size: 0x8)
    class UUI_MenuHeader_C* UI_MenuHeader;                                            // 0x0230 (size: 0x8)
    class UUI_SelectFile_NoSaveButton_C* UI_SelectFile_NoSaveButton;                  // 0x0238 (size: 0x8)
    class UUI_SelectFile_Slot_C* UI_SelectFile_Slot1;                                 // 0x0240 (size: 0x8)
    class UUI_SelectFile_Slot_C* UI_SelectFile_Slot2;                                 // 0x0248 (size: 0x8)
    class UUI_SelectFile_Slot_C* UI_SelectFile_Slot3;                                 // 0x0250 (size: 0x8)
    class UUI_Title_Background_C* UI_Title_Background;                                // 0x0258 (size: 0x8)
    bool Active;                                                                      // 0x0260 (size: 0x1)
    FText menu select;                                                                // 0x0268 (size: 0x18)
    TArray<class UUserWidget*> slot widgets;                                          // 0x0280 (size: 0x10)
    FText menu back;                                                                  // 0x0290 (size: 0x18)
    int32 delete slot index;                                                          // 0x02A8 (size: 0x4)
    FText delete question;                                                            // 0x02B0 (size: 0x18)
    FText delete answer 1;                                                            // 0x02C8 (size: 0x18)
    FText delete answer 2;                                                            // 0x02E0 (size: 0x18)
    FText delete footer label;                                                        // 0x02F8 (size: 0x18)
    bool allow player change;                                                         // 0x0310 (size: 0x1)
    FText change user;                                                                // 0x0318 (size: 0x18)
    FText menu new game;                                                              // 0x0330 (size: 0x18)
    FText menu load game;                                                             // 0x0348 (size: 0x18)
    class UUserWidget* focus widget;                                                  // 0x0360 (size: 0x8)

    void handle key up(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle focus(class UUserWidget* Widget, FEventReply& result value);
    void handle key down(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle mouse down(class UUserWidget* Widget, FPointerEvent pointer event, FEventReply& return value);
    void OnKeyDownFromGameInstance(const FKeyEvent& KeyEvent, bool& Handled);
    void Set Initial Focus();
    void is save disabled?(bool& Disabled);
    void handle change user();
    void show player ui();
    void ask delete(class UUserWidget* Widget);
    void delete save();
    void handle cancel();
    void handle navigate(class UUserWidget* Widget, bool Next);
    void handle activate(class UUserWidget* the widget);
    void show footer(bool do show);
    void get default focus(class UUserWidget*& focus widget);
    void UI panel set controller(class UObject* panel controller);
    void UI panel close(bool immediate);
    void Construct();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void question menu - response(int32 button clicked index);
    void show xbox system menu();
    void ExecuteUbergraph_UI_SelectFile(int32 EntryPoint);
}; // Size: 0x368

#endif
