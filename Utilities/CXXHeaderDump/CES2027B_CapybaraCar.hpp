#ifndef UE4SS_SDK_CES2027B_CapybaraCar_HPP
#define UE4SS_SDK_CES2027B_CapybaraCar_HPP

class ACES2027B_CapybaraCar_C : public ASkeletalMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A0 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x03A8 (size: 0x8)
    class UParticleSystemComponent* PS_CapybaraCar_Exhaust_Boat;                      // 0x03B0 (size: 0x8)
    class UBP_DestructibleFade_C* BP_DestructibleFade;                                // 0x03B8 (size: 0x8)
    class UDestructibleComponent* SM_CES2027B_CapybaraCar_DM;                         // 0x03C0 (size: 0x8)
    class UStaticMeshComponent* SM_CES2027B_CapybaraCar;                              // 0x03C8 (size: 0x8)

    void UserConstructionScript();
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void BndEvt__SkeletalMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_CES2027B_CapybaraCar(int32 EntryPoint);
}; // Size: 0x3D0

#endif
