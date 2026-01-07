#ifndef UE4SS_SDK_CNS2111_Hunter_HPP
#define UE4SS_SDK_CNS2111_Hunter_HPP

class ACNS2111_Hunter_C : public ABP_Base_Friendly_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    class UFalconEnemyStateComponent* State_React;                                    // 0x0908 (size: 0x8)
    class UStaticMeshComponent* LHand_Prop;                                           // 0x0910 (size: 0x8)
    class UFalconEnemyStateComponent* State_FireArrow;                                // 0x0918 (size: 0x8)
    class UFalconEnemyStateComponent* State_SplineJump_D;                             // 0x0920 (size: 0x8)
    class UFalconEnemyStateComponent* State_SplineJump_C;                             // 0x0928 (size: 0x8)
    class UFalconEnemyStateComponent* State_SplineJump_B;                             // 0x0930 (size: 0x8)
    class UFalconEnemyStateComponent* State_SplineJump_A;                             // 0x0938 (size: 0x8)
    float MissionStartDelay;                                                          // 0x0940 (size: 0x4)
    bool is201Logic?;                                                                 // 0x0944 (size: 0x1)
    bool isBowHidden?;                                                                // 0x0945 (size: 0x1)
    bool BoolTalk;                                                                    // 0x0946 (size: 0x1)

    void UserConstructionScript();
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionReset(class AActor* RequestActor);
    void ReceiveBeginPlay();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void DialogueControl(bool Start, FString DebugString, class AActor* TalkTarget, class UAnimSequence* VOLipSyncAnim);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void ExecuteUbergraph_CNS2111_Hunter(int32 EntryPoint);
}; // Size: 0x947

#endif
