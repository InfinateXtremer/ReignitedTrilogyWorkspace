#ifndef UE4SS_SDK_BP_207_DamageGrate4_HPP
#define UE4SS_SDK_BP_207_DamageGrate4_HPP

class ABP_207_DamageGrate4_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0450 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0458 (size: 0x8)
    float Timeline_1_NewTrack_0_060A0ED34B7C13005B5D74B0CCCEE632;                     // 0x0460 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_060A0ED34B7C13005B5D74B0CCCEE632; // 0x0464 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0468 (size: 0x8)
    class UParticleSystemComponent* vfx;                                              // 0x0470 (size: 0x8)

    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_207_DamageGrate4(int32 EntryPoint);
}; // Size: 0x478

#endif
