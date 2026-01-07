#ifndef UE4SS_SDK_ISparxActions_HPP
#define UE4SS_SDK_ISparxActions_HPP

class IISparxActions_C : public IInterface
{

    void ISetSparxFowardOffset(float ForwardOffset);
    void IGetSparxUnderwater(bool& IsUnderwater);
    void INotifySparxIsNightmareMode(bool NightmareMode);
    void IRequestSparxGemFindInputReact(bool FoundAnything);
    void INotifySparxGemFindRequested(bool GemFinderRequested, class AActor* NearestActorWithGem);
    void INotifySparxIsUnderwater(bool IsUnderwater);
    void IGetSparxCanFetchCollectible(bool& CanFetch);
    void IGetSparxDebugInvisibilityOverride(bool& IsInvisible);
    void ISetSparxDebugInvisibilityOverride(bool IsInvisible);
    void INotifySparxChaseButterflyRequested(class ABP_ButterflyHealth_C* ButterflyActor);
    void INotifySparxFetchCollectibleRequested(FVector CollectibleLocation, bool IsTreasureChest);
    void INotifySparxVisibilityChanged(bool visible, bool ResetStack);
    void INotifySparxMovementModeChanged(TEnumAsByte<ESparxMovementModes::Type> NewMovementMode);
    void INotifySparxHealthChanged(float NewHealth, bool SkipReaction);
}; // Size: 0x28

#endif
