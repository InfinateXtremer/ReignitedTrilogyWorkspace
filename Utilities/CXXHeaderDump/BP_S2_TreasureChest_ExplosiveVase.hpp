#ifndef UE4SS_SDK_BP_S2_TreasureChest_ExplosiveVase_HPP
#define UE4SS_SDK_BP_S2_TreasureChest_ExplosiveVase_HPP

class ABP_S2_TreasureChest_ExplosiveVase_C : public ABP_TreasureChest_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0620 (size: 0x8)
    class UBP_StateComponent_C* State_VaseLaunch;                                     // 0x0628 (size: 0x8)
    class UStaticMeshComponent* JumpingVase;                                          // 0x0630 (size: 0x8)
    float VaseJump_height_EF13B4964AF196CA60E0EBB069BBAEFF;                           // 0x0638 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> VaseJump__Direction_EF13B4964AF196CA60E0EBB069BBAEFF; // 0x063C (size: 0x1)
    class UTimelineComponent* VaseJump;                                               // 0x0640 (size: 0x8)
    float MAgnitude_NewTrack_2_264EA2084FA81D52A93F809F3F2931B8;                      // 0x0648 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> MAgnitude__Direction_264EA2084FA81D52A93F809F3F2931B8; // 0x064C (size: 0x1)
    class UTimelineComponent* Magnitude;                                              // 0x0650 (size: 0x8)
    float Shaking_NewTrack_0_2CE3D2E645A1DFDFFD2077B12775354E;                        // 0x0658 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Shaking__Direction_2CE3D2E645A1DFDFFD2077B12775354E; // 0x065C (size: 0x1)
    class UTimelineComponent* Shaking;                                                // 0x0660 (size: 0x8)
    bool fuseTriggered?;                                                              // 0x0668 (size: 0x1)
    class UParticleSystemComponent* FuseVFX;                                          // 0x0670 (size: 0x8)
    float FuseTime;                                                                   // 0x0678 (size: 0x4)
    float shakeMag;                                                                   // 0x067C (size: 0x4)
    float Height;                                                                     // 0x0680 (size: 0x4)
    FGameplayTagContainer QuickExplodeTags;                                           // 0x0688 (size: 0x20)

    void UserConstructionScript();
    void Shaking__FinishedFunc();
    void Shaking__UpdateFunc();
    void MAgnitude__FinishedFunc();
    void MAgnitude__UpdateFunc();
    void VaseJump__FinishedFunc();
    void VaseJump__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void BP_HandleDamage(float Magnitude, FGameplayTagContainer DamageTags, class UPrimitiveComponent* HitComponent, const class AActor* DamagingActor);
    void Explosive Chest - Explode Now();
    void Explosive Vase - Start Fuse();
    void set behavior state();
    void Treasure Chest - Force Break Now(bool SpawnNoLoot);
    void BndEvt__State_Death_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void S2 Explosive Vase - Shake Control(bool start?);
    void BndEvt__State_VaseLaunch_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_S2_TreasureChest_ExplosiveVase(int32 EntryPoint);
}; // Size: 0x6A8

#endif
