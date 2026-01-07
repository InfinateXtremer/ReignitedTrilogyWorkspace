#ifndef UE4SS_SDK_BP_FluidSurfaceManager_HPP
#define UE4SS_SDK_BP_FluidSurfaceManager_HPP

class ABP_FluidSurfaceManager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)
    class ABP_FluidSurface_C* CurrentFluidSurface;                                    // 0x0328 (size: 0x8)
    int32 HeightState;                                                                // 0x0330 (size: 0x4)
    class UMaterialInstanceDynamic* HeightSimMID;                                     // 0x0338 (size: 0x8)
    class UMaterialInstanceDynamic* ComputeNormalMID;                                 // 0x0340 (size: 0x8)
    bool DoRayCastHeight;                                                             // 0x0348 (size: 0x1)
    float HitCheckBeginZ;                                                             // 0x034C (size: 0x4)
    float HitCheckEndZ;                                                               // 0x0350 (size: 0x4)
    float HowFarDownToFadeIn;                                                         // 0x0354 (size: 0x4)
    TArray<class AActor*> IgnoreTheseForRayTracing;                                   // 0x0358 (size: 0x10)
    bool DoPrintRayCastHits;                                                          // 0x0368 (size: 0x1)
    class ABP_FluidSurface_C* FirstActiveFluidSurface;                                // 0x0370 (size: 0x8)
    bool IsTestLevelNoGameState;                                                      // 0x0378 (size: 0x1)
    bool DidHitLast;                                                                  // 0x0379 (size: 0x1)
    bool DidHitCurrent;                                                               // 0x037A (size: 0x1)
    float HitLength;                                                                  // 0x037C (size: 0x4)
    class AActor* TouchingCharacter;                                                  // 0x0380 (size: 0x8)

    void ApplyFirstActiveFluidSurface();
    void InitIgnoreRayTraceArray();
    void UpdateSimWaveParams();
    void ClearNormalRT(class UTextureRenderTarget2D* NormalRT);
    void ClearAllRT();
    void GetCurrentHeightRT(class UTextureRenderTarget2D*& CurrentRT);
    void ComputeNormal(float ComputeNormalHeightScale, class UTextureRenderTarget2D* OutputNormalRT);
    void CycleHeightState();
    void ComputeFluidSurface();
    void GetLastHeightRT(int32 CurrentHeightIndex, int32 NumFramesOld, class UTextureRenderTarget2D*& HeightRT);
    void GetHeightRT(int32 Index, class UTextureRenderTarget2D*& HeightRT);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ReceiveDestroyed();
    void PlayerReady();
    void ExecuteUbergraph_BP_FluidSurfaceManager(int32 EntryPoint);
}; // Size: 0x388

#endif
