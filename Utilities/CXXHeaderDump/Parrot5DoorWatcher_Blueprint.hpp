#ifndef UE4SS_SDK_Parrot5DoorWatcher_Blueprint_HPP
#define UE4SS_SDK_Parrot5DoorWatcher_Blueprint_HPP

class AParrot5DoorWatcher_Blueprint_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot1;                                         // 0x0320 (size: 0x8)
    class ABP_LS213_CannonDoor_C* Door;                                               // 0x0328 (size: 0x8)
    class ABP_CES2040_BreezebuilderParrot_C* Parrot;                                  // 0x0330 (size: 0x8)
    bool HasInitialized;                                                              // 0x0338 (size: 0x1)

    void UserConstructionScript();
    void DoorDown(class AActor* DestroyedActor);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Parrot5DoorWatcher_Blueprint(int32 EntryPoint);
}; // Size: 0x339

#endif
