#ifndef UE4SS_SDK_127_Destructible_Stump_HPP
#define UE4SS_SDK_127_Destructible_Stump_HPP

class A127_Destructible_Stump_C : public ABP_Base_Flammable_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UAC_FalconSaveCollectedPerm_C* AC_FalconSaveCollectedPerm;                  // 0x0480 (size: 0x8)
    class UBP_DestructibleFade_C* BP_DestructibleFade;                                // 0x0488 (size: 0x8)
    class UTfbAkComponent* AkAudio;                                                   // 0x0490 (size: 0x8)
    class UFalconLevelActorStateComponent* State_DestroyOnFire;                       // 0x0498 (size: 0x8)
    class UFalconLevelActorStateComponent* State_Destroy;                             // 0x04A0 (size: 0x8)
    class UDestructibleComponent* Destructible;                                       // 0x04A8 (size: 0x8)
    class UAkAudioEvent* SFX_Destroy;                                                 // 0x04B0 (size: 0x8)
    class AActor* SkillPointWatcher;                                                  // 0x04B8 (size: 0x8)
    bool RestoreSave;                                                                 // 0x04C0 (size: 0x1)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    bool IsImmuneToDamage(const FGameplayTagContainer& InTagContainer, class UPrimitiveComponent* HitComponent);
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
    void BndEvt__State_Destroy_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_DestroyOnFire_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_FireImpact_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_OnFire_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void On Player Ready();
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ExecuteUbergraph_127_Destructible_Stump(int32 EntryPoint);
}; // Size: 0x4C1

#endif
