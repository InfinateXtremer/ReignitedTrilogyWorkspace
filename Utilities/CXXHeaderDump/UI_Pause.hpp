#ifndef UE4SS_SDK_UI_Pause_HPP
#define UE4SS_SDK_UI_Pause_HPP

class UUI_Pause_C : public UFalconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0218 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0220 (size: 0x8)
    class UUI_Pause_Button_C* 001;                                                    // 0x0228 (size: 0x8)
    class UUI_Pause_Button_C* 002;                                                    // 0x0230 (size: 0x8)
    class UUI_Pause_Button_C* 003;                                                    // 0x0238 (size: 0x8)
    class UUI_Pause_Button_C* 004;                                                    // 0x0240 (size: 0x8)
    class UUI_Pause_Button_C* 005;                                                    // 0x0248 (size: 0x8)
    class UUI_Container_001_C* UI_Container_001;                                      // 0x0250 (size: 0x8)
    class UUI_Container_002_C* UI_Container_002;                                      // 0x0258 (size: 0x8)
    class UUI_LevelTotals_C* UI_LevelTotals;                                          // 0x0260 (size: 0x8)
    class UUI_MenuHeader_C* UI_MenuHeader;                                            // 0x0268 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x0270 (size: 0x8)
    class UUserWidget* focused button;                                                // 0x0278 (size: 0x8)
    TArray<class UUserWidget*> button set;                                            // 0x0280 (size: 0x10)
    bool do debug print;                                                              // 0x0290 (size: 0x1)
    class UObject* panel controller;                                                  // 0x0298 (size: 0x8)
    FString menu key;                                                                 // 0x02A0 (size: 0x10)
    EFalconAreaExitTitle exit area;                                                   // 0x02B0 (size: 0x1)
    bool exit to title;                                                               // 0x02B1 (size: 0x1)
    bool do restart;                                                                  // 0x02B2 (size: 0x1)
    FText inventory label - game 1;                                                   // 0x02B8 (size: 0x18)
    FText inventory label - game 2;                                                   // 0x02D0 (size: 0x18)
    FText inventory label - game 3;                                                   // 0x02E8 (size: 0x18)
    FText button label - exit;                                                        // 0x0300 (size: 0x18)
    FText button label - exit area;                                                   // 0x0318 (size: 0x18)
    FText button label - quit flight;                                                 // 0x0330 (size: 0x18)
    FText button label - flight level;                                                // 0x0348 (size: 0x18)
    FText Question exit area;                                                         // 0x0360 (size: 0x18)
    FText Question quit;                                                              // 0x0378 (size: 0x18)
    FText Question label yes;                                                         // 0x0390 (size: 0x18)
    FText Question label no;                                                          // 0x03A8 (size: 0x18)
    FText footer label - activate;                                                    // 0x03C0 (size: 0x18)
    FText footer label - back;                                                        // 0x03D8 (size: 0x18)
    class UFalconKeySequenceComponent* key seq comp;                                  // 0x03F0 (size: 0x8)
    FText question label exit;                                                        // 0x03F8 (size: 0x18)
    FText question label stay;                                                        // 0x0410 (size: 0x18)
    FText question exit template;                                                     // 0x0428 (size: 0x18)
    bool go to title from question menu;                                              // 0x0440 (size: 0x1)
    FText level name loc text table ref;                                              // 0x0448 (size: 0x18)
    int32 life count;                                                                 // 0x0460 (size: 0x4)
    FText button label - giveup;                                                      // 0x0468 (size: 0x18)
    FText Question giveup;                                                            // 0x0480 (size: 0x18)
    FText question label giveup yes;                                                  // 0x0498 (size: 0x18)
    FText question label giveup no;                                                   // 0x04B0 (size: 0x18)
    FText button label - quit race;                                                   // 0x04C8 (size: 0x18)
    FText Question exit race;                                                         // 0x04E0 (size: 0x18)
    bool Active;                                                                      // 0x04F8 (size: 0x1)

    void handle mouse down(class UUserWidget* Widget, FPointerEvent pointer event, FEventReply& return value);
    void handle key up(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle focus(class UUserWidget* Widget, FEventReply& result value);
    void handle key down(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void HandleAreaExit();
    void SetMenuKeyData(class UUserWidget* Focused Widget);
    void OnMouseButtonDownFromGameInstance(const FKey& MouseKey, bool& Handled);
    void OnKeyDownFromGameInstance(const FKeyEvent& KeyEvent, bool& Handled);
    void race quit();
    void area giveup();
    void area quit();
    void GetPurchasedByIndex(int32 ID, bool& Result);
    void CheckCodeEntitlements(FString Code, bool& Allowed);
    void enable focus anims();
    void Select Default Button();
    void get adjacent widget index(int32 Index, bool prev, int32& adj index);
    void quit to hub();
    void quit to title();
    void quit flight level();
    void Handle Code Entry(FString key name);
    bool is current world flight level();
    void get homeworld display name(FString& homeworld display name);
    void is current world homeworld(bool& Result);
    void init footer();
    void handle activate(class UUserWidget* Widget);
    void is activate(FKey Key, bool& Result);
    void focus widget(class UUserWidget* Widget);
    void get adjacent widget(class UUserWidget* button widget, bool prev, class UUserWidget*& Widget);
    void is key cancel(FKey Key, bool& Result);
    void is control down(FKey Key, bool& Result);
    void is control up(FKey Key, bool& Result);
    void Construct();
    void UI panel set controller(class UObject* panel controller);
    void UI panel close(bool immediate);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void Destruct();
    void question menu - response(int32 button clicked index);
    void ExecuteUbergraph_UI_Pause(int32 EntryPoint);
}; // Size: 0x4F9

#endif
