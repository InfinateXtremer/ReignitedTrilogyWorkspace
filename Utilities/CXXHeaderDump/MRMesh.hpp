#ifndef UE4SS_SDK_MRMesh_HPP
#define UE4SS_SDK_MRMesh_HPP

struct FMRMeshConfiguration
{
}; // Size: 0x1

class UMRMeshComponent : public UPrimitiveComponent
{
    class UMaterialInterface* Material;                                               // 0x0678 (size: 0x8)
    class UMeshReconstructorBase* MeshReconstructor;                                  // 0x0680 (size: 0x8)
    bool bEnableCollision;                                                            // 0x0688 (size: 0x1)
    TArray<class UBodySetup*> BodySetups;                                             // 0x0690 (size: 0x10)

    class UMeshReconstructorBase* GetReconstructor();
    void ConnectReconstructor(class UMeshReconstructorBase* Reconstructor);
}; // Size: 0x6C0

class UMeshReconstructorBase : public UObject
{

    void StopReconstruction();
    void StartReconstruction();
    void PauseReconstruction();
    bool IsReconstructionStarted();
    bool IsReconstructionPaused();
    void DisconnectMRMesh();
    FMRMeshConfiguration ConnectMRMesh(class UMRMeshComponent* Mesh);
}; // Size: 0x28

#endif
