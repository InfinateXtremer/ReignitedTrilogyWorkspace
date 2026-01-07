#ifndef UE4SS_SDK_BP_TreasureChest_LS109Cauldron_HPP
#define UE4SS_SDK_BP_TreasureChest_LS109Cauldron_HPP

class ABP_TreasureChest_LS109Cauldron_C : public ABP_TreasureChest_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0620 (size: 0x8)
    class UParticleSystemComponent* PS_Cauldron_Bubble;                               // 0x0628 (size: 0x8)
    class UParticleSystemComponent* PS_RedDressLady_Fire;                             // 0x0630 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0638 (size: 0x8)
    class UChildActorComponent* FirePoint;                                            // 0x0640 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0648 (size: 0x8)
    float Timeline_1_NewTrack_0_DA7CFBCE445A429432B1B0B645EDF0B3;                     // 0x0650 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_DA7CFBCE445A429432B1B0B645EDF0B3; // 0x0654 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0658 (size: 0x8)
    class UParticleSystemComponent* FireParticle;                                     // 0x0660 (size: 0x8)

    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void BP_HandleDamage(float Magnitude, FGameplayTagContainer DamageTags, class UPrimitiveComponent* HitComponent, const class AActor* DamagingActor);
    void ReceiveBeginPlay();
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ExecuteUbergraph_BP_TreasureChest_LS109Cauldron(int32 EntryPoint);
}; // Size: 0x668

#endif
