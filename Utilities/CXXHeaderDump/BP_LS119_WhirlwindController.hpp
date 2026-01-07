#ifndef UE4SS_SDK_BP_LS119_WhirlwindController_HPP
#define UE4SS_SDK_BP_LS119_WhirlwindController_HPP

class ABP_LS119_WhirlwindController_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    class AActor* Whirlwind;                                                          // 0x0330 (size: 0x8)
    bool Activate;                                                                    // 0x0338 (size: 0x1)

    void UserConstructionScript();
    void ActivateMechanic(class AActor* RequestingActor, int32 Value);
    void DeactivateMechanic(class AActor* RequestingActor, int32 Value);
    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void Begin();
    void ExecuteUbergraph_BP_LS119_WhirlwindController(int32 EntryPoint);
}; // Size: 0x339

#endif
