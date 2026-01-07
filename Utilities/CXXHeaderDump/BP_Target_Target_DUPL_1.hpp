#ifndef UE4SS_SDK_BP_Target_Target_DUPL_1_HPP
#define UE4SS_SDK_BP_Target_Target_DUPL_1_HPP

class ABP_Target_Target_C : public ABP_Base_Flammable_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0478 (size: 0x8)
    class UBP_DestructibleFade_C* BP_DestructibleFade;                                // 0x0480 (size: 0x8)
    class UDestructibleComponent* Destructible;                                       // 0x0488 (size: 0x8)
    class UTfbAkComponent* AkAudio;                                                   // 0x0490 (size: 0x8)
    class UFalconLevelActorStateComponent* State_Destroy;                             // 0x0498 (size: 0x8)
    class UAkAudioEvent* SFX_Destroy;                                                 // 0x04A0 (size: 0x8)
    TArray<class AActor*> MyOtherPieces;                                              // 0x04A8 (size: 0x10)

    void UserConstructionScript();
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void BndEvt__State_Destroy_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_FireImpact_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_OnFire_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void ExecuteUbergraph_BP_Target_Target(int32 EntryPoint);
}; // Size: 0x4B8

#endif
