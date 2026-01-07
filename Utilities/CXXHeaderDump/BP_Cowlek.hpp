#ifndef UE4SS_SDK_BP_Cowlek_HPP
#define UE4SS_SDK_BP_Cowlek_HPP

class ABP_Cowlek_C : public ABP_Base_Friendly_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    class UAC_FalconSaveCollectedLocal_C* AC_FalconSaveCollectedLocal;                // 0x0908 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_CowlekHit_Edge;                // 0x0910 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_CowlekHit;                     // 0x0918 (size: 0x8)
    class UChildActorComponent* Carrot;                                               // 0x0920 (size: 0x8)
    class UFalconEnemyStateComponent* State_Flee;                                     // 0x0928 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Cowlek_Herded;                 // 0x0930 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Cowlek_Wander;                 // 0x0938 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_CowlekHit_Superfire;           // 0x0940 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_CowlekHit_Fire;                // 0x0948 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_CowlekHit_Charge;              // 0x0950 (size: 0x8)
    float Timeline_0_Percent_7275D4254A320D1EB269F3BBBACE0061;                        // 0x0958 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_7275D4254A320D1EB269F3BBBACE0061; // 0x095C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0960 (size: 0x8)
    float SplineTravel_Percent_1CB59EE0406B8A5AF3CDF4851AF1373E;                      // 0x0968 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SplineTravel__Direction_1CB59EE0406B8A5AF3CDF4851AF1373E; // 0x096C (size: 0x1)
    class UTimelineComponent* SplineTravel;                                           // 0x0970 (size: 0x8)
    bool Flee;                                                                        // 0x0978 (size: 0x1)
    bool onEdge?;                                                                     // 0x0979 (size: 0x1)
    class ABP_LS213_CowlekGapController_C* GapController;                             // 0x0980 (size: 0x8)
    int32 splineTravelState;                                                          // 0x0988 (size: 0x4)
    FVector splineOriginalStart;                                                      // 0x098C (size: 0xC)
    class ATargetPoint* HerdedPoint;                                                  // 0x0998 (size: 0x8)
    bool Herded;                                                                      // 0x09A0 (size: 0x1)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void SplineTravel__FinishedFunc();
    void SplineTravel__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void BndEvt__FalconEnemyState_CowlekHit_Charge_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_CowlekHit_Fire_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_CowlekHit_Superfire_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Flee_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Flee_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void BndEvt__FalconEnemyState_CowlekHit_Edge_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Cowlek_Herded_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void MissionEnd(bool Success, bool LevelEnd);
    void ExecuteUbergraph_BP_Cowlek(int32 EntryPoint);
}; // Size: 0x9A1

#endif
