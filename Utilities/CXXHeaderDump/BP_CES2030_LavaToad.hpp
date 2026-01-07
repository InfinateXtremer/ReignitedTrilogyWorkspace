#ifndef UE4SS_SDK_BP_CES2030_LavaToad_HPP
#define UE4SS_SDK_BP_CES2030_LavaToad_HPP

class ABP_CES2030_LavaToad_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* DeathState;                                     // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* IdleState;                                      // 0x0A00 (size: 0x8)
    float Timeline_1_NewTrack_1_72F282514A936758F424EC8F974826A0;                     // 0x0A08 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_72F282514A936758F424EC8F974826A0; // 0x0A0C (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0A10 (size: 0x8)
    bool SteamRider;                                                                  // 0x0A18 (size: 0x1)
    class AActor* SplineA;                                                            // 0x0A20 (size: 0x8)
    class USplineComponent* SplineRefA;                                               // 0x0A28 (size: 0x8)
    float StartingPos;                                                                // 0x0A30 (size: 0x4)

    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void BndEvt__DeathState_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveBeginPlay();
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CES2030_LavaToad(int32 EntryPoint);
}; // Size: 0xA34

#endif
