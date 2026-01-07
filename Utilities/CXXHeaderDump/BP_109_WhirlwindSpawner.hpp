#ifndef UE4SS_SDK_BP_109_WhirlwindSpawner_HPP
#define UE4SS_SDK_BP_109_WhirlwindSpawner_HPP

class ABP_109_WhirlwindSpawner_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)
    class ACollectable_Dragon_C* MyDragon;                                            // 0x0328 (size: 0x8)
    class ABP_Whirlwind_C* SpawnedWhirlwind;                                          // 0x0330 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void Begin();
    void ExecuteUbergraph_BP_109_WhirlwindSpawner(int32 EntryPoint);
}; // Size: 0x338

#endif
