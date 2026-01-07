#ifndef UE4SS_SDK_BP_Drawbridge_Handle_HPP
#define UE4SS_SDK_BP_Drawbridge_Handle_HPP

class ABP_Drawbridge_Handle_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UTfbAkComponent* TfbAk;                                                     // 0x0450 (size: 0x8)
    class UBP_StateComponent_C* State_Spinning;                                       // 0x0458 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0460 (size: 0x8)
    class UStaticMeshComponent* Handle;                                               // 0x0468 (size: 0x8)
    float Timeline_0_0_NewTrack_0_F50DBD7649BD98E22BB362858DCBF575;                   // 0x0470 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0_0__Direction_F50DBD7649BD98E22BB362858DCBF575; // 0x0474 (size: 0x1)
    class UTimelineComponent* Timeline_0_0;                                           // 0x0478 (size: 0x8)
    class AActor* bridge_01;                                                          // 0x0480 (size: 0x8)
    class AActor* bridge_02;                                                          // 0x0488 (size: 0x8)
    float TargetRotation;                                                             // 0x0490 (size: 0x4)
    float StartingRotation;                                                           // 0x0494 (size: 0x4)
    bool Moving;                                                                      // 0x0498 (size: 0x1)
    FGameplayTagContainer Tag Container;                                              // 0x04A0 (size: 0x20)

    void UserConstructionScript();
    void Timeline_0_0__FinishedFunc();
    void Timeline_0_0__UpdateFunc();
    void BndEvt__State_Spinning_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_Drawbridge_Handle(int32 EntryPoint);
}; // Size: 0x4C0

#endif
