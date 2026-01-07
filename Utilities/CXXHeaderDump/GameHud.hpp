#ifndef UE4SS_SDK_GameHud_HPP
#define UE4SS_SDK_GameHud_HPP

class AGameHud_C : public AFalconHud
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UBP_RebindableSystem_C* BP_RebindableSystem;                                // 0x0438 (size: 0x8)
    class UFalconKeySequenceComponent* FalconKeySequence;                             // 0x0440 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0448 (size: 0x8)
    class UUserWidget* debug menu widget;                                             // 0x0450 (size: 0x8)
    class UUI_HUD_Gems_000_C* gem widget;                                             // 0x0458 (size: 0x8)
    class UUI_GenericFullScreenContainer_C* hud widget;                               // 0x0460 (size: 0x8)
    class UUI_HUD_Statues_000_C* dragon widget;                                       // 0x0468 (size: 0x8)
    class UUI_PauseMenu_C* pause widget;                                              // 0x0470 (size: 0x8)
    class UUI_HUD_Health_000_C* health widget;                                        // 0x0478 (size: 0x8)
    class UUI_HUD_Timer_C* hud timer widget;                                          // 0x0480 (size: 0x8)
    class UUI_HUD_Counter_C* hud counter widget;                                      // 0x0488 (size: 0x8)
    class UUI_Footer_C* hud footer widget;                                            // 0x0490 (size: 0x8)
    class UUserWidget* dialog widget;                                                 // 0x0498 (size: 0x8)
    class UUserWidget* level transition widget;                                       // 0x04A0 (size: 0x8)
    class UUI_QuestionAnswer_C* question widget;                                      // 0x04A8 (size: 0x8)
    class UUI_HUD_InventoryCount_C* particle Widget;                                  // 0x04B0 (size: 0x8)
    class UUI_Reticle_001_C* hud reticle widget;                                      // 0x04B8 (size: 0x8)
    class UUI_MiniMap_Placement_C* mini map widget;                                   // 0x04C0 (size: 0x8)
    class UUI_HUD_SpeedRunTimer_C* speed run widget;                                  // 0x04C8 (size: 0x8)
    class UUI_Dialogue_Difficulty_C* dialog difficulty widget;                        // 0x04D0 (size: 0x8)
    class UUI_Dialogue_GemTotal_C* dialog treasure count widget;                      // 0x04D8 (size: 0x8)
    class UUI_TimeBar_C* gate timer widget;                                           // 0x04E0 (size: 0x8)
    class UUI_SelectFile_C* select slot widget;                                       // 0x04E8 (size: 0x8)
    class UUI_Main_C* game select menu;                                               // 0x04F0 (size: 0x8)
    class UUserWidget* boss bar widget;                                               // 0x04F8 (size: 0x8)
    bool bDownloadMessageOn;                                                          // 0x0500 (size: 0x1)
    class UUI_FlightScreen_C* flight screen widget;                                   // 0x0508 (size: 0x8)
    class UText3DWidget_C* Text3DWidget;                                              // 0x0510 (size: 0x8)
    TArray<FString> test strings;                                                     // 0x0518 (size: 0x10)
    int32 test integer;                                                               // 0x0528 (size: 0x4)
    class UUI_Key_C* key widget;                                                      // 0x0530 (size: 0x8)
    class UUI_GameplayContainer_C* gameplay widget;                                   // 0x0538 (size: 0x8)
    FGameHud_CPause menu shown pause menu shown;                                      // 0x0540 (size: 0x10)
    class UUserWidget* loading screen;                                                // 0x0550 (size: 0x8)
    class UUI_GameOver_LoadingBar_C* game over bar widget;                            // 0x0558 (size: 0x8)
    bool shipping build;                                                              // 0x0560 (size: 0x1)
    class UUI_SystemOptions_C* SystemOptionsScreenWidget;                             // 0x0568 (size: 0x8)
    class UUI_KBMControls_C* KBMControlsScreenWidget;                                 // 0x0570 (size: 0x8)
    FGameHud_CDialogue closed dialogue closed;                                        // 0x0578 (size: 0x10)
    class UUI_Graphics_C* GraphicsScreenWidget;                                       // 0x0588 (size: 0x8)
    bool ShowQuestionCountdown;                                                       // 0x0590 (size: 0x1)
    class UUI_InventoryCounters_C* inventory widget;                                  // 0x0598 (size: 0x8)

    void Hud Gate Timer - Get Time Remaining(float& time remaining);
    void Hud Footer - Show(class UObject*& hud footer);
    void Hud Footer - Get Footer(class UObject*& hud footer);
    void Hud Counter - Get Active Counters(TArray<FString>& counter names);
    void Hud Counter - Get Counts(FString Name, int32& current count, int32& total count, bool& is shown);
    void Hud Timer - Get Time Remaining(float& time remaining);
    void GetHudVisibility(bool& visible);
    void HUD Inventory - Show(bool Show);
    void ResizeWidgetsForNewRes();
    void ShowQuestion(FString question, FString ButtonLabel1, FString ButtonLabel2, bool Button2Default, class UObject* Controller, bool ShowCountdown);
    void OnDialogueClosed();
    void Remove Bottom Left Right Bars();
    void hud counter widget - set show in pause menu(FString counter name, bool Show);
    void show hud counters(bool Show, bool autohide);
    void should show boss loading ui(bool& Result);
    void CreateGameplayContainer();
    void boss bar - heal(int32 Count);
    void create button prompt widget();
    void Transition - Show Loading Screen(bool Show, float fade, TEnumAsByte<ELevelTransitionType::Type> trans type);
    void fanfare - level load update(bool load complete);
    void flight screen - create();
    void show/hide eula(bool Show, class UObject* Controller);
    void Show Credits Screen(bool return to title);
    void debug show talisman();
    void temporarily set mini map visibility(bool visible);
    void hud counter widget - hide(FString counter name);
    void hud counter widget - update(FString counter name, int32 new count);
    void hud counter widget - create(FString Name, class UUI_HUD_Counter_C*& hud counter widget);
    void show button prompt ui(bool Show, FString Mode);
    void show falcon screen(bool Show, TSubclassOf<class UFalconWidget> falcon widget class);
    void debug add skill points();
    void show difficulty screen(bool Show);
    void Profile Changed Screen - Show/Hide(bool Show);
    void show egg collection ui(int32 egg count, int32 total eggs);
    void show letterbox(bool Show);
    float FlightScreenGetTimeElapsed();
    void show fanfare message(EFanfareType Type, FString optional name);
    void create title screen();
    void get demo mode(bool& demo mode);
    void destroy demo title();
    void create demo title (bool allow back);
    void level inventory counters - updated(FString update context);
    void level inventory counters - show/hide(bool Show, bool autohide);
    void Download - Show/Hide(bool Show);
    void Controller Screen - Show/Hide(bool Condition);
    float FlightScreenGetTimeRemaining();
    void Flight Summary - Hide();
    void Flight Summary - Configure(class UObject* Owner, EInventoryType flight reward, TArray<FFlightResult>& target results, EFlightLevelResult Result, float Time, float best time, int32 place);
    void Flight Summary - Show();
    void Flight Screen - Collect(bool orbChallenge, EFlightLevelTargetType ItemType, float bonusSeconds);
    void Flight Screen - Hide();
    void Flight Screen - Show(float starting seconds, bool orb challenge, TArray<EFlightLevelTargetType>& Targets);
    void Key - Hide();
    void Key - Show(EFalconHudWidgetPosition Pos);
    void boss bar - damage(int32 Count);
    void boss bar - hide();
    void boss bar - create(int32 pip count, FString Boss);
    void update speed run visibility();
    void update map visibility();
    TSubclassOf<class UUserWidget> get dialog question class(TArray<FText>& TargetArray);
    void close full screen ui widgets();
    void create hud container widget();
    void create hud inventory widgets();
    bool debug menu invoked();
    void show debug menu(bool Show);
    void handle debug menu input(bool& Handled);
    void UserConstructionScript();
    void Hud Timer - Set Paused(bool paused);
    void Hud Timer - Hide();
    void Hud Counter - Show(FString counter name, int32 total count, int32 Start Count, float Auto Hide Seconds, TEnumAsByte<EHudPosition::Type> hud position);
    void Hud Counter - Set Count(FString counter name, int32 Count);
    void Hud Counter - Hide(FString counter name);
    void Hud Timer - Show(TEnumAsByte<EHudPosition::Type> Position, float time in seconds);
    void Hud Footer - Add Entry(TEnumAsByte<EMenuControls::Type> Control, FString Label);
    void Hud Footer - Hide();
    void Hud Footer - Remove All();
    void Hud Footer - Remove Entry(TEnumAsByte<EMenuControls::Type> Control);
    void show level inventory(bool Show, bool autohide);
    void Show Main Menu(bool from title);
    void Show Select Save Menu();
    void Show Level Transition Screen(TEnumAsByte<ELevelTransitionType::Type> transition, bool show screen, float fade in time, float fade out time);
    void Question Menu - Show(FString question, FString button label 1, FString button label 2, bool button 2 is default, class UObject* Controller);
    void Question Menu - Close(bool immediate);
    void Hud Inventory - Updated(bool force display);
    void ShowInventoryMenu(bool Show);
    void Hud Reticle - Show();
    void Hud Reticle - Hide();
    void Hud Reticle - Fire();
    void Hud Map - Show();
    void Hud Map - Hide();
    void Hud Map - Update Visibility();
    void HudDialogHide();
    void HudDialogBalloonist(const class UObject* Owner, const FText& question, const TArray<FText>& destinations, int32 defaultDestinationIndex);
    void HudDialogActivate(const class UObject* Owner, const FText& Title, const FText& question, float questionVOSecs, const TArray<FText>& answers, int32 defaultAnswerIndex);
    void HUD Dialog - Difficulty - Show(int32 difficulty);
    void HUD Dialog - Difficulty - Hide();
    void HUD Dialog - Treasure Count - Show();
    void HUD Dialog - Treasure Count - Hide();
    void ShowPauseMenu(bool Show);
    void Hud Gate Timer - Show(float duration seconds, float starting seconds elapsed, TEnumAsByte<EHudGateTimerType::Type> timer type, EFalconTimeBarPlacement Placement);
    void Hud Gate Timer - Hide();
    void close pause menu();
    void Show Title Menu();
    void open pause menu(bool show inventory);
    void Hud - Boss Bar - Show(int32 hit count, FString Boss);
    void Hud - Boss Bar - Hide();
    void Hud - Boss Bar - Damage(int32 Count);
    void Hud - Boss Bar - Heal(int32 Count);
    void Hud - Key - Show(EFalconHudWidgetPosition Pos);
    void Hud - Key - Hide();
    void FlightScreenShow(UClass* flightScreenWidgetClass, float startingSeconds, bool orbChallenge, const TArray<EFlightLevelTargetType>& Targets);
    void FlightScreenHide(UClass* flightScreenWidgetClass);
    void FlightScreenCollect(UClass* flightScreenWidgetClass, EFlightLevelTargetType ItemType, float bonusSeconds);
    void FlightSummaryShow();
    void FlightSummaryConfigure(class UObject* aOwner, EInventoryType flightReward, const TArray<FFlightResult>& targetResults, EFlightLevelResult FlightResult, float Time, float bestTime, int32 place);
    void FlightSummaryHide();
    void Hud Gate Timer - Set Time Scale(float time scale);
    void SetHudVisibility(bool Show);
    void Show Download Message(bool Show);
    void ShowTitle();
    void ShowFanfare(EFanfareType MessageType, FString optionalName);
    void panel handle close(int32 close all, class UUserWidget* panel widget);
    void Show Letter Box(bool Show);
    void ShowEggCollected(int32 eggCount, int32 eggTotal);
    void ShowControllerErrorScreen(bool inShow);
    void ShowProfileChangedScreen(bool inShow);
    void ShowDifficultyScreen(bool inShow);
    void ShowMovieTheaterScreen(bool inShow);
    void ShowLookModeUI(bool inShow);
    void ShowSpitModeUI(bool inShow);
    void ShowDebugMenu(bool Show);
    void ShowSpiritOrbCount();
    void SetMiniMapVisibility(bool InVisible);
    void MiniMapAddTalismanMarker(const class UObject* talisman);
    void Show Credits(bool return to title);
    void ReceiveTick(float DeltaSeconds);
    void eula - show(class UObject* Controller);
    void eula - hide();
    void ReceiveBeginPlay();
    void Level Load Complete();
    void Level Unload Started();
    void panel handle button focused(FpanelButtonData button data);
    void ShowTalkModeUI(bool inShow);
    void panel handle mouse down(FpanelButtonData button data, FPointerEvent mouse event);
    void panel handle key down(FpanelButtonData button data, FKeyEvent key event);
    void panel handle key up(FpanelButtonData button data, FKeyEvent key event);
    void panel handler configure(FpanelMenuData panel data);
    void Hud SpeedRunTimer - Update Visibility();
    void Hud SpeedRunTimer - Hide();
    void Hud SpeedRunTimer - Show();
    void Hud - Orb - Hide();
    void BP_ShowLevelInventory(bool Show, bool autohide);
    void BP_HudInventoryUpdated();
    void BP_ShowTreasureCount(bool Show);
    void AddGameplayWidget(class UUserWidget* UserWidget, int32 ZOrder);
    void Hud - Orb - Show();
    void Hud Handle Falcon Game State Change(EFalconGameState previous game state, EFalconGameState current game state);
    void Add Hud Widget(class UUserWidget* Widget, int32 ZOrder);
    void Hud Reticle - MoveTo(FVector2D new position, bool Lerp, float lerp seconds);
    void Reset Hud Widgets();
    void Hud Counter - Show While Paused(FString counter name, bool Show);
    void AddInteractiveWidget(class UUserWidget* UserWidget, int32 ZOrder);
    void MiniMapAddGreenOrbMarkers();
    void fade in game play widget();
    void level ended - remove level widgets();
    void ShowSystemOptions();
    void ShowKeyboardControls();
    void ShowGraphicsOptions();
    void Question Menu Countdown - Show(FString question, FString button label 1, FString button label 2, bool button 2 is default, class UObject* Controller);
    void Show HUD Inventory(bool Show);
    void ExecuteUbergraph_GameHud(int32 EntryPoint);
    void dialogue closed__DelegateSignature();
    void pause menu shown__DelegateSignature(bool pause opened);
}; // Size: 0x5A0

#endif
