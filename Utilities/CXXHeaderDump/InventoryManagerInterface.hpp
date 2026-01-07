#ifndef UE4SS_SDK_InventoryManagerInterface_HPP
#define UE4SS_SDK_InventoryManagerInterface_HPP

class IInventoryManagerInterface_C : public IInterface
{

    void get game save data objects for type(EInventoryType Type, bool all levels, FString Level, TArray<FPhasmidGameSaveObjectData>& object data list);
    void get game save data objects for level(FString level path, TArray<FPhasmidGameSaveObjectData>& data list);
    void get inventory collected count(EInventoryType item type, FString Level, bool all levels, int32& Count);
    void get inventory total count(EInventoryType item type, FString Level, bool all levels, int32& Count);
    void set player inventory item count(EInventoryType item type, int32 Count, bool updateSettings);
    void get last level played(FString& level name);
    void get player inventory item count(EInventoryType item type, bool current level, int32& item count);
    void remove from player inventory(EInventoryType Item, int32 quantity);
    void get player inventory list for level(FString Level, TArray<FPhasmidInventoryItem>& Items);
    void add item to player inventory(EInventoryType Item, int32 quantity);
    void set inventory totals(FString Level, EInventoryType Type, int32 quantity);
    void get inventory totals(FString Level, TArray<FPhasmidInventoryItem>& inventory list);
}; // Size: 0x28

#endif
