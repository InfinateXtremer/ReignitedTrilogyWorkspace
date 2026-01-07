#ifndef UE4SS_SDK_BP_LS201_FirstJump_HunterController_HPP
#define UE4SS_SDK_BP_LS201_FirstJump_HunterController_HPP

class ABP_LS201_FirstJump_HunterController_C : public ATriggerBox
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)
    class UAC_FalconSaveCollectedPerm_C* AC_FalconSaveCollectedPerm_Hunter;           // 0x0328 (size: 0x8)
    class UBoxComponent* Collision_BridgeEnd;                                         // 0x0330 (size: 0x8)
    class ACNS2111_Hunter_C* HunterRef;                                               // 0x0338 (size: 0x8)
    class AIGC_Selector_C* ICGRef;                                                    // 0x0340 (size: 0x8)
    class ATargetPoint* HunterLocation_Show;                                          // 0x0348 (size: 0x8)
    class ABP_Whirlwind_C* WhirlwindRef;                                              // 0x0350 (size: 0x8)
    class ATargetPoint* HunterLocation_Hide;                                          // 0x0358 (size: 0x8)
    bool isOnBridge?;                                                                 // 0x0360 (size: 0x1)
    bool fellBefore?;                                                                 // 0x0361 (size: 0x1)
    bool jumpCompletedOnce?;                                                          // 0x0362 (size: 0x1)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Collision_BridgeEnd_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ExecuteUbergraph_BP_LS201_FirstJump_HunterController(int32 EntryPoint);
}; // Size: 0x363

#endif
