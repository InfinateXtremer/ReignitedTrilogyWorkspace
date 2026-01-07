#ifndef UE4SS_SDK_BP_SpyroFlightLevelWater_Geo_HPP
#define UE4SS_SDK_BP_SpyroFlightLevelWater_Geo_HPP

class ABP_SpyroFlightLevelWater_Geo_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UStaticMeshComponent* CrashDetector;                                        // 0x0320 (size: 0x8)
    class UStaticMeshComponent* CrashAvoidanceLayer;                                  // 0x0328 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0330 (size: 0x8)
    FVector2D CrashBoxHorizontalExtents;                                              // 0x0338 (size: 0x8)
    FVector CrashAvoidanceVertOffset;                                                 // 0x0340 (size: 0xC)
    float CharacterFailZOffset;                                                       // 0x034C (size: 0x4)
    FLinearColor LiquidColorInfo;                                                     // 0x0350 (size: 0x10)

    void IGetHarmfulTerrainDamageMagnitude(float& DamageMagnitude);
    void IGetHarmfulTerrainLiquidColorInfo(FLinearColor& LiquidColorInfo);
    void UserConstructionScript();
    void BndEvt__CrashDetector_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_SpyroFlightLevelWater_Geo(int32 EntryPoint);
}; // Size: 0x360

#endif
