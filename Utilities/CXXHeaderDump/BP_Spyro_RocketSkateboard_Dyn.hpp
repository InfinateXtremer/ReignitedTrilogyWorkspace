#ifndef UE4SS_SDK_BP_Spyro_RocketSkateboard_Dyn_HPP
#define UE4SS_SDK_BP_Spyro_RocketSkateboard_Dyn_HPP

class ABP_Spyro_RocketSkateboard_Dyn_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UBP_DestructibleFade_C* BP_DestructibleFade;                                // 0x0320 (size: 0x8)
    class UDestructibleComponent* Destructible;                                       // 0x0328 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0330 (size: 0x8)
    class UPoseableMeshComponent* Mesh;                                               // 0x0338 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Spyro_RocketSkateboard_Dyn(int32 EntryPoint);
}; // Size: 0x340

#endif
