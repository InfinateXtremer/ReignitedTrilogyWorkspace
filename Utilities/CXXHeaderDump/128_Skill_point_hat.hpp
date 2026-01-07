#ifndef UE4SS_SDK_128_Skill_point_hat_HPP
#define UE4SS_SDK_128_Skill_point_hat_HPP

class A128_Skill_point_hat_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UAC_FalconSaveCollectedPerm_C* AC_FalconSaveCollectedPerm;                  // 0x0450 (size: 0x8)
    class UBP_DestructibleFade_C* BP_DestructibleFade;                                // 0x0458 (size: 0x8)
    class UStaticMeshComponent* WizardHat;                                            // 0x0460 (size: 0x8)
    class UBP_StateComponent_C* State_Destroy;                                        // 0x0468 (size: 0x8)
    float Timeline_1_NewTrack_1_A969B6F242451F07F4B6F09D874F1798;                     // 0x0470 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_A969B6F242451F07F4B6F09D874F1798; // 0x0474 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0478 (size: 0x8)
    FVector StartLoc;                                                                 // 0x0480 (size: 0xC)
    FVector EndLoc;                                                                   // 0x048C (size: 0xC)
    FRotator Rotation;                                                                // 0x0498 (size: 0xC)
    bool RestoreSave;                                                                 // 0x04A4 (size: 0x1)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__State_Destroy_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void On Player Ready();
    void ExecuteUbergraph_128_Skill_point_hat(int32 EntryPoint);
}; // Size: 0x4A5

#endif
