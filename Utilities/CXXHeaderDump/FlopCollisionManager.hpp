#ifndef UE4SS_SDK_FlopCollisionManager_HPP
#define UE4SS_SDK_FlopCollisionManager_HPP

class UFlopCollisionManager_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00F0 (size: 0x8)
    bool debug print;                                                                 // 0x00F8 (size: 0x1)
    class UCapsuleComponent* Capsule;                                                 // 0x0100 (size: 0x8)
    TArray<class UCapsuleComponent*> CapsuleCollisions;                               // 0x0108 (size: 0x10)

    void ReceiveBeginPlay();
    void Enter Flop State();
    void Exit Flop State();
    void Remove Collision();
    void Restore Collision();
    void ExecuteUbergraph_FlopCollisionManager(int32 EntryPoint);
}; // Size: 0x118

#endif
