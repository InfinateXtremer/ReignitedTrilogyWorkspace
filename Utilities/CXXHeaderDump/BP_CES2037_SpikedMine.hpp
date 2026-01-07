#ifndef UE4SS_SDK_BP_CES2037_SpikedMine_HPP
#define UE4SS_SDK_BP_CES2037_SpikedMine_HPP

class ABP_CES2037_SpikedMine_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UAC_FalconSaveCollectedLocal_C* AC_FalconSaveCollectedLocal;                // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_WaypointLoop;                  // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Shrink;                        // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Loop;                          // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Grow;                          // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A28 (size: 0x8)
    float BobbingHeight_Alpha_272EEA8F4A070B15C74B90A33D57FA69;                       // 0x0A30 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> BobbingHeight__Direction_272EEA8F4A070B15C74B90A33D57FA69; // 0x0A34 (size: 0x1)
    class UTimelineComponent* BobbingHeight;                                          // 0x0A38 (size: 0x8)
    class AActor* MissionActor;                                                       // 0x0A40 (size: 0x8)
    float LavaHeight;                                                                 // 0x0A48 (size: 0x4)
    class UCurveFloat* MetalCurve;                                                    // 0x0A50 (size: 0x8)
    class UCurveFloat* MetalFresnelCurve;                                             // 0x0A58 (size: 0x8)
    float LavaHeightFadeDistance;                                                     // 0x0A60 (size: 0x4)
    bool Bobbing;                                                                     // 0x0A64 (size: 0x1)
    float StartingZHeight;                                                            // 0x0A68 (size: 0x4)
    class APhasmidTaggedTargetPoint* LavaVFXPoint-Emerge;                             // 0x0A70 (size: 0x8)
    class APhasmidTaggedTargetPoint* LavaVFXPoint-Submerge;                           // 0x0A78 (size: 0x8)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void BobbingHeight__FinishedFunc();
    void BobbingHeight__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__FalconEnemyState_Death_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveTick(float DeltaSeconds);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ExecuteUbergraph_BP_CES2037_SpikedMine(int32 EntryPoint);
}; // Size: 0xA80

#endif
