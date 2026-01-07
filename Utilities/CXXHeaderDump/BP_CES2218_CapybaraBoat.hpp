#ifndef UE4SS_SDK_BP_CES2218_CapybaraBoat_HPP
#define UE4SS_SDK_BP_CES2218_CapybaraBoat_HPP

class ABP_CES2218_CapybaraBoat_C : public AMission_Item_Base_StateMachine_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0488 (size: 0x8)
    class UBP_StateComponent_C* State_Death2;                                         // 0x0490 (size: 0x8)
    class UBP_StateComponent_C* State_Aware;                                          // 0x0498 (size: 0x8)
    class USkeletalMeshComponent* BoatPilot;                                          // 0x04A0 (size: 0x8)
    class AActor* SplineMover;                                                        // 0x04A8 (size: 0x8)
    class AActor* BoatActor;                                                          // 0x04B0 (size: 0x8)
    FRotator RotBuffer;                                                               // 0x04B8 (size: 0xC)
    FVector LocBuffer;                                                                // 0x04C4 (size: 0xC)
    bool Active;                                                                      // 0x04D0 (size: 0x1)
    bool UseSplashVFX;                                                                // 0x04D1 (size: 0x1)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__State_Death2_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_CES2218_CapybaraBoat(int32 EntryPoint);
}; // Size: 0x4D2

#endif
