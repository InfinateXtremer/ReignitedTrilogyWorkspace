#ifndef UE4SS_SDK_bp_inventoryMonitor_HPP
#define UE4SS_SDK_bp_inventoryMonitor_HPP

class Abp_inventoryMonitor_C : public APhasmidLevelInventoryMonitor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0370 (size: 0x8)

    void UserConstructionScript();
    void Gather Level Inventory();
    void ExecuteUbergraph_bp_inventoryMonitor(int32 EntryPoint);
}; // Size: 0x378

#endif
