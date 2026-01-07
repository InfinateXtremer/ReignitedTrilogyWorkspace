#ifndef UE4SS_SDK_FalconGameState_HPP
#define UE4SS_SDK_FalconGameState_HPP

class AFalconGameState_C : public AFalconGameStateBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04A8 (size: 0x8)
    class UAchievementManagerComponent_C* AchievementManagerComponent;                // 0x04B0 (size: 0x8)
    class UPhasmidObjectSaveComponent* PhasmidObjectSave;                             // 0x04B8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x04C0 (size: 0x8)
    FName current level;                                                              // 0x04C8 (size: 0x8)
    FName loot level;                                                                 // 0x04D0 (size: 0x8)
    bool do debug print;                                                              // 0x04D8 (size: 0x1)
    FName global level;                                                               // 0x04E0 (size: 0x8)
    int32 param index saved level name;                                               // 0x04E8 (size: 0x4)
    FPhasmidObjectSaveDataList default save data list;                                // 0x04F0 (size: 0x10)
    class AGlobalTransporter_C* global transporter;                                   // 0x0500 (size: 0x8)
    FString current checkpoint name;                                                  // 0x0508 (size: 0x10)
    bool begin new game;                                                              // 0x0518 (size: 0x1)
    TArray<FString> initial level names;                                              // 0x0520 (size: 0x10)
    int32 param index life;                                                           // 0x0530 (size: 0x4)
    int32 param index current level;                                                  // 0x0534 (size: 0x4)
    int32 param index spirit particle;                                                // 0x0538 (size: 0x4)
    int32 param index treasure spent;                                                 // 0x053C (size: 0x4)
    int32 param index climbing;                                                       // 0x0540 (size: 0x4)
    int32 param index swimming;                                                       // 0x0544 (size: 0x4)
    int32 param index head bash;                                                      // 0x0548 (size: 0x4)
    int32 debug_extra_treasure;                                                       // 0x054C (size: 0x4)
    int32 debug_extra_eggs;                                                           // 0x0550 (size: 0x4)
    int32 debug_extra_dragons;                                                        // 0x0554 (size: 0x4)
    int32 debug_extra_orbs;                                                           // 0x0558 (size: 0x4)
    bool bDoLoadLevelWhenSaveCompletes;                                               // 0x055C (size: 0x1)
    int32 debug_extra_talismans;                                                      // 0x0560 (size: 0x4)
    bool game has started;                                                            // 0x0564 (size: 0x1)
    int32 param index level visit;                                                    // 0x0568 (size: 0x4)
    bool level changed;                                                               // 0x056C (size: 0x1)
    int32 param index superflame;                                                     // 0x0570 (size: 0x4)
    bool do load save;                                                                // 0x0574 (size: 0x1)
    FFalconGameState_CLoadDataRestored LoadDataRestored;                              // 0x0578 (size: 0x10)
    FPhasmidObjectSaveDataList checkpoint save - s2 spirit particles;                 // 0x0588 (size: 0x10)
    class AFalconLoadingScreen* loading screen;                                       // 0x0598 (size: 0x8)
    int32 param index butterfly;                                                      // 0x05A0 (size: 0x4)
    int32 param index skill point;                                                    // 0x05A4 (size: 0x4)
    bool initialized;                                                                 // 0x05A8 (size: 0x1)
    int32 debug extra s3 eggs;                                                        // 0x05AC (size: 0x4)
    class AFalconLoadingScreen* game over screen;                                     // 0x05B0 (size: 0x8)
    TArray<class AFalconLoadingScreen*> activeloadscreens;                            // 0x05B8 (size: 0x10)
    TEnumAsByte<ELevelTransitionType::Type> new game screen;                          // 0x05C8 (size: 0x1)
    bool save warning shown;                                                          // 0x05C9 (size: 0x1)

    //void GetCurrentLevelNameForActor(class AActor* Actor, FString& LevelName);
    //class ULevel* GetCurrentLevelForSaveData(FString& LevelName);
    //bool InCutscene();
    //void get completion pct for level(FString level path, float& pct complete);
    //void get level visited(FString level path, bool& visited);
    //void debug settings - get save object(class UDebugSettingSaveGame_C*& save object);
    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void get state of the game -DEPRECATED(TEnumAsByte<EGamestate::Type>& state of the game);
    void get starting level for game(int32 game index, FString& level path, bool& level has been played);
    void has game started(bool& game has started);
    void is any slot active(bool& active slot exists);
    void is slot active(int32 slot index, bool& slot is active);
    void get slot index(int32& slot index);
    void get game index(int32& the game index);
    void set menu string(FString menu key, FString string value, bool& key exists);
    void set menu float(FString menu key, float float value, bool& key exists);
    void get menu string(FString menu key, FString& string value, bool& key exists);
    void get menu float(FString menu key, float& float value, bool& key exists);
    void get is pause enabled(bool& is enabled);
    void get current level name(FString& level name);
    void get game save data objects for type(EInventoryType Type, bool all levels, FString Level, TArray<FPhasmidGameSaveObjectData>& object data list);
    void get game save data objects for level(FString level path, TArray<FPhasmidGameSaveObjectData>& data list);
    void get inventory collected count(EInventoryType item type, FString Level, bool all levels, int32& Count);
    void get inventory total count(EInventoryType item type, FString Level, bool all levels, int32& Count);
    void get last level played(FString& level name);
    void get player inventory item count(EInventoryType item type, bool current level, int32& item count);
    void get inventory totals(FString Level, TArray<FPhasmidInventoryItem>& inventory list);
    void get player inventory list for level(FString Level, TArray<FPhasmidInventoryItem>& Items);
    bool GetChangedKeybindValue(FString Key, FKey& Value);
    bool RemoveChangedKeybindValue(FString Key);
    bool SetChangedKeybindValue(FString Key, FKey Value);
    bool getCheckpointDataForActorByName(FString ActorName, FPhasmidObjectSaveDataList& dataList);
    bool getSaveDataForActorByName(FString ActorName, FString Level, FPhasmidObjectSaveDataList& dataList);
    bool SetGlobalFloatValue(FString Key, float Value);
    bool GetGlobalFloatValue(FString Key, float& Value);
    bool getSaveDataForActor(const class AActor* Actor, FString Level, FPhasmidObjectSaveDataList& dataList);
    void initialize save data();
    void get saved level key(int32 slot index, int32 game index, FString& Key);
    void set all sparx power unobtained();
    void set sparx power obtained(EInventoryType power type, bool obtained);
    void get sparx power obtained(EInventoryType power type, int32& got it if non-zero);
    void debug print game state save object(FPhasmidObjectSaveDataList object save data, FString Label);
    void add default save params();
    void Restore Spirit Particles from checkpoint data();
    void clear spirit particles();
    void Set Restart Level();
    void Hide3DLoadScreen(float fadeTime);
    void Show3DLoadScreen(TEnumAsByte<EFalconLoadScreen::Type> Type, float fadeTime);
    void restore superflame();
    void OnLoadGameAsyncCompleteFnForDropIn();
    void print time(FString Label);
    void OnLoadGameAsyncCompleteFn();
    void handle retain progression data setting();
    void restore settings();
    void Title Music Start/Stop(bool Start);
    void NonGPL_GameIndexInitialize();
    FString CheckpointObjectName_s2SP();
    void Get Spirit Particle Count(int32& Count);
    void Add Spirit Particle();
    void set default show unvisited levels if running in windows();
    void Initialize Player Profile(bool skip restore);
    void update loading icon(bool Show);
    void set level visited(FString level path);
    void Calculate Item Quantity By Type(EInventoryType item type, int32 item count, int32& value count);
    void get inventory levels for game index(int32 game index, TArray<FString>& Levels);
    void get progression inventory types for game index(int32 game index, TArray<EInventoryType>& types list);
    void get progress pct for game(int32 game index, int32 slot index, float& pct);
    void editor init save slot and game indices();
    FString get save slot active key(int32 slot index);
    void update do debug print setting();
    void do save progression(FString Checkpoint, FString level path);
    void get save type for checkpoint(FString Checkpoint, EPhasmidSaveType& save type);
    void is whirlwind checkpoint(FString Checkpoint, bool& Result);
    void debug print portal exit save data();
    void get table for game(class UDataTable*& level map table);
    void Get Initial Level Name(FString& level name);
    void valid level name(FString level name, bool& level name is valid);
    void update param count(EInventoryType item type, int32 quantity, bool Add);
    void update life orb count(int32 quantity);
    void Hud Notify Inventory Updated();
    void reset health();
    void reset life();
    void Init Options();
    void Init Sound();
    void Show Title Menu();
    void IsMainLevel(bool& Result);
    void set save param count(EInventoryType Type, int32 Count);
    void get save param count(EInventoryType item type, FPhasmidObjectSaveDataList& object save, int32& Count);
    void get spyro inventory count(EInventoryType inventory type, int32& Count);
    void get row name from level(FString level name, FName& streaming level row name);
    void get saved level param(FPhasmidSaveParam& last level);
    void set saved level name param(FString level name);
    void get saved level name(FString& level name);
    void restore from game load(FPhasmidObjectSaveDataList objectSaveData);
    void UserConstructionScript();
    void add item to player inventory(EInventoryType Item, int32 quantity);
    void set player inventory item count(EInventoryType item type, int32 Count, bool updateSettings);
    void save progression(FString level checkpoint, FString new level path);
    void begin level load(FString level name, bool New Game);
    void delete save(int32 Slot);
    void level load finished();
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void respawn at checkpoint();
    void level load state changed(TEnumAsByte<ELoadState::Type> LoadState, FString LevelPath);
    void objectSaveDataUpdated(const class AActor* Actor);
    void remove from player inventory(EInventoryType Item, int32 quantity);
    void complete level load();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void SetActiveSlot(int32 slotIndex);
    void SetActiveGame(int32 gameIndex);
    void restoreObjectDataFromSave(const class AActor* Actor);
    void set cutscene playing(bool is playing);
    //void DeleteSave();
    //void restart game();
    void set inventory totals(FString Level, EInventoryType Type, int32 quantity);
    void load game from save(int32 game slot, bool New Game, int32 NewParam);
    void set pause enabled(bool Enabled);
    void debug settings - persist save object();
    void OnCutsceneBegin();
    void OnCutsceneEnd();
    void SetEnableLoadScreen(bool Enable, float fadeTime);
    void objectStoreCheckpointData(const class AActor* Actor, const FPhasmidObjectSaveDataList& dataList, bool delayStoringUntilCheckpoint);
    void debug - add dragons(int32 Count, bool clear count first);
    void debug - add eggs(int32 Count, bool clear count first);
    void debug - add s2 orbs(int32 Count, bool clear count first);
    void debug - add treasure(int32 Count, bool clear count first);
    void question menu - response(int32 button clicked index);
    void objectStoreSerializedData(const class AActor* Actor, const FPhasmidObjectSaveDataList& dataList);
    void objectStoreCheckpointDataByName(FString Name, const FPhasmidObjectSaveDataList& dataList, bool delayStoringUntilCheckpoint);
    void objectStoreSerializedDataByName(FString ObjectName, const FPhasmidObjectSaveDataList& dataList);
    //void do level load();
    void debug - add talismans(int32 Count, bool clear count first);
    //void Start Game(int32 game index, int32 slot index);
    //void set slot index(int32 slot index);
    void ShowLoadScreen(bool Show, float fadeTime, TEnumAsByte<EFalconLoadScreen::Type> screenType);
    //void set game index(int32 game index);
    //void ShowSavingUI(bool inShow);
    //void ReturnToTitle(bool reloadSave);
    void set starting level for game(FString level path);
    void pause game for menu(bool do pause, bool ForceUnpause);
    void BP_SaveProgression(const class AActor* playerStartActor);
    void OnTfbCutsceneBegin();
    void OnTfbCutsceneEnd();
    void BP_RespawnPlayer();
    void InvokeSystemLogin();
    void debug - add s3 eggs(int32 Count, bool clear count first);
    void AwardLifeFromSkillPoint();
    //void BP_LoadIntoLevel(FName PortalRow, FName PortalName, TEnumAsByte<EFalconLoadScreen::Type> screenType);
    void ShowInventoryUI();
    void handle game state changed(EFalconGameState PrevState, EFalconGameState NextState);
    void BP_SetPlayerInventoryItemCount(EInventoryType ItemType, int32 Count, bool updateSettings);
    void ExecuteUbergraph_FalconGameState(int32 EntryPoint);
    void LoadDataRestored__DelegateSignature();
}; // Size: 0x5CA

#endif
