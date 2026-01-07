#ifndef UE4SS_SDK_GameMapsFunctionLib_HPP
#define UE4SS_SDK_GameMapsFunctionLib_HPP

class UGameMapsFunctionLib_C : public UBlueprintFunctionLibrary
{

    void Get Level Path from Display Name Key(FString& display name key, class UObject* __WorldContext, FString& level path);
    void Get Level Table for Current Game(class UObject* __WorldContext, class UDataTable*& data table);
    void Get Display Name Key for Level Path(FString level path, class UObject* __WorldContext, FString& display name key);
    void Get Level Paths for Homeworld(FString& homeworld path, bool visited only, class UObject* __WorldContext, TArray<FString>& level paths);
    void Get Homeworld Paths(bool& visited only, class UObject* __WorldContext, TArray<FString>& Homeworld Path List);
    void Get Homeworld Path for Level(FString level path, class UObject* __WorldContext, FString& homeworld path);
}; // Size: 0x28

#endif
