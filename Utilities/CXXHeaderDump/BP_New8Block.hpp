#ifndef UE4SS_SDK_BP_New8Block_HPP
#define UE4SS_SDK_BP_New8Block_HPP

class ABP_New8Block_C : public AMission_Item_Base_StateMachine_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0488 (size: 0x8)
    class UBP_StateComponent_C* State_Green;                                          // 0x0490 (size: 0x8)
    class UBP_StateComponent_C* State_Grey;                                           // 0x0498 (size: 0x8)
    class UBP_StateComponent_C* State_Yellow;                                         // 0x04A0 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x04A8 (size: 0x8)
    class UParticleSystemComponent* Fire;                                             // 0x04B0 (size: 0x8)
    class UMaterialInstanceDynamic* Material;                                         // 0x04B8 (size: 0x8)
    float Initial State;                                                              // 0x04C0 (size: 0x4)
    class AActor* Block1;                                                             // 0x04C8 (size: 0x8)
    class AActor* Block2;                                                             // 0x04D0 (size: 0x8)
    int32 CurrentState;                                                               // 0x04D8 (size: 0x4)
    bool DelayToggle;                                                                 // 0x04DC (size: 0x1)
    class AActor* Controller;                                                         // 0x04E0 (size: 0x8)
    bool done;                                                                        // 0x04E8 (size: 0x1)
    float EmissiveStrength;                                                           // 0x04EC (size: 0x4)

    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void BndEvt__State_Green_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveBeginPlay();
    void BP_HandleDamage(float Magnitude, FGameplayTagContainer DamageTags, class UPrimitiveComponent* HitComponent, const class AActor* DamagingActor);
    void PlayerReady();
    void ExecuteUbergraph_BP_New8Block(int32 EntryPoint);
}; // Size: 0x4F0

#endif
