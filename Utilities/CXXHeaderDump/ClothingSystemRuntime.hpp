#ifndef UE4SS_SDK_ClothingSystemRuntime_HPP
#define UE4SS_SDK_ClothingSystemRuntime_HPP

#include "ClothingSystemRuntime_enums.hpp"

struct FClothConfig
{
    EClothingWindMethod WindMethod;                                                   // 0x0000 (size: 0x1)
    FClothConstraintSetup VerticalConstraintConfig;                                   // 0x0004 (size: 0x10)
    FClothConstraintSetup HorizontalConstraintConfig;                                 // 0x0014 (size: 0x10)
    FClothConstraintSetup BendConstraintConfig;                                       // 0x0024 (size: 0x10)
    FClothConstraintSetup ShearConstraintConfig;                                      // 0x0034 (size: 0x10)
    float SelfCollisionRadius;                                                        // 0x0044 (size: 0x4)
    float SelfCollisionStiffness;                                                     // 0x0048 (size: 0x4)
    float SelfCollisionCullScale;                                                     // 0x004C (size: 0x4)
    FVector Damping;                                                                  // 0x0050 (size: 0xC)
    float Friction;                                                                   // 0x005C (size: 0x4)
    float WindDragCoefficient;                                                        // 0x0060 (size: 0x4)
    float WindLiftCoefficient;                                                        // 0x0064 (size: 0x4)
    FVector LinearDrag;                                                               // 0x0068 (size: 0xC)
    FVector AngularDrag;                                                              // 0x0074 (size: 0xC)
    FVector LinearInertiaScale;                                                       // 0x0080 (size: 0xC)
    FVector AngularInertiaScale;                                                      // 0x008C (size: 0xC)
    FVector CentrifugalInertiaScale;                                                  // 0x0098 (size: 0xC)
    float SolverFrequency;                                                            // 0x00A4 (size: 0x4)
    float StiffnessFrequency;                                                         // 0x00A8 (size: 0x4)
    float GravityScale;                                                               // 0x00AC (size: 0x4)
    float TetherStiffness;                                                            // 0x00B0 (size: 0x4)
    float TetherLimit;                                                                // 0x00B4 (size: 0x4)
    float CollisionThickness;                                                         // 0x00B8 (size: 0x4)
    float AnimDriveSpringStiffness;                                                   // 0x00BC (size: 0x4)
    float AnimDriveDamperStiffness;                                                   // 0x00C0 (size: 0x4)

}; // Size: 0xC4

struct FClothConstraintSetup
{
    float Stiffness;                                                                  // 0x0000 (size: 0x4)
    float StiffnessMultiplier;                                                        // 0x0004 (size: 0x4)
    float StretchLimit;                                                               // 0x0008 (size: 0x4)
    float CompressionLimit;                                                           // 0x000C (size: 0x4)

}; // Size: 0x10

struct FClothLODData
{
    FClothPhysicalMeshData PhysicalMeshData;                                          // 0x0000 (size: 0xA8)
    FClothCollisionData CollisionData;                                                // 0x00A8 (size: 0x30)

}; // Size: 0xF8

struct FClothParameterMask_PhysMesh
{
    FName MaskName;                                                                   // 0x0000 (size: 0x8)
    MaskTarget_PhysMesh CurrentTarget;                                                // 0x0008 (size: 0x1)
    float MaxValue;                                                                   // 0x000C (size: 0x4)
    float MinValue;                                                                   // 0x0010 (size: 0x4)
    TArray<float> Values;                                                             // 0x0018 (size: 0x10)
    bool bEnabled;                                                                    // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FClothPhysicalMeshData
{
    TArray<FVector> Vertices;                                                         // 0x0000 (size: 0x10)
    TArray<FVector> Normals;                                                          // 0x0010 (size: 0x10)
    TArray<uint32> Indices;                                                           // 0x0020 (size: 0x10)
    TArray<float> MaxDistances;                                                       // 0x0030 (size: 0x10)
    TArray<float> BackstopDistances;                                                  // 0x0040 (size: 0x10)
    TArray<float> BackstopRadiuses;                                                   // 0x0050 (size: 0x10)
    TArray<float> AnimDriveMultipliers;                                               // 0x0060 (size: 0x10)
    TArray<float> InverseMasses;                                                      // 0x0070 (size: 0x10)
    TArray<FClothVertBoneData> BoneData;                                              // 0x0080 (size: 0x10)
    int32 MaxBoneWeights;                                                             // 0x0090 (size: 0x4)
    int32 NumFixedVerts;                                                              // 0x0094 (size: 0x4)
    TArray<uint32> SelfCollisionIndices;                                              // 0x0098 (size: 0x10)

}; // Size: 0xA8

struct FClothVertBoneData
{
    int32 NumInfluences;                                                              // 0x0000 (size: 0x4)
    uint16 BoneIndices;                                                               // 0x0004 (size: 0x10)
    float BoneWeights;                                                                // 0x0014 (size: 0x20)

}; // Size: 0x34

class UClothingAsset : public UClothingAssetBase
{
    class UPhysicsAsset* PhysicsAsset;                                                // 0x0048 (size: 0x8)
    FClothConfig ClothConfig;                                                         // 0x0050 (size: 0xC4)
    TArray<FClothLODData> LODData;                                                    // 0x0118 (size: 0x10)
    TArray<int32> LodMap;                                                             // 0x0128 (size: 0x10)
    TArray<FName> UsedBoneNames;                                                      // 0x0138 (size: 0x10)
    TArray<int32> UsedBoneIndices;                                                    // 0x0148 (size: 0x10)
    int32 ReferenceBoneIndex;                                                         // 0x0158 (size: 0x4)
    class UClothingAssetCustomData* CustomData;                                       // 0x0160 (size: 0x8)

}; // Size: 0x168

class UClothingAssetCustomData : public UObject
{
}; // Size: 0x28

class UClothingSimulationFactoryNv : public UClothingSimulationFactory
{
}; // Size: 0x28

class UClothingSimulationInteractorNv : public UClothingSimulationInteractor
{

    void SetAnimDriveSpringStiffness(float InStiffness);
    void SetAnimDriveDamperStiffness(float InStiffness);
    void EnableGravityOverride(const FVector& InVector);
    void DisableGravityOverride();
}; // Size: 0x40

#endif
