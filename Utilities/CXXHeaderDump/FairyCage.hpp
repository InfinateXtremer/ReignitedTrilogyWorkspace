#ifndef UE4SS_SDK_FairyCage_HPP
#define UE4SS_SDK_FairyCage_HPP

class AFairyCage_C : public AMission_Item_Base_StateMachine_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UBP_StateComponent_C* State_Disappear;                                      // 0x0488 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0490 (size: 0x8)
    class UAC_FalconSaveCollectedPerm_C* AC_FalconSaveCollectedPerm;                  // 0x0498 (size: 0x8)
    class USceneComponent* HitLoc1;                                                   // 0x04A0 (size: 0x8)
    class UBoxComponent* SimpleCollision;                                             // 0x04A8 (size: 0x8)
    class UBP_DestructibleFade_C* BP_DestructibleFade;                                // 0x04B0 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_LS127_Fairy_Cage_Destruction;              // 0x04B8 (size: 0x8)
    class UPointLightComponent* PointLight1;                                          // 0x04C0 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem1;                                  // 0x04C8 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x04D0 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x04D8 (size: 0x8)
    class UBP_StateComponent_C* State_Fly;                                            // 0x04E0 (size: 0x8)
    class USceneComponent* FairyWandTip;                                              // 0x04E8 (size: 0x8)
    class UStaticMeshComponent* FairyWand;                                            // 0x04F0 (size: 0x8)
    class UBP_StateComponent_C* State_Dance;                                          // 0x04F8 (size: 0x8)
    class UBP_StateComponent_C* State_Death2;                                         // 0x0500 (size: 0x8)
    class UBP_StateComponent_C* State_Release;                                        // 0x0508 (size: 0x8)
    class USkeletalMeshComponent* Fairy;                                              // 0x0510 (size: 0x8)
    float Timeline_2_NewTrack_0_030356594E009502A8646EBCFDF8E377;                     // 0x0518 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_030356594E009502A8646EBCFDF8E377; // 0x051C (size: 0x1)
    class UTimelineComponent* Timeline_2;                                             // 0x0520 (size: 0x8)
    float Timeline_1_NewTrack_0_8DC89654473687AFD5AC64BD56947025;                     // 0x0528 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_8DC89654473687AFD5AC64BD56947025; // 0x052C (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0530 (size: 0x8)
    float MoveTimeline_NewTrack_1_E274C9384C204BC59C7B1B91A9C83CAD;                   // 0x0538 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> MoveTimeline__Direction_E274C9384C204BC59C7B1B91A9C83CAD; // 0x053C (size: 0x1)
    class UTimelineComponent* MoveTimeline;                                           // 0x0540 (size: 0x8)
    float SpawnTimeline_NewTrack_0_3F00D1EC475807DEA2A4E79E48C1AB72;                  // 0x0548 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SpawnTimeline__Direction_3F00D1EC475807DEA2A4E79E48C1AB72; // 0x054C (size: 0x1)
    class UTimelineComponent* SpawnTimeline;                                          // 0x0550 (size: 0x8)
    FVector FairyLoc_Start;                                                           // 0x0558 (size: 0xC)
    FVector FairyLoc_End;                                                             // 0x0564 (size: 0xC)
    class AActor* SplineActor;                                                        // 0x0570 (size: 0x8)
    class AActor* RopeActor;                                                          // 0x0578 (size: 0x8)
    class AActor* SpawnedActor;                                                       // 0x0580 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0588 (size: 0x8)
    FRotator FairyRot_Start;                                                          // 0x0590 (size: 0xC)
    FRotator FairyRot_End;                                                            // 0x059C (size: 0xC)
    float MoveTimelineMultiplier;                                                     // 0x05A8 (size: 0x4)
    class AActor* Whirlwind;                                                          // 0x05B0 (size: 0x8)
    float LocalHeading;                                                               // 0x05B8 (size: 0x4)
    float LocalPitch;                                                                 // 0x05BC (size: 0x4)
    float LocalDistance;                                                              // 0x05C0 (size: 0x4)
    FGameplayTagContainer NewVar_0;                                                   // 0x05C8 (size: 0x20)
    bool RestoreSave;                                                                 // 0x05E8 (size: 0x1)
    bool Activated;                                                                   // 0x05E9 (size: 0x1)
    float CurrentDelta;                                                               // 0x05EC (size: 0x4)
    float Delta_Mult;                                                                 // 0x05F0 (size: 0x4)
    class ABP_Whirlwind_C* WhirlwindBP;                                               // 0x05F8 (size: 0x8)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    bool OnDamage(const FGameplayEventData Payload);
    bool IsImmuneToDamage(const FGameplayTagContainer& InTagContainer, class UPrimitiveComponent* HitComponent);
    void UserConstructionScript();
    void SpawnTimeline__FinishedFunc();
    void SpawnTimeline__UpdateFunc();
    void MoveTimeline__FinishedFunc();
    void MoveTimeline__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void ReceiveBeginPlay();
    void MissionEnd(bool Success, bool LevelEnd);
    void BndEvt__State_Release_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void PlayerReady();
    void ReceiveTick(float DeltaSeconds);
    void CheckForWhirlwindUse();
    void BndEvt__State_Death2_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void On Cull(class AActor* Actor, bool bIsCulled);
    void ExecuteUbergraph_FairyCage(int32 EntryPoint);
}; // Size: 0x600

#endif
