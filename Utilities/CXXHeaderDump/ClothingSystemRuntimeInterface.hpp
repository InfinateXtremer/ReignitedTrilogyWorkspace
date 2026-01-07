#ifndef UE4SS_SDK_ClothingSystemRuntimeInterface_HPP
#define UE4SS_SDK_ClothingSystemRuntimeInterface_HPP

struct FClothCollisionData
{
    TArray<FClothCollisionPrim_Sphere> Spheres;                                       // 0x0000 (size: 0x10)
    TArray<FClothCollisionPrim_SphereConnection> SphereConnections;                   // 0x0010 (size: 0x10)
    TArray<FClothCollisionPrim_Convex> Convexes;                                      // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FClothCollisionPrim_Convex
{
    TArray<FPlane> Planes;                                                            // 0x0000 (size: 0x10)
    int32 BoneIndex;                                                                  // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FClothCollisionPrim_Sphere
{
    int32 BoneIndex;                                                                  // 0x0000 (size: 0x4)
    float Radius;                                                                     // 0x0004 (size: 0x4)
    FVector LocalPosition;                                                            // 0x0008 (size: 0xC)

}; // Size: 0x14

struct FClothCollisionPrim_SphereConnection
{
    int32 SphereIndices;                                                              // 0x0000 (size: 0x8)

}; // Size: 0x8

class UClothingAssetBase : public UObject
{
    FString ImportedFilePath;                                                         // 0x0028 (size: 0x10)
    FGuid AssetGuid;                                                                  // 0x0038 (size: 0x10)

}; // Size: 0x48

class UClothingSimulationFactory : public UObject
{
}; // Size: 0x28

class UClothingSimulationInteractor : public UObject
{

    void PhysicsAssetUpdated();
    void ClothConfigUpdated();
}; // Size: 0x30

#endif
