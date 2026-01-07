#ifndef UE4SS_SDK_BP_FluidSurface_HPP
#define UE4SS_SDK_BP_FluidSurface_HPP

class ABP_FluidSurface_C : public AStaticMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0328 (size: 0x8)
    class UStaticMesh* WaterMeshAsset;                                                // 0x0330 (size: 0x8)
    class UMaterialInterface* WaterMaterial;                                          // 0x0338 (size: 0x8)
    FVector InternalProjSize;                                                         // 0x0340 (size: 0xC)
    class UMaterialInstanceDynamic* WaterMID;                                         // 0x0350 (size: 0x8)
    float TimeAccumulator;                                                            // 0x0358 (size: 0x4)
    FVector WorldProjectionSize;                                                      // 0x035C (size: 0xC)
    TSubclassOf<class UBP_FluidParams_Water_C> Parameters;                            // 0x0368 (size: 0x8)
    class AActor* TouchingCharacter;                                                  // 0x0370 (size: 0x8)
    FVector LastTouchingActorPosition;                                                // 0x0378 (size: 0xC)
    float HowFarInFront;                                                              // 0x0384 (size: 0x4)
    bool DoSim;                                                                       // 0x0388 (size: 0x1)
    class ABP_FluidSurfaceManager_C* FluidSurfaceManager;                             // 0x0390 (size: 0x8)
    float UpdateRate;                                                                 // 0x0398 (size: 0x4)
    float Dampening;                                                                  // 0x039C (size: 0x4)
    float TravelSpeed;                                                                // 0x03A0 (size: 0x4)
    float ComputeNormal HeightScale;                                                  // 0x03A4 (size: 0x4)
    class UMaterialInstanceDynamic* ForceSplatMID;                                    // 0x03A8 (size: 0x8)
    bool DidHitLast;                                                                  // 0x03B0 (size: 0x1)
    bool DidHitCurrent;                                                               // 0x03B1 (size: 0x1)
    float HitLength;                                                                  // 0x03B4 (size: 0x4)
    bool DoAutoSplat;                                                                 // 0x03B8 (size: 0x1)
    TSubclassOf<class AActor> SwimmersClass;                                          // 0x03C0 (size: 0x8)
    float AutoSplatAmplitude;                                                         // 0x03C8 (size: 0x4)
    float AutoSplatRate;                                                              // 0x03CC (size: 0x4)
    bool DoRayCastHeight;                                                             // 0x03D0 (size: 0x1)
    class UTextureRenderTarget2D* RT_Normal;                                          // 0x03D8 (size: 0x8)
    float PerturbRate;                                                                // 0x03E0 (size: 0x4)
    float PerturbAmplitude;                                                           // 0x03E4 (size: 0x4)
    float SwimmerStrength;                                                            // 0x03E8 (size: 0x4)
    float SwimmerSize;                                                                // 0x03EC (size: 0x4)
    TArray<class AActor*> SwimmerActors;                                              // 0x03F0 (size: 0x10)
    TArray<FVector> SwimmerLastPositions;                                             // 0x0400 (size: 0x10)
    bool refreshMaterial;                                                             // 0x0410 (size: 0x1)
    class AStaticMeshActor* ExtraMesh;                                                // 0x0418 (size: 0x8)

    void ForceEndTouch();
    void SetManagerToMe();
    void SwimmersUpdatePosition();
    void SwimmersBuildList();
    void UpdateLastTouchingActorPosition(FVector Pos);
    void UpdateSimSplatParams();
    void PanRenderTarget(class UTextureRenderTarget2D* InRenderTarget, FVector Offset);
    void GetProjectionBounds();
    void UserConstructionScript();
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ReceiveDestroyed();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void OnPlayerReady();
    void ExecuteUbergraph_BP_FluidSurface(int32 EntryPoint);
}; // Size: 0x420

#endif
