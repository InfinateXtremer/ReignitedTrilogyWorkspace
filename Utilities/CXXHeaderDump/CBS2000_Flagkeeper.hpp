#ifndef UE4SS_SDK_CBS2000_Flagkeeper_HPP
#define UE4SS_SDK_CBS2000_Flagkeeper_HPP

class ACBS2000_Flagkeeper_C : public ABP_Base_Friendly_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0908 (size: 0x8)
    class UAC_FalconSaveParamLocal_C* AC_FalconSaveParamLocal;                        // 0x0910 (size: 0x8)
    class UFalconEnemyStateComponent* State_ThrowFlag;                                // 0x0918 (size: 0x8)
    class UFalconEnemyStateComponent* State_ReadyforIGC;                              // 0x0920 (size: 0x8)
    class USceneComponent* ThrowPos;                                                  // 0x0928 (size: 0x8)
    class UFalconEnemyStateComponent* State_ThrowProjectile;                          // 0x0930 (size: 0x8)
    class UFalconEnemyStateComponent* State_MoveFast;                                 // 0x0938 (size: 0x8)
    class UFalconEnemyStateComponent* State_Hover;                                    // 0x0940 (size: 0x8)
    class UFalconEnemyStateComponent* State_HurtPlayer;                               // 0x0948 (size: 0x8)
    class UFalconEnemyStateComponent* State_Vulnerable;                               // 0x0950 (size: 0x8)
    class UFalconEnemyStateComponent* State_FlyOff;                                   // 0x0958 (size: 0x8)
    class UFalconEnemyStateComponent* State_CompletedPath;                            // 0x0960 (size: 0x8)
    class UFalconEnemyStateComponent* State_WaitForPlayer;                            // 0x0968 (size: 0x8)
    class UFalconEnemyStateComponent* State_MoveToStartPos;                           // 0x0970 (size: 0x8)
    class UFalconEnemyStateComponent* State_Active;                                   // 0x0978 (size: 0x8)
    float Timeline_2_Rot_C19FA0D144A69EE381371097D57BB142;                            // 0x0980 (size: 0x4)
    float Timeline_2_Pos_C19FA0D144A69EE381371097D57BB142;                            // 0x0984 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_C19FA0D144A69EE381371097D57BB142; // 0x0988 (size: 0x1)
    class UTimelineComponent* Timeline_2;                                             // 0x0990 (size: 0x8)
    float Timeline_0_NewTrack_0_1293633141565270696A55AA2444686C;                     // 0x0998 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_1293633141565270696A55AA2444686C; // 0x099C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x09A0 (size: 0x8)
    float Timeline_1_0_NewTrack_2_4E5B3A4845953E40643F55B225F0F931;                   // 0x09A8 (size: 0x4)
    float Timeline_1_0_NewTrack_1_4E5B3A4845953E40643F55B225F0F931;                   // 0x09AC (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1_0__Direction_4E5B3A4845953E40643F55B225F0F931; // 0x09B0 (size: 0x1)
    class UTimelineComponent* Timeline_1_0;                                           // 0x09B8 (size: 0x8)
    float Timeline_0_0_NewTrack_0_86042006445C2E73086DD49E58E095B2;                   // 0x09C0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0_0__Direction_86042006445C2E73086DD49E58E095B2; // 0x09C4 (size: 0x1)
    class UTimelineComponent* Timeline_0_0;                                           // 0x09C8 (size: 0x8)
    float MaxSpeed;                                                                   // 0x09D0 (size: 0x4)
    float SpeedTemp;                                                                  // 0x09D4 (size: 0x4)
    int32 CurrentIndex;                                                               // 0x09D8 (size: 0x4)
    TArray<class AActor*> FlagPoleActors;                                             // 0x09E0 (size: 0x10)
    TArray<class AActor*> IGCActors;                                                  // 0x09F0 (size: 0x10)
    class AActor* MissionMaster;                                                      // 0x0A00 (size: 0x8)
    bool IGCReady;                                                                    // 0x0A08 (size: 0x1)
    FVector StartLoc;                                                                 // 0x0A0C (size: 0xC)
    FVector EndLoc;                                                                   // 0x0A18 (size: 0xC)
    TArray<class AActor*> SelectorActors;                                             // 0x0A28 (size: 0x10)
    float StartRot;                                                                   // 0x0A38 (size: 0x4)
    float EndRot;                                                                     // 0x0A3C (size: 0x4)
    bool ReadyToThrow;                                                                // 0x0A40 (size: 0x1)
    FVector ThrowLoc;                                                                 // 0x0A44 (size: 0xC)
    float MissionStartDelay;                                                          // 0x0A50 (size: 0x4)
    bool Active;                                                                      // 0x0A54 (size: 0x1)
    TArray<FName> ValidStateNames;                                                    // 0x0A58 (size: 0x10)
    class AActor* CurrentActor;                                                       // 0x0A68 (size: 0x8)
    bool Moving;                                                                      // 0x0A70 (size: 0x1)
    float ZOffset;                                                                    // 0x0A74 (size: 0x4)
    class AActor* LastSplineMover;                                                    // 0x0A78 (size: 0x8)
    bool UseFacing;                                                                   // 0x0A80 (size: 0x1)
    class AActor* ThrowPoint;                                                         // 0x0A88 (size: 0x8)
    FVector LocSaved;                                                                 // 0x0A90 (size: 0xC)
    bool HurtPlayer;                                                                  // 0x0A9C (size: 0x1)
    int32 CompletedFlags;                                                             // 0x0AA0 (size: 0x4)

    void UserConstructionScript();
    void Timeline_0_0__FinishedFunc();
    void Timeline_0_0__UpdateFunc();
    void Timeline_1_0__FinishedFunc();
    void Timeline_1_0__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_0__NewTrack_3__EventFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void Timeline_2__Event__EventFunc();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__State_Move_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void BndEvt__State_WaitForPlayer_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void BndEvt__State_FlyOff_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_MoveToStartPos_K2Node_ComponentBoundEvent_4_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveBeginPlay();
    void MissionRestore();
    void MissionSuspend(bool Suspend);
    void MissionSetup(bool Active);
    void MissionReset(class AActor* RequestActor);
    void OnRegionOverlap_Event_0(class APhasmidCollisionRegion* OverlappedRegion, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void BndEvt__State_MoveFast_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionAlert(class AActor* Actor, int32 Value);
    void BndEvt__State_ThrowProjectile_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_HurtPlayer_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Idle_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Idle_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__State_Vulnerable_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_CompletedPath_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void StopSpeedLerp();
    void BndEvt__State_ReadyforIGC_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_ReadyforIGC_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void ExecuteUbergraph_CBS2000_Flagkeeper(int32 EntryPoint);
}; // Size: 0xAA4

#endif
