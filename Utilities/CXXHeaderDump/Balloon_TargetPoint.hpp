#ifndef UE4SS_SDK_Balloon_TargetPoint_HPP
#define UE4SS_SDK_Balloon_TargetPoint_HPP

class ABalloon_TargetPoint_C : public ABasePortal_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0EC0 (size: 0x8)
    class UArrowComponent* Arrow1;                                                    // 0x0EC8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot1;                                         // 0x0ED0 (size: 0x8)
    bool PlayerSpawned;                                                               // 0x0ED8 (size: 0x1)
    bool DataLoaded;                                                                  // 0x0ED9 (size: 0x1)
    float SpawnDelay;                                                                 // 0x0EDC (size: 0x4)

    bool TriggerTransport(class ACharacter* playerCharacter);
    void UserConstructionScript();
    void ITransitionCompleteTarget(bool Success, class APawn* playerCharacter, class AActor* targetPortal);
    void ITransitionBeginTarget(class APawn* playerCharacter, class AActor* sourcePortal);
    void ITransitionTriggerDetectedTarget();
    void ITransitionCompleteSource();
    void ReceiveBeginPlay();
    void TI_TransitionBeginTarget(class APawn* playerCharacter, class AActor* sourcePortal);
    void TI_TransitionCompleteTarget(bool Success, class APawn* playerCharacter, class AActor* targetPortal);
    void TI_TransitionTriggerDetectedTarget();
    void TI_TransitionCompleteSource();
    void HandlePlayerSpawn(float delayDuration);
    void DataRestored();
    void ready();
    void ExecuteUbergraph_Balloon_TargetPoint(int32 EntryPoint);
}; // Size: 0xEE0

#endif
