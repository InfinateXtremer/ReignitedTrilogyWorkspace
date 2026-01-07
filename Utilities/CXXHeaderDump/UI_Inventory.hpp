#ifndef UE4SS_SDK_UI_Inventory_HPP
#define UE4SS_SDK_UI_Inventory_HPP

class UUI_Inventory_C : public UFalconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0210 (size: 0x8)
    class UWidgetAnimation* travel outro;                                             // 0x0218 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0220 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0228 (size: 0x8)
    class UBorder* Border_0;                                                          // 0x0230 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0238 (size: 0x8)
    class UUI_Arrow_001_C* LeftArrow;                                                 // 0x0240 (size: 0x8)
    class UUI_Arrow_001_C* RightArrow;                                                // 0x0248 (size: 0x8)
    class UUI_GameTotals_C* UI_GameTotals_175;                                        // 0x0250 (size: 0x8)
    class UTextBlock* WorldName;                                                      // 0x0258 (size: 0x8)
    class UTextBlock* WorldNameShadow;                                                // 0x0260 (size: 0x8)
    class UObject* Controller;                                                        // 0x0268 (size: 0x8)
    class UUI_InventoryLevelList_C* level list;                                       // 0x0270 (size: 0x8)
    class UUI_InventoryLevelCollection_C* level collection list;                      // 0x0278 (size: 0x8)
    int32 panel close count;                                                          // 0x0280 (size: 0x4)
    FString world nom;                                                                // 0x0288 (size: 0x10)
    FString State;                                                                    // 0x0298 (size: 0x10)
    TArray<class UUserWidget*> panelS;                                                // 0x02A8 (size: 0x10)
    bool do debug print;                                                              // 0x02B8 (size: 0x1)
    bool allow jump;                                                                  // 0x02B9 (size: 0x1)
    FString selected level path;                                                      // 0x02C0 (size: 0x10)
    FText menu travel;                                                                // 0x02D0 (size: 0x18)
    FText menu stay;                                                                  // 0x02E8 (size: 0x18)
    FText menu question;                                                              // 0x0300 (size: 0x18)
    class UUserWidget* selected widget;                                               // 0x0318 (size: 0x8)
    FText footer label continue;                                                      // 0x0320 (size: 0x18)
    FText footer label travel;                                                        // 0x0338 (size: 0x18)
    FText footer label navigate right world;                                          // 0x0350 (size: 0x18)
    FText footer label navigate left world;                                           // 0x0368 (size: 0x18)
    FText footer label back;                                                          // 0x0380 (size: 0x18)
    bool skill points mode;                                                           // 0x0398 (size: 0x1)
    FText footer label skills;                                                        // 0x03A0 (size: 0x18)
    class UUI_SkillPoints_C* skill panel;                                             // 0x03B8 (size: 0x8)
    int32 skill page index;                                                           // 0x03C0 (size: 0x4)
    TArray<FText> skill points labels;                                                // 0x03C8 (size: 0x10)
    FText footer label navigate left;                                                 // 0x03D8 (size: 0x18)
    FText text ref to loc table;                                                      // 0x03F0 (size: 0x18)
    FText Artisans;                                                                   // 0x0408 (size: 0x18)
    FText notify patch msg;                                                           // 0x0420 (size: 0x18)
    FText notify patch button label;                                                  // 0x0438 (size: 0x18)
    bool do music transition;                                                         // 0x0450 (size: 0x1)
    class UUI_Epilogue_C* epilogue;                                                   // 0x0458 (size: 0x8)
    FText footer label art gallery;                                                   // 0x0460 (size: 0x18)
    bool we are level jumping;                                                        // 0x0478 (size: 0x1)
    bool Active;                                                                      // 0x0479 (size: 0x1)
    FText footer label navigate right;                                                // 0x0480 (size: 0x18)
    FText footer label change worlds;                                                 // 0x0498 (size: 0x18)
    FText footer label change pages;                                                  // 0x04B0 (size: 0x18)

    void handle key up(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle focus(class UUserWidget* Widget, FEventReply& result value);
    void handle key down(class UUserWidget* Widget, FKeyEvent key event, FEventReply& return value);
    void handle mouse down(class UUserWidget* Widget, FPointerEvent pointer event, FEventReply& return value);
    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void OnKeyDownFromGameInstance(const FKeyEvent& KeyEvent, bool& Handled);
    void min art gallery skill points(int32& Count);
    void can open art gallery(bool& Result);
    void create art gallery();
    void fade music transition();
    void start music transition();
    void can load level(FString level path, bool& Result);
    void remove skill panel();
    void change skill page(bool Forward);
    void Set Title Text();
    void create skill panel();
    void remove level panels();
    void exit skill points mode();
    void enter skill points mode();
    void get current world index(int32& Index, int32& world count);
    void update arrows();
    void show confirm();
    void do level jump();
    FLinearColor Shadow Color();
    void init homeworld();
    void adjust footer();
    void is jump allowed(FString level path, bool& allow jump);
    void init footer();
    void set world(bool prev, bool& world changed);
    void change world(bool prev);
    void create level panels();
    void close inventory();
    void Construct();
    void UI panel controller - open panel(class UUserWidget* UI panel ref, TSubclassOf<class UUserWidget> UI panel class, bool Pop Previous);
    void UI panel controller - panel closed(class UUserWidget* panel widget, bool close all);
    void UI panel close(bool immediate);
    void UI panel set controller(class UObject* panel controller);
    void Destruct();
    void question menu - response(int32 button clicked index);
    void play outro anim();
    void outro anim finished();
    void OnNewInputSource(EInputSource NewInputSource);
    void ExecuteUbergraph_UI_Inventory(int32 EntryPoint);
}; // Size: 0x4C8

#endif
