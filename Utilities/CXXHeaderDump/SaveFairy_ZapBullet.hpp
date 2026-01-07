#ifndef UE4SS_SDK_SaveFairy_ZapBullet_HPP
#define UE4SS_SDK_SaveFairy_ZapBullet_HPP

class ASaveFairy_ZapBullet_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0320 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0328 (size: 0x8)
    float Timeline_0_NewTrack_1_51B07A6F418A60BC7AD843BD4F696F90;                     // 0x0330 (size: 0x4)
    float Timeline_0_NewTrack_0_51B07A6F418A60BC7AD843BD4F696F90;                     // 0x0334 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_51B07A6F418A60BC7AD843BD4F696F90; // 0x0338 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0340 (size: 0x8)
    bool introComplete;                                                               // 0x0348 (size: 0x1)
    int32 collectSequence;                                                            // 0x034C (size: 0x4)
    EInventoryType NewVar_0;                                                          // 0x0350 (size: 0x1)
    TArray<class AActor*> ActorSet;                                                   // 0x0358 (size: 0x10)
    class AActor* ActorDestination;                                                   // 0x0368 (size: 0x8)
    float NewVar_1;                                                                   // 0x0370 (size: 0x4)
    FVector VectorStart;                                                              // 0x0374 (size: 0xC)
    FVector VectorEnd;                                                                // 0x0380 (size: 0xC)

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_SaveFairy_ZapBullet(int32 EntryPoint);
}; // Size: 0x38C

#endif
