#ifndef UE4SS_SDK_BP_VFX_CES2218_StartJumpTrigger_HPP
#define UE4SS_SDK_BP_VFX_CES2218_StartJumpTrigger_HPP

class ABP_VFX_CES2218_StartJumpTrigger_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UParticleSystemComponent* PS_StartRamp_Splash;                              // 0x0320 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0328 (size: 0x8)
    FTransform PS_Transform;                                                          // 0x0330 (size: 0x30)

    void UserConstructionScript();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveActorEndOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_VFX_CES2218_StartJumpTrigger(int32 EntryPoint);
}; // Size: 0x360

#endif
