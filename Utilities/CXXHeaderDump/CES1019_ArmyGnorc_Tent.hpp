#ifndef UE4SS_SDK_CES1019_ArmyGnorc_Tent_HPP
#define UE4SS_SDK_CES1019_ArmyGnorc_Tent_HPP

class ACES1019_ArmyGnorc_Tent_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UNavModifierComponent* NavModifier;                                         // 0x0450 (size: 0x8)
    class UCapsuleComponent* NavMod;                                                  // 0x0458 (size: 0x8)
    class UFalconLevelActorStateComponent* State_Ignite;                              // 0x0460 (size: 0x8)
    class UFalconEnemyStateComponent* State_Enter;                                    // 0x0468 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0470 (size: 0x8)
    class AActor* achievement;                                                        // 0x0478 (size: 0x8)

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
    void BndEvt__State_Ignite_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Enter_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_CES1019_ArmyGnorc_Tent(int32 EntryPoint);
}; // Size: 0x480

#endif
