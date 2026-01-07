#ifndef UE4SS_SDK_BP_LS127_FairyCageDebris_HPP
#define UE4SS_SDK_BP_LS127_FairyCageDebris_HPP

class ABP_LS127_FairyCageDebris_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UBP_DestructibleFade_C* BP_DestructibleFade;                                // 0x0320 (size: 0x8)
    class UDestructibleComponent* Destructible_DM;                                    // 0x0328 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0330 (size: 0x8)
    class UDestructibleMesh* Windmill_DM_Ref;                                         // 0x0338 (size: 0x8)
    class UDestructibleMesh* fixme;                                                   // 0x0340 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_LS127_FairyCageDebris(int32 EntryPoint);
}; // Size: 0x348

#endif
