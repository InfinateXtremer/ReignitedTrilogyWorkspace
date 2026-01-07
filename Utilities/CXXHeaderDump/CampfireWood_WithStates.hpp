#ifndef UE4SS_SDK_CampfireWood_WithStates_HPP
#define UE4SS_SDK_CampfireWood_WithStates_HPP

class ACampfireWood_WithStates_C : public AMission_Item_Base_StateMachine_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UAC_FalconSaveParamLocal_C* AC_FalconSaveParamLocal;                        // 0x0488 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_Campfire_Fire;                             // 0x0490 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0498 (size: 0x8)
    class UChildActorComponent* FirePoint;                                            // 0x04A0 (size: 0x8)
    class UBP_StateComponent_C* State_Lit;                                            // 0x04A8 (size: 0x8)
    float Timeline_0_0_NewTrack_0_01B3033449CDA011400B57996AF59805;                   // 0x04B0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0_0__Direction_01B3033449CDA011400B57996AF59805; // 0x04B4 (size: 0x1)
    class UTimelineComponent* Timeline_0_0;                                           // 0x04B8 (size: 0x8)
    float Timeline_1_NewTrack_0_BEC626CD40C2020AD56352A29F9E36BF;                     // 0x04C0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_BEC626CD40C2020AD56352A29F9E36BF; // 0x04C4 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x04C8 (size: 0x8)
    class UParticleSystemComponent* Fire;                                             // 0x04D0 (size: 0x8)
    FVector MyScale;                                                                  // 0x04D8 (size: 0xC)
    class AActor* AchievementWatcher;                                                 // 0x04E8 (size: 0x8)
    bool achievement;                                                                 // 0x04F0 (size: 0x1)
    bool EnableSaveGame;                                                              // 0x04F1 (size: 0x1)
    bool LitFromSave;                                                                 // 0x04F2 (size: 0x1)
    float VFX_Offset;                                                                 // 0x04F4 (size: 0x4)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void Timeline_0_0__FinishedFunc();
    void Timeline_0_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__State: Lit_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State: Lit_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void PlayerReady();
    void ExecuteUbergraph_CampfireWood_WithStates(int32 EntryPoint);
}; // Size: 0x4F8

#endif
