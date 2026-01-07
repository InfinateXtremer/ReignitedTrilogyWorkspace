#ifndef UE4SS_SDK_BP_UnderWaterPP_HPP
#define UE4SS_SDK_BP_UnderWaterPP_HPP

class ABP_UnderWaterPP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UStaticMeshComponent* DebugCube;                                            // 0x0320 (size: 0x8)
    class UPostProcessComponent* PostProcess;                                         // 0x0328 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0330 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0338 (size: 0x8)
    class UMaterialInstance* MI_PostProcessMaterial;                                  // 0x0340 (size: 0x8)
    bool SnapToFluidSurfaceZ;                                                         // 0x0348 (size: 0x1)
    float HardRadius;                                                                 // 0x034C (size: 0x4)
    float BlendPriority;                                                              // 0x0350 (size: 0x4)
    TMap<UMaterialInstanceDynamic*, float> TmpDistanceDict;                           // 0x0358 (size: 0x50)
    class UMaterialInstanceDynamic* Mid;                                              // 0x03A8 (size: 0x8)
    FLinearColor DepthTintColor;                                                      // 0x03B0 (size: 0x10)
    FLinearColor DepthTintColorNear;                                                  // 0x03C0 (size: 0x10)
    float DepthTintFalloff;                                                           // 0x03D0 (size: 0x4)
    bool DoManageGodRays;                                                             // 0x03D4 (size: 0x1)
    class AManagedDirectionalLight_C* ManagedDirLightRef;                             // 0x03D8 (size: 0x8)
    FLinearColor ManagedDirLightColor;                                                // 0x03E0 (size: 0x10)
    FLinearColor UseDirLightBloom;                                                    // 0x03F0 (size: 0x10)
    FLinearColor OffColor;                                                            // 0x0400 (size: 0x10)

    void SyncGodRays();
    void UpdatePosition();
    void ComputeParams();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_UnderWaterPP(int32 EntryPoint);
}; // Size: 0x410

#endif
