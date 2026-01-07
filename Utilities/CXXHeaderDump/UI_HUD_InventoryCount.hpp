#ifndef UE4SS_SDK_UI_HUD_InventoryCount_HPP
#define UE4SS_SDK_UI_HUD_InventoryCount_HPP

class UUI_HUD_InventoryCount_C : public UHudInventoryCountWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0230 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0238 (size: 0x8)
    class UOverlay* ImageOverlay;                                                     // 0x0240 (size: 0x8)
    class UUI_HUD_Numbers_C* UI_HUD_Numbers001;                                       // 0x0248 (size: 0x8)
    class UUI_HUD_Numbers_C* UI_HUD_Numbers002;                                       // 0x0250 (size: 0x8)
    class UUI_HUD_Numbers_C* UI_HUD_Numbers003;                                       // 0x0258 (size: 0x8)
    TArray<class UUI_HUD_Numbers_C*> Numbers;                                         // 0x0260 (size: 0x10)
    int32 Count;                                                                      // 0x0270 (size: 0x4)
    int32 State;                                                                      // 0x0274 (size: 0x4)
    FTimerHandle timer inventory;                                                     // 0x0278 (size: 0x8)
    FTimerHandle timer display;                                                       // 0x0280 (size: 0x8)
    bool do debug print;                                                              // 0x0288 (size: 0x1)
    int32 new count;                                                                  // 0x028C (size: 0x4)
    bool updated;                                                                     // 0x0290 (size: 0x1)
    EInventoryType inventory type;                                                    // 0x0291 (size: 0x1)
    bool current level only;                                                          // 0x0292 (size: 0x1)
    TEnumAsByte<EHudPosition::Type> hud position;                                     // 0x0293 (size: 0x1)
    TSubclassOf<class UUserWidget> item image widget class;                           // 0x0298 (size: 0x8)
    bool show requested;                                                              // 0x02A0 (size: 0x1)
    bool in play;                                                                     // 0x02A1 (size: 0x1)
    bool ignore updates until play intro;                                             // 0x02A2 (size: 0x1)

    void get item count(int32& Count);
    void do outro stuff();
    void check inventory();
    void change numbers();
    void Destruct();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void play intro();
    void play outro();
    void Hud Inventory - Updated(bool force display);
    void ConfigureScreen(const FFalconScreenConfigData& configData);
    void InventoryCountUpdated();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void handle game state change(EFalconGameState PrevState, EFalconGameState NextState);
    void ExecuteUbergraph_UI_HUD_InventoryCount(int32 EntryPoint);
}; // Size: 0x2A3

#endif
