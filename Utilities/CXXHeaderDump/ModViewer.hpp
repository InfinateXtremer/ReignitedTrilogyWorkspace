#ifndef UE4SS_SDK_ModViewer_HPP
#define UE4SS_SDK_ModViewer_HPP

class UModViewer_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UButton* Button_0;                                                          // 0x0210 (size: 0x8)
    class UScrollBox* ModList;                                                        // 0x0218 (size: 0x8)
    TArray<TSoftObjectPtr<UDataTable>> PlayerMeshDT;                                  // 0x0220 (size: 0x10)
    TArray<TSoftObjectPtr<UDataTable>> BlueprintsDT;                                  // 0x0230 (size: 0x10)

    void get current level name(FString& level name);
    void get is pause enabled(bool& is enabled);
    void get game index(int32& the game index);
    void get slot index(int32& slot index);
    void get starting level for game(int32& game index, bool& level has been played, FString& level path);
    void OnLoaded_A7C0816B4464DE3A40670590735D8242(class UObject* Loaded);
    void OnLoaded_D03A9ECF445BADF869251287FF144DD6(class UObject* Loaded);
    void PrintString(FString In String, FLinearColor TextColor, float Duration);
    void IChangeFlameColor(FLinearColor NewColor);
    void Start Game(int32 game index, int32 slot index);
    void level load finished();
    void set pause enabled(bool Enabled);
    void save progression(FString level checkpoint, FString new level path);
    void set menu string(FString menu key, bool key exists, FString string value);
    void set menu float(FString menu key, bool key exists, float float value);
    void get menu string(FString menu key, bool key exists, FString string value);
    void get menu float(FString menu key, bool key exists, float float value);
    void load game from save(int32 game slot, bool New Game, int32 NewParam);
    void begin level load(FString level name, bool New Game);
    void delete save(int32 Slot);
    void respawn at checkpoint();
    void set cutscene playing(bool is playing);
    void get state of the game -DEPRECATED(TEnumAsByte<EGamestate::Type> state of the game);
    void restart game();
    void pause game for menu(bool do pause, bool ForceUnpause);
    void set slot index(int32 slot index);
    void set game index(int32 game index);
    void is slot active(int32 slot index, bool slot is active);
    void is any slot active(bool active slot exists);
    void has game started(bool game has started);
    void set starting level for game(FString level path);
    void Construct();
    void LoadDataTables();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void AddEssentialMods();
    void ExecuteUbergraph_ModViewer(int32 EntryPoint);
}; // Size: 0x240

#endif
