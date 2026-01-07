#ifndef UE4SS_SDK_BP_TreasureChest_Explosive_HPP
#define UE4SS_SDK_BP_TreasureChest_Explosive_HPP

class ABP_TreasureChest_Explosive_C : public ABP_TreasureChest_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0620 (size: 0x8)
    class USplineComponent* Spline5;                                                  // 0x0628 (size: 0x8)
    class USplineComponent* Spline4;                                                  // 0x0630 (size: 0x8)
    class USplineComponent* Spline3;                                                  // 0x0638 (size: 0x8)
    class USplineComponent* Spline2;                                                  // 0x0640 (size: 0x8)
    class USplineComponent* Spline1;                                                  // 0x0648 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0650 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0658 (size: 0x8)
    class UStaticMeshComponent* DummyGem;                                             // 0x0660 (size: 0x8)
    bool fuseTriggered?;                                                              // 0x0668 (size: 0x1)
    class UParticleSystemComponent* FuseVFX;                                          // 0x0670 (size: 0x8)
    class UMaterialInterface* DummyGemMat;                                            // 0x0678 (size: 0x8)
    class UParticleSystem* DummyAmbientVFX;                                           // 0x0680 (size: 0x8)
    class UMaterialInstance* GemMaterial;                                             // 0x0688 (size: 0x8)
    TMap<TEnumAsByte<LootType_Enum::Type>, UMaterialInstance*> ColorToMat;            // 0x0690 (size: 0x50)
    TEnumAsByte<LootType_Enum::Type> GemColorInside;                                  // 0x06E0 (size: 0x1)
    float FuseTime;                                                                   // 0x06E4 (size: 0x4)
    class UParticleSystem* ExplosionVFX;                                              // 0x06E8 (size: 0x8)
    class UParticleSystem* FuseFX;                                                    // 0x06F0 (size: 0x8)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void BP_HandleDamage(float Magnitude, FGameplayTagContainer DamageTags, class UPrimitiveComponent* HitComponent, const class AActor* DamagingActor);
    void Explosive Chest - Explode Now();
    void BndEvt__State_Death_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void set behavior state();
    void Explosive Chest - Start Fuse();
    void ExecuteUbergraph_BP_TreasureChest_Explosive(int32 EntryPoint);
}; // Size: 0x6F8

#endif
