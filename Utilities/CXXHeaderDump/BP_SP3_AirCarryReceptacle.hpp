#ifndef UE4SS_SDK_BP_SP3_AirCarryReceptacle_HPP
#define UE4SS_SDK_BP_SP3_AirCarryReceptacle_HPP

class ABP_SP3_AirCarryReceptacle_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent;                      // 0x0320 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0328 (size: 0x8)
    class USkeletalMeshComponent* TechPlatform;                                       // 0x0330 (size: 0x8)
    class UParticleSystemComponent* Hilight;                                          // 0x0338 (size: 0x8)
    class USP3_CarrySocketComponent* socket;                                          // 0x0340 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x0348 (size: 0x8)
    class AQuestLevelActor* QuestLevelActor;                                          // 0x0350 (size: 0x8)
    class ABP_LS315_WeightDispenser_C* Weight;                                        // 0x0358 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__Socket_K2Node_ComponentBoundEvent_0_OnVFXSetStateSignature__DelegateSignature(FName State);
    void OnAttach_Event_0(class USP3_CarrySocketComponent* socket, class AActor* carryObj);
    void ReceiveBeginPlay();
    void RestoreDoorPuzzleSolved();
    void BndEvt__Hilight_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature(FName EventName, float EmitterTime, FVector Location, FVector Velocity);
    void BndEvt__Hilight_K2Node_ComponentBoundEvent_2_ParticleDeathSignature__DelegateSignature(FName EventName, float EmitterTime, int32 ParticleTime, FVector Location, FVector Velocity, FVector Direction);
    void ExecuteUbergraph_BP_SP3_AirCarryReceptacle(int32 EntryPoint);
}; // Size: 0x360

#endif
