#ifndef UE4SS_SDK_BP_SkateboardTriggerVolume_HPP
#define UE4SS_SDK_BP_SkateboardTriggerVolume_HPP

class ABP_SkateboardTriggerVolume_C : public APhasmidLevelActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent;                      // 0x03D0 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x03D8 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x03E0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x03E8 (size: 0x8)
    class USphereComponent* TriggerVolume;                                            // 0x03F0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x03F8 (size: 0x8)
    class ASpyroCharacter* playerCharacter;                                           // 0x0400 (size: 0x8)
    TArray<FSkateboardInfo_Struct> SkateboardInfos;                                   // 0x0408 (size: 0x10)
    TEnumAsByte<SkateboardTypes::Type> RequestedSkateboardType;                       // 0x0418 (size: 0x1)
    bool ForceTurbo;                                                                  // 0x0419 (size: 0x1)
    float Override_GroundSpeed;                                                       // 0x041C (size: 0x4)
    float Override_GroundAccel;                                                       // 0x0420 (size: 0x4)
    float Override_TurboSpeed;                                                        // 0x0424 (size: 0x4)
    float Override_TurboAccel;                                                        // 0x0428 (size: 0x4)
    float Override_MaxTurboPoints;                                                    // 0x042C (size: 0x4)
    float Override_MaxTurboUsedPerSecond;                                             // 0x0430 (size: 0x4)
    float Override_RollAngVert;                                                       // 0x0434 (size: 0x4)
    float Override_MaxSpeed;                                                          // 0x0438 (size: 0x4)
    float Override_MaxSpeedWhenTurboAllowed;                                          // 0x043C (size: 0x4)

    void SetupBoards(class UPhasmidCharacterMovementComponent* Movement, TEnumAsByte<SkateboardTypes::Type> SkateboardType);
    void GetSkateboardType(TEnumAsByte<SkateboardTypes::Type>& SkateboardType);
    void ValidateSkater(class UObject* Object, class ASpyroCharacter*& Skater, class UPhasmidCharacterMovementComponent*& Movement);
    void UserConstructionScript();
    void BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void EnableSkateboardTrigger(bool Enable);
    void ForceEnterTrigger(class UObject* Object);
    void ExecuteUbergraph_BP_SkateboardTriggerVolume(int32 EntryPoint);
}; // Size: 0x440

#endif
