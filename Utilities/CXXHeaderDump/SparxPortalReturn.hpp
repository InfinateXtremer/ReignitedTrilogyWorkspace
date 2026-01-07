#ifndef UE4SS_SDK_SparxPortalReturn_HPP
#define UE4SS_SDK_SparxPortalReturn_HPP

class ASparxPortalReturn_C : public ABasePortal_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0EC0 (size: 0x8)
    bool LoadCompleted;                                                               // 0x0EC8 (size: 0x1)
    bool DataLoaded?;                                                                 // 0x0EC9 (size: 0x1)
    bool IsLoadscreenOn?;                                                             // 0x0ECA (size: 0x1)
    bool PlayerSpawned;                                                               // 0x0ECB (size: 0x1)

    bool TriggerTransport(class ACharacter* playerCharacter);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void TI_TransitionBeginTarget(class APawn* playerCharacter, class AActor* sourcePortal);
    void TI_TransitionCompleteTarget(bool Success, class APawn* playerCharacter, class AActor* targetPortal);
    void LoadDataRestored();
    void ready();
    void HandlePlayerSpawn(float delayDuration);
    void ExecuteUbergraph_SparxPortalReturn(int32 EntryPoint);
}; // Size: 0xECC

#endif
