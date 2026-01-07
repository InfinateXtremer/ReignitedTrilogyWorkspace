#ifndef UE4SS_SDK_BP_207_TowerRing_HPP
#define UE4SS_SDK_BP_207_TowerRing_HPP

class ABP_207_TowerRing_C : public AActor
{
    class URotatingMovementComponent* RotatingMovement;                               // 0x0318 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x330

#endif
