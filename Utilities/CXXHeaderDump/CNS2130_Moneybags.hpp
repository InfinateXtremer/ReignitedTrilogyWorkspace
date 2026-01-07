#ifndef UE4SS_SDK_CNS2130_Moneybags_HPP
#define UE4SS_SDK_CNS2130_Moneybags_HPP

class ACNS2130_Moneybags_C : public ABP_Base_Friendly_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    class UFalconEnemyStateComponent* State_React;                                    // 0x0908 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState: BuildBridge;                  // 0x0910 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState: MoveToBridge;                 // 0x0918 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState: Start;                        // 0x0920 (size: 0x8)
    class AActor* LevelPlacement;                                                     // 0x0928 (size: 0x8)
    bool TalkBool;                                                                    // 0x0930 (size: 0x1)
    bool TouchReact;                                                                  // 0x0931 (size: 0x1)

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
    void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void DialogueControl(bool Start, FString DebugString, class AActor* TalkTarget, class UAnimSequence* VOLipSyncAnim);
    void BndEvt__State_React_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_CNS2130_Moneybags(int32 EntryPoint);
}; // Size: 0x932

#endif
