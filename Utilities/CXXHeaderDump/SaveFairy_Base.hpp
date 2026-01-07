#ifndef UE4SS_SDK_SaveFairy_Base_HPP
#define UE4SS_SDK_SaveFairy_Base_HPP

class ASaveFairy_Base_C : public ABP_Base_NPC_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0858 (size: 0x8)
    class UParticleSystemComponent* FairyGlow_NEW;                                    // 0x0860 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0868 (size: 0x8)
    class UPointLightComponent* PointLight_wand;                                      // 0x0870 (size: 0x8)
    class UParticleSystemComponent* WandSparkles;                                     // 0x0878 (size: 0x8)
    class UFalconEnemyStateComponent* State_HiddenIGC;                                // 0x0880 (size: 0x8)
    class UFalconEnemyStateComponent* State_DisappearIGC;                             // 0x0888 (size: 0x8)
    class USceneComponent* Wand_End;                                                  // 0x0890 (size: 0x8)
    class UStaticMeshComponent* Wand;                                                 // 0x0898 (size: 0x8)
    class UFalconEnemyStateComponent* State_NPC;                                      // 0x08A0 (size: 0x8)
    class UFalconEnemyComponent* FalconEnemy;                                         // 0x08A8 (size: 0x8)
    class UFalconEnemyStateComponent* State_ZapDone;                                  // 0x08B0 (size: 0x8)
    class UFalconEnemyStateComponent* State_Disappear;                                // 0x08B8 (size: 0x8)
    class UFalconEnemyStateComponent* State_TurnTo;                                   // 0x08C0 (size: 0x8)
    class UFalconEnemyStateComponent* State_Wait;                                     // 0x08C8 (size: 0x8)
    class UFalconEnemyStateComponent* State_PromptVisible;                            // 0x08D0 (size: 0x8)
    class UFalconEnemyStateComponent* State_Zap;                                      // 0x08D8 (size: 0x8)
    class UFalconEnemyStateComponent* State_Alert;                                    // 0x08E0 (size: 0x8)
    class UFalconEnemyStateComponent* State_Appear;                                   // 0x08E8 (size: 0x8)
    class UFalconEnemyStateComponent* State_Hidden;                                   // 0x08F0 (size: 0x8)
    class UFalconEnemyStateComponent* State_Inactive;                                 // 0x08F8 (size: 0x8)
    class ACollectable_Dragon_C* WatchActor;                                          // 0x0900 (size: 0x8)
    bool SaveState;                                                                   // 0x0908 (size: 0x1)
    bool NPC_Start;                                                                   // 0x0909 (size: 0x1)
    bool VFX_Trigger;                                                                 // 0x090A (size: 0x1)
    class ASaveFairy_CheckPoint_C* Checkpoint;                                        // 0x0910 (size: 0x8)
    FString LevelCheckpointRef;                                                       // 0x0918 (size: 0x10)
    FString CheckPointName;                                                           // 0x0928 (size: 0x10)
    bool IGCVersion;                                                                  // 0x0938 (size: 0x1)

    void UserConstructionScript();
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__State_Appear_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Hidden_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void BndEvt__State_Disappear_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Zap_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_DisappearIGC_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_HiddenIGC_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void ExecuteUbergraph_SaveFairy_Base(int32 EntryPoint);
}; // Size: 0x939

#endif
