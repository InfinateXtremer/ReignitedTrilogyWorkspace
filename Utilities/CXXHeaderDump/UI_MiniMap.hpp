#ifndef UE4SS_SDK_UI_MiniMap_HPP
#define UE4SS_SDK_UI_MiniMap_HPP

class UUI_MiniMap_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0210 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0218 (size: 0x8)
    class UBorder* Border_0;                                                          // 0x0220 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0228 (size: 0x8)
    class UTextBlock* debugiconinfo;                                                  // 0x0230 (size: 0x8)
    class UTextBlock* debugimageinfo;                                                 // 0x0238 (size: 0x8)
    class UTextBlock* debuglabel;                                                     // 0x0240 (size: 0x8)
    class UTextBlock* DebugText;                                                      // 0x0248 (size: 0x8)
    class UImage* Map;                                                                // 0x0250 (size: 0x8)
    class UImage* Marker;                                                             // 0x0258 (size: 0x8)
    class UUI_MiniMap_Spyro_C* UI_MiniMap_Spyro;                                      // 0x0260 (size: 0x8)
    FVector2D level extents;                                                          // 0x0268 (size: 0x8)
    FVector2D Center;                                                                 // 0x0270 (size: 0x8)
    FVector2D Scale;                                                                  // 0x0278 (size: 0x8)
    FVector2D image extent;                                                           // 0x0280 (size: 0x8)
    FVector2D Offset;                                                                 // 0x0288 (size: 0x8)
    bool Shown;                                                                       // 0x0290 (size: 0x1)
    bool in play;                                                                     // 0x0291 (size: 0x1)
    bool paused;                                                                      // 0x0292 (size: 0x1)
    bool map ready;                                                                   // 0x0293 (size: 0x1)
    TArray<class UUI_MiniMap_GreenOrbMarker_C*> green orb markers;                    // 0x0298 (size: 0x10)
    FString current level;                                                            // 0x02A8 (size: 0x10)
    bool level ready;                                                                 // 0x02B8 (size: 0x1)
    bool load requested;                                                              // 0x02B9 (size: 0x1)
    TArray<FMiniMapOrbEntry> s2 orbs;                                                 // 0x02C0 (size: 0x10)
    TArray<FMiniMapOrbEntry> s2 orbs active;                                          // 0x02D0 (size: 0x10)
    bool temp hidden;                                                                 // 0x02E0 (size: 0x1)

    void debug print opacity(FString Label);
    void create orb icon(const FMiniMapOrbEntry& MiniMapOrbEntry);
    void matches existing position(FMiniMapOrbEntry orb, TArray<FMiniMapOrbEntry>& orbs, bool& matched);
    void get orbs(TArray<FPhasmidGameSaveObjectData>& saved data);
    void debug print green orbs saved(TArray<FPhasmidGameSaveObjectData>& Array);
    void debug print green orbs found(TArray<class ABP_S2_Orb_Rewarded_C*>& TargetArray);
    void check for level unload(EFalconGameState current game state);
    void check for map update();
    void is scaled position nearly equal(FVector world position 1, FVector world position 2, bool& nearly equal);
    void show green orbs();
    void debug print state of the game change(EFalconGameState gs from, EFalconGameState gs to);
    void Update Visibility();
    void find talisman(class UObject*& talisman);
    void set talisman position(class UObject* talisman);
    void update map();
    void update player position();
    void OnLoaded_E0405D284D973E3C46ADCCA353ED922C(class UObject* Loaded);
    void Load Mini Map Texture Async(FString level name);
    void map hide();
    void mini map add talisman marker(class UObject* talisman object ref);
    void mini map configure();
    void Construct();
    void handle pause menu(bool pause opened);
    void Destruct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void On Game State Changed(EFalconGameState PrevState, EFalconGameState NextState);
    void mini map add green orb markers();
    void update visibility after delay();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void temp hide(bool On);
    void ExecuteUbergraph_UI_MiniMap(int32 EntryPoint);
}; // Size: 0x2E1

#endif
