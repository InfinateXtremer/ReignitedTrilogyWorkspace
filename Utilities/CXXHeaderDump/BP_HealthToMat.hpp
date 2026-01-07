#ifndef UE4SS_SDK_BP_HealthToMat_HPP
#define UE4SS_SDK_BP_HealthToMat_HPP

class ABP_HealthToMat_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)

    bool IsChargeTarget();
    bool IsDead();
    bool IsImmuneToDamage(const FGameplayTagContainer& InTagContainer, class UPrimitiveComponent* HitComponent);
    bool OnDamage(const FGameplayEventData Payload);
    bool OnDealDamage(const FGameplayEventData Payload);
    bool OnDeath(const FGameplayEventData Payload);
    bool OnHealthRestored(const FGameplayEventData Payload);
    bool OnShieldBreak(const FGameplayEventData Payload);
    void UserConstructionScript();
    void INotifySparxMovementModeChanged(uint8 NewMovementMode);
    void INotifySparxVisibilityChanged(bool visible, bool ResetStack);
    void INotifySparxFetchCollectibleRequested(FVector CollectibleLocation, bool IsTreasureChest);
    void INotifySparxChaseButterflyRequested(class AActor* ButterflyActor);
    void ISetSparxDebugInvisibilityOverride(bool IsInvisible);
    void IGetSparxDebugInvisibilityOverride(bool IsInvisible);
    void IGetSparxCanFetchCollectible(bool CanFetch);
    void INotifySparxIsUnderwater(bool IsUnderwater);
    void INotifySparxGemFindRequested(bool GemFinderRequested, class AActor* NearestActorWithGem);
    void IRequestSparxGemFindInputReact(bool FoundAnything);
    void INotifySparxIsNightmareMode(bool NightmareMode);
    void IGetSparxUnderwater(bool IsUnderwater);
    void ISetSparxFowardOffset(float ForwardOffset);
    void ReceiveTick(float DeltaSeconds);
    void INotifySparxHealthChanged(float NewHealth, bool SkipReaction);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_HealthToMat(int32 EntryPoint);
}; // Size: 0x328

#endif
