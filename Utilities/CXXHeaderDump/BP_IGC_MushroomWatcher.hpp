#ifndef UE4SS_SDK_BP_IGC_MushroomWatcher_HPP
#define UE4SS_SDK_BP_IGC_MushroomWatcher_HPP

class ABP_IGC_MushroomWatcher_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)
    class ACollectable_Dragon_C* Dragon;                                              // 0x0328 (size: 0x8)
    bool BoolActive;                                                                  // 0x0330 (size: 0x1)
    bool CutSceneInProgress;                                                          // 0x0331 (size: 0x1)
    class ABP_CFS1164_Mushrooms_C* Mushroom;                                          // 0x0338 (size: 0x8)
    FVector Origin;                                                                   // 0x0340 (size: 0xC)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void EnterVolume(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExitVolume(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_IGC_MushroomWatcher(int32 EntryPoint);
}; // Size: 0x34C

#endif
