#ifndef UE4SS_SDK_VFX_BP_MachineGunner_Impact_Decal_HPP
#define UE4SS_SDK_VFX_BP_MachineGunner_Impact_Decal_HPP

class AVFX_BP_MachineGunner_Impact_Decal_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ExecuteUbergraph_VFX_BP_MachineGunner_Impact_Decal(int32 EntryPoint);
}; // Size: 0x330

#endif
