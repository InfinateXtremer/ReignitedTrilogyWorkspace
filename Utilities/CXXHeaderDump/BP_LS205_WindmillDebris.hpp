#ifndef UE4SS_SDK_BP_LS205_WindmillDebris_HPP
#define UE4SS_SDK_BP_LS205_WindmillDebris_HPP

class ABP_LS205_WindmillDebris_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UBP_DestructibleFade_C* BP_DestructibleFade;                                // 0x0320 (size: 0x8)
    class UDestructibleComponent* Destructible_DM;                                    // 0x0328 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0330 (size: 0x8)
    class UDestructibleMesh* Door_DM_Ref;                                             // 0x0338 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_LS205_WindmillDebris(int32 EntryPoint);
}; // Size: 0x340

#endif
