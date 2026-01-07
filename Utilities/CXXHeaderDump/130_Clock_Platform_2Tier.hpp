#ifndef UE4SS_SDK_130_Clock_Platform_2Tier_HPP
#define UE4SS_SDK_130_Clock_Platform_2Tier_HPP

class A130_Clock_Platform_2Tier_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UAkComponent* AkAudio Lower;                                                // 0x0320 (size: 0x8)
    class UAkComponent* AkAudio Upper;                                                // 0x0328 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_Barrier_Flash_Lower;                       // 0x0330 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_Barrierl_Flash_Upper;                      // 0x0338 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_Barrier_Lower;                             // 0x0340 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_Barrier_Upper;                             // 0x0348 (size: 0x8)
    class UStaticMeshComponent* UpperPlatform;                                        // 0x0350 (size: 0x8)
    class UStaticMeshComponent* LowerPlatform;                                        // 0x0358 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0360 (size: 0x8)
    float Timeline_1_Light_Brightness_A7F4A9EF4C98B46FFCB19782AB6F790F;               // 0x0368 (size: 0x4)
    float Timeline_1_Transform_A7F4A9EF4C98B46FFCB19782AB6F790F;                      // 0x036C (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_A7F4A9EF4C98B46FFCB19782AB6F790F; // 0x0370 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0378 (size: 0x8)
    float Timeline_0_Light_Brightness_74D072894F8A43970F39AE90C1E58CF6;               // 0x0380 (size: 0x4)
    float Timeline_0_Transform_74D072894F8A43970F39AE90C1E58CF6;                      // 0x0384 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_74D072894F8A43970F39AE90C1E58CF6; // 0x0388 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0390 (size: 0x8)
    FVector Vector_Self;                                                              // 0x0398 (size: 0xC)
    FVector StartVector_Self;                                                         // 0x03A4 (size: 0xC)
    FVector EndVector_Self;                                                           // 0x03B0 (size: 0xC)
    TArray<class AActor*> ActorRefs;                                                  // 0x03C0 (size: 0x10)
    FName StateName_Success;                                                          // 0x03D0 (size: 0x8)
    int32 Active;                                                                     // 0x03D8 (size: 0x4)
    FName StateName_Fail;                                                             // 0x03E0 (size: 0x8)

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void ReceiveBeginPlay();
    void StateChange(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_130_Clock_Platform_2Tier(int32 EntryPoint);
}; // Size: 0x3E8

#endif
