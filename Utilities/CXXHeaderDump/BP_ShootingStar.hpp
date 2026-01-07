#ifndef UE4SS_SDK_BP_ShootingStar_HPP
#define UE4SS_SDK_BP_ShootingStar_HPP

class ABP_ShootingStar_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UStaticMeshComponent* SM_LS127_ShootingStar;                                // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    float ShootingStarEvent_StarOpacity_3A23B5E9492B927CB122B2BA42586A6F;             // 0x0330 (size: 0x4)
    float ShootingStarEvent_StarDisplacement_3A23B5E9492B927CB122B2BA42586A6F;        // 0x0334 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ShootingStarEvent__Direction_3A23B5E9492B927CB122B2BA42586A6F; // 0x0338 (size: 0x1)
    class UTimelineComponent* ShootingStarEvent;                                      // 0x0340 (size: 0x8)
    float ShootingStarDelay;                                                          // 0x0348 (size: 0x4)
    float MinDelay;                                                                   // 0x034C (size: 0x4)
    float MaxDelay;                                                                   // 0x0350 (size: 0x4)

    void GetNewStarTransforms(FVector& StarLocation, FRotator& StarRotation, FVector& StarScale);
    void UserConstructionScript();
    void ShootingStarEvent__FinishedFunc();
    void ShootingStarEvent__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_ShootingStar(int32 EntryPoint);
}; // Size: 0x354

#endif
