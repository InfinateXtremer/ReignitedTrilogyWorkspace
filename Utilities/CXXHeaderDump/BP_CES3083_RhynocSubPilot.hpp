#ifndef UE4SS_SDK_BP_CES3083_RhynocSubPilot_HPP
#define UE4SS_SDK_BP_CES3083_RhynocSubPilot_HPP

class ABP_CES3083_RhynocSubPilot_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0320 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0328 (size: 0x8)
    class UProjectileMovementComponent* ProjectileMovement;                           // 0x0330 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void CustomEvent_0();
    void ExecuteUbergraph_BP_CES3083_RhynocSubPilot(int32 EntryPoint);
}; // Size: 0x338

#endif
