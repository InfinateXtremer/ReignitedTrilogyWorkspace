#ifndef UE4SS_SDK_BP_207_DamageGrate5_HPP
#define UE4SS_SDK_BP_207_DamageGrate5_HPP

class ABP_207_DamageGrate5_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0450 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0458 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0460 (size: 0x8)
    float Timeline_1_Position_7F7B186743ECAA279CFEA3890CC9014A;                       // 0x0468 (size: 0x4)
    float Timeline_1_Rotation_7F7B186743ECAA279CFEA3890CC9014A;                       // 0x046C (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_7F7B186743ECAA279CFEA3890CC9014A; // 0x0470 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0478 (size: 0x8)
    float MyLocation;                                                                 // 0x0480 (size: 0x4)
    class UParticleSystemComponent* vfx;                                              // 0x0488 (size: 0x8)

    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_207_DamageGrate5(int32 EntryPoint);
}; // Size: 0x490

#endif
