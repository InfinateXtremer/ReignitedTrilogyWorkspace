#ifndef UE4SS_SDK_BP_LS125_SecretRoom_Skillpoint_HPP
#define UE4SS_SDK_BP_LS125_SecretRoom_Skillpoint_HPP

class ABP_LS125_SecretRoom_Skillpoint_C : public AMission_Item_Base_StateMachine_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UAC_FalconSaveCollectedPerm_C* AC_FalconSaveCollectedPerm;                  // 0x0488 (size: 0x8)
    class UParticleSystemComponent* SecretDoorGlow;                                   // 0x0490 (size: 0x8)
    class UBP_StateComponent_C* State_Secret;                                         // 0x0498 (size: 0x8)
    class UBoxComponent* SecretWall;                                                  // 0x04A0 (size: 0x8)
    bool RestoreSave;                                                                 // 0x04A8 (size: 0x1)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void On Player Ready();
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ExecuteUbergraph_BP_LS125_SecretRoom_Skillpoint(int32 EntryPoint);
}; // Size: 0x4A9

#endif
