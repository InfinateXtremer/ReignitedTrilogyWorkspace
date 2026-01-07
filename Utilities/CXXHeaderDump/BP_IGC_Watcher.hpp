#ifndef UE4SS_SDK_BP_IGC_Watcher_HPP
#define UE4SS_SDK_BP_IGC_Watcher_HPP

class ABP_IGC_Watcher_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)
    class ACollectable_Dragon_C* Dragon;                                              // 0x0328 (size: 0x8)
    bool BoolActive;                                                                  // 0x0330 (size: 0x1)
    bool CutSceneInProgress;                                                          // 0x0331 (size: 0x1)
    class ABP_CES1058_DemonDog_C* Dogs;                                               // 0x0338 (size: 0x8)
    FVector Origin;                                                                   // 0x0340 (size: 0xC)
    FVector Teleport_To;                                                              // 0x034C (size: 0xC)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void EnterVolume(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExitVolume(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveTick(float DeltaSeconds);
    void IGC Start();
    void IGC Ended();
    void ExecuteUbergraph_BP_IGC_Watcher(int32 EntryPoint);
}; // Size: 0x358

#endif
