#ifndef UE4SS_SDK_BP_CES3083_RynocSubmarine_DestructionVFX_HPP
#define UE4SS_SDK_BP_CES3083_RynocSubmarine_DestructionVFX_HPP

class ABP_CES3083_RynocSubmarine_DestructionVFX_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UBP_DestructibleFade_C* BP_DestructibleFade;                                // 0x0320 (size: 0x8)
    class UDestructibleComponent* DM_LS320_RhynocSubmarine;                           // 0x0328 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0330 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CES3083_RynocSubmarine_DestructionVFX(int32 EntryPoint);
}; // Size: 0x338

#endif
