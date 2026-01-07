#ifndef UE4SS_SDK_BP_201_HunterIGC_Helper_HPP
#define UE4SS_SDK_BP_201_HunterIGC_Helper_HPP

class ABP_201_HunterIGC_Helper_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UAC_FalconSaveCollectedPerm_C* AC_FalconSaveCollectedPerm;                  // 0x0320 (size: 0x8)
    class UBoxComponent* Jumping_COMPLETE;                                            // 0x0328 (size: 0x8)
    class UBoxComponent* Jumping_FAILED;                                              // 0x0330 (size: 0x8)
    class UBoxComponent* Jumping_START;                                               // 0x0338 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0340 (size: 0x8)
    class ACNS2111_Hunter_C* Hunter;                                                  // 0x0348 (size: 0x8)
    class AActor* IGC_Selector;                                                       // 0x0350 (size: 0x8)
    TArray<class ATargetPoint*> Targets;                                              // 0x0358 (size: 0x10)
    int32 challengeState;                                                             // 0x0368 (size: 0x4)
    int32 hunterState;                                                                // 0x036C (size: 0x4)
    TArray<class ATargetPoint*> Fail_WP_IGCLocations;                                 // 0x0370 (size: 0x10)
    TArray<class ATargetPoint*> Fail_WP_HunterLocations;                              // 0x0380 (size: 0x10)
    class ATargetPoint* WP_IGC_End;                                                   // 0x0390 (size: 0x8)
    class ATargetPoint* WP_Hunter_End;                                                // 0x0398 (size: 0x8)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveTick(float DeltaSeconds);
    void MissionAlert(class AActor* Actor, int32 Value);
    void BndEvt__Jumping_START_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Jumping_FAILED_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Jumping_COMPLETE_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ExecuteUbergraph_BP_201_HunterIGC_Helper(int32 EntryPoint);
}; // Size: 0x3A0

#endif
