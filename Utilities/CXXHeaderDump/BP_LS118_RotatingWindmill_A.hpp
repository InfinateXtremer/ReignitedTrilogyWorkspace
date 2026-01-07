#ifndef UE4SS_SDK_BP_LS118_RotatingWindmill_A_HPP
#define UE4SS_SDK_BP_LS118_RotatingWindmill_A_HPP

class ABP_LS118_RotatingWindmill_A_C : public AActor
{
    class UStaticMeshComponent* StaticMesh;                                           // 0x0318 (size: 0x8)
    class URotatingMovementComponent* RotatingMovement;                               // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    bool Rotation in Local Space;                                                     // 0x0330 (size: 0x1)
    FVector Pivot Translation;                                                        // 0x0334 (size: 0xC)
    FRotator Rotation Rate;                                                           // 0x0340 (size: 0xC)
    class UStaticMesh* Mesh;                                                          // 0x0350 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x358

#endif
