#ifndef UE4SS_SDK_CNS2092_Elora_HPP
#define UE4SS_SDK_CNS2092_Elora_HPP

class ACNS2092_Elora_C : public ABP_Base_Friendly_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    class UFalconEnemyStateComponent* State_React;                                    // 0x0908 (size: 0x8)
    float SightRadius;                                                                // 0x0910 (size: 0x4)
    float PVHADegrees;                                                                // 0x0914 (size: 0x4)
    class AActor* MissionStartIGC;                                                    // 0x0918 (size: 0x8)
    class AActor* TriggerActor;                                                       // 0x0920 (size: 0x8)
    FVector Origin;                                                                   // 0x0928 (size: 0xC)
    FRotator Facing;                                                                  // 0x0934 (size: 0xC)
    bool TalkBool;                                                                    // 0x0940 (size: 0x1)
    bool TouchReact;                                                                  // 0x0941 (size: 0x1)

    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void DialogueControl(bool Start, FString DebugString, class AActor* TalkTarget, class UAnimSequence* VOLipSyncAnim);
    void BndEvt__State_React_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_CNS2092_Elora(int32 EntryPoint);
}; // Size: 0x942

#endif
