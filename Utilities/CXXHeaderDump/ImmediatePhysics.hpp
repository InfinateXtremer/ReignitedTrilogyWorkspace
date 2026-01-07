#ifndef UE4SS_SDK_ImmediatePhysics_HPP
#define UE4SS_SDK_ImmediatePhysics_HPP

#include "ImmediatePhysics_enums.hpp"

struct FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase
{
    class UPhysicsAsset* OverridePhysicsAsset;                                        // 0x0070 (size: 0x8)
    FVector OverrideWorldGravity;                                                     // 0x0078 (size: 0xC)
    FVector ExternalForce;                                                            // 0x0084 (size: 0xC)
    TEnumAsByte<ECollisionChannel> OverlapChannel;                                    // 0x0090 (size: 0x1)
    bool bEnableWorldGeometry;                                                        // 0x0091 (size: 0x1)
    ESimulationSpace SimulationSpace;                                                 // 0x0094 (size: 0x4)
    bool bOverrideWorldGravity;                                                       // 0x0098 (size: 0x1)
    float CachedBoundsScale;                                                          // 0x009C (size: 0x4)
    bool bTransferBoneVelocities;                                                     // 0x00A0 (size: 0x1)
    bool bFreezeIncomingPoseOnStart;                                                  // 0x00A1 (size: 0x1)
    bool bComponentSpaceSimulation;                                                   // 0x00A2 (size: 0x1)

}; // Size: 0x3C8

#endif
