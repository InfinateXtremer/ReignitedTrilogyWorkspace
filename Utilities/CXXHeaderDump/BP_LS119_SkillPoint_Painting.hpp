#ifndef UE4SS_SDK_BP_LS119_SkillPoint_Painting_HPP
#define UE4SS_SDK_BP_LS119_SkillPoint_Painting_HPP

class ABP_LS119_SkillPoint_Painting_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0450 (size: 0x8)
    class UBP_StateComponent_C* State_Burned;                                         // 0x0458 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0460 (size: 0x8)
    class AActor* AchievementWatcher;                                                 // 0x0468 (size: 0x8)
    class UMaterialInstanceDynamic* Material;                                         // 0x0470 (size: 0x8)

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
    void ReceiveBeginPlay();
    void BndEvt__State_Burned_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_LS119_SkillPoint_Painting(int32 EntryPoint);
}; // Size: 0x478

#endif
