#ifndef UE4SS_SDK_CES1202_PlaneGnorcVehicle_HPP
#define UE4SS_SDK_CES1202_PlaneGnorcVehicle_HPP

class ACES1202_PlaneGnorcVehicle_C : public AActor
{
    class UStaticMeshComponent* StaticMesh;                                           // 0x0318 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x0320 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0328 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0330 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x338

#endif
