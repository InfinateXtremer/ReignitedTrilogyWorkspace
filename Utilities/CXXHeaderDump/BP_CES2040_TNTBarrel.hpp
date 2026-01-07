#ifndef UE4SS_SDK_BP_CES2040_TNTBarrel_HPP
#define UE4SS_SDK_BP_CES2040_TNTBarrel_HPP

class ABP_CES2040_TNTBarrel_C : public ABP_CES1070_TNTBarrel_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05C0 (size: 0x8)
    class UCapsuleComponent* BoomCapsule;                                             // 0x05C8 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void SetParameters(const TArray<class ATargetPoint*>& BarrelTargetPoints, bool ExplodeOnPathEnd);
    void BndEvt__BoomCapsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_CES2040_TNTBarrel(int32 EntryPoint);
}; // Size: 0x5D0

#endif
