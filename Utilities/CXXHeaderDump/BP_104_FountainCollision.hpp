#ifndef UE4SS_SDK_BP_104_FountainCollision_HPP
#define UE4SS_SDK_BP_104_FountainCollision_HPP

class ABP_104_FountainCollision_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)

    void UserConstructionScript();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_104_FountainCollision(int32 EntryPoint);
}; // Size: 0x330

#endif
