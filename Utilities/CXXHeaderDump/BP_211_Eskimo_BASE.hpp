#ifndef UE4SS_SDK_BP_211_Eskimo_BASE_HPP
#define UE4SS_SDK_BP_211_Eskimo_BASE_HPP

class ABP_211_Eskimo_BASE_C : public ABP_Base_Friendly_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    class UFalconEnemyStateComponent* State_FrozenBonk;                               // 0x0908 (size: 0x8)
    class UDecalComponent* PuddleDecal;                                               // 0x0910 (size: 0x8)
    class USkeletalMeshComponent* Skel_IceBlock;                                      // 0x0918 (size: 0x8)
    class UStaticMeshComponent* Spear;                                                // 0x0920 (size: 0x8)
    class UFalconEnemyStateComponent* State_SplineJumpA;                              // 0x0928 (size: 0x8)
    class UFalconEnemyStateComponent* State_SimpleMoveA;                              // 0x0930 (size: 0x8)
    class UFalconEnemyStateComponent* State_JustFreed;                                // 0x0938 (size: 0x8)
    class UStaticMeshComponent* IceBlock;                                             // 0x0940 (size: 0x8)
    class UFalconEnemyStateComponent* State_Frozen;                                   // 0x0948 (size: 0x8)
    float Bonk_NewTrack_0_F76B14064DFF78B0D710AE83C7B17B16;                           // 0x0950 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Bonk__Direction_F76B14064DFF78B0D710AE83C7B17B16; // 0x0954 (size: 0x1)
    class UTimelineComponent* Bonk;                                                   // 0x0958 (size: 0x8)
    float Timeline_0_Size_BAFF501F4767DF7650D8E0A668CB925E;                           // 0x0960 (size: 0x4)
    float Timeline_0_Opacity_Curve_BAFF501F4767DF7650D8E0A668CB925E;                  // 0x0964 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_BAFF501F4767DF7650D8E0A668CB925E; // 0x0968 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0970 (size: 0x8)
    TArray<class ABP_CES2033_IceWizard_C*> EnemiesThatFreezeMe;                       // 0x0978 (size: 0x10)
    class AActor* AssociatedIGCSelector;                                              // 0x0988 (size: 0x8)
    class UMaterialInstanceDynamic* MiD Decal;                                        // 0x0990 (size: 0x8)
    class AActor* SectionControllerRef;                                               // 0x0998 (size: 0x8)
    bool doHeartsEnabled?;                                                            // 0x09A0 (size: 0x1)
    class UParticleSystemComponent* SpawnedHearts;                                    // 0x09A8 (size: 0x8)
    bool doFreedInterruptCheck?;                                                      // 0x09B0 (size: 0x1)

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_0__Start__EventFunc();
    void Bonk__FinishedFunc();
    void Bonk__UpdateFunc();
    void OnCutsceneBegin();
    void OnCutsceneEnd();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__State_Frozen_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Frozen_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void 211 Icebuilder - Do Action Event(int32 Action ID);
    void BndEvt__State_SimpleMoveA_K2Node_ComponentBoundEvent_0_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__State_SimpleMoveA_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_JustFreed_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void 211 Icebuilder - Enable Hearts?(bool enable?);
    void BndEvt__State_SplineJumpA_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_JustFreed_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__State_FrozenBonk_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void Icebuilder - Prep For Talking();
    void ExecuteUbergraph_BP_211_Eskimo_BASE(int32 EntryPoint);
}; // Size: 0x9B1

#endif
