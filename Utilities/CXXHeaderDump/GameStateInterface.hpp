#ifndef UE4SS_SDK_GameStateInterface_HPP
#define UE4SS_SDK_GameStateInterface_HPP

class IGameStateInterface_C : public IInterface
{

    void set starting level for game(FString level path);
    void get starting level for game(int32 game index, FString& level path, bool& level has been played);
    void has game started(bool& game has started);
    void is any slot active(bool& active slot exists);
    void is slot active(int32 slot index, bool& slot is active);
    void set game index(int32 game index);
    void get slot index(int32& slot index);
    void set slot index(int32 slot index);
    void pause game for menu(bool do pause, bool ForceUnpause);
    void get game index(int32& the game index);
    void restart game();
    void get state of the game -DEPRECATED(TEnumAsByte<EGamestate::Type>& state of the game);
    void set cutscene playing(bool is playing);
    void respawn at checkpoint();
    void delete save(int32 Slot);
    void begin level load(FString level name, bool New Game);
    void load game from save(int32 game slot, bool New Game, int32 NewParam);
    void get menu float(FString menu key, float& float value, bool& key exists);
    void get menu string(FString menu key, FString& string value, bool& key exists);
    void set menu float(FString menu key, float float value, bool& key exists);
    void set menu string(FString menu key, FString string value, bool& key exists);
    void save progression(FString level checkpoint, FString new level path);
    void get is pause enabled(bool& is enabled);
    void set pause enabled(bool Enabled);
    void level load finished();
    void Start Game(int32 game index, int32 slot index);
    void get current level name(FString& level name);
}; // Size: 0x28

#endif
