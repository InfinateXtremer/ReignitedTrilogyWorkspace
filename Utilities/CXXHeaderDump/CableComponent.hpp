#ifndef UE4SS_SDK_CableComponent_HPP
#define UE4SS_SDK_CableComponent_HPP

class ACableActor : public AActor
{
    class UCableComponent* CableComponent;                                            // 0x0318 (size: 0x8)

}; // Size: 0x320

class UCableComponent : public UMeshComponent
{
    bool bAttachStart;                                                                // 0x0698 (size: 0x1)
    bool bAttachEnd;                                                                  // 0x0699 (size: 0x1)
    FComponentReference AttachEndTo;                                                  // 0x06A0 (size: 0x18)
    FName AttachEndToSocketName;                                                      // 0x06B8 (size: 0x8)
    FVector EndLocation;                                                              // 0x06C0 (size: 0xC)
    float CableLength;                                                                // 0x06CC (size: 0x4)
    int32 NumSegments;                                                                // 0x06D0 (size: 0x4)
    float SubstepTime;                                                                // 0x06D4 (size: 0x4)
    int32 SolverIterations;                                                           // 0x06D8 (size: 0x4)
    bool bEnableStiffness;                                                            // 0x06DC (size: 0x1)
    bool bEnableCollision;                                                            // 0x06DD (size: 0x1)
    float CollisionFriction;                                                          // 0x06E0 (size: 0x4)
    FVector CableForce;                                                               // 0x06E4 (size: 0xC)
    float CableGravityScale;                                                          // 0x06F0 (size: 0x4)
    float CableWidth;                                                                 // 0x06F4 (size: 0x4)
    int32 NumSides;                                                                   // 0x06F8 (size: 0x4)
    float TileMaterial;                                                               // 0x06FC (size: 0x4)

    void SetAttachEndTo(class AActor* Actor, FName ComponentProperty, FName SocketName);
    void GetCableParticleLocations(TArray<FVector>& Locations);
    class USceneComponent* GetAttachedComponent();
    class AActor* GetAttachedActor();
}; // Size: 0x720

#endif
