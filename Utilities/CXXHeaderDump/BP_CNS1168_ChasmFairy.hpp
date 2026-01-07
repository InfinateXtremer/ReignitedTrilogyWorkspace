#ifndef UE4SS_SDK_BP_CNS1168_ChasmFairy_HPP
#define UE4SS_SDK_BP_CNS1168_ChasmFairy_HPP

class ABP_CNS1168_ChasmFairy_C : public ABP_Base_NPC_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0858 (size: 0x8)
    class UFalconEnemyStateComponent* State_Chasm_DropOffSpyro;                       // 0x0860 (size: 0x8)
    class UFalconEnemyStateComponent* State_Chasm_PickUpSpyro;                        // 0x0868 (size: 0x8)
    class UFalconEnemyStateComponent* State_Chasm_ControlledMove;                     // 0x0870 (size: 0x8)
    class UFalconEnemyStateComponent* State_DisappearCP;                              // 0x0878 (size: 0x8)
    class UFalconEnemyStateComponent* State_ZapCP;                                    // 0x0880 (size: 0x8)
    class UFalconEnemyStateComponent* State_AppearCP;                                 // 0x0888 (size: 0x8)
    class UFalconEnemyStateComponent* State_HiddenCP;                                 // 0x0890 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0898 (size: 0x8)
    class UPointLightComponent* PointLight_wand;                                      // 0x08A0 (size: 0x8)
    class UParticleSystemComponent* FairyGlow;                                        // 0x08A8 (size: 0x8)
    class UParticleSystemComponent* WandSparkles;                                     // 0x08B0 (size: 0x8)
    class UFalconEnemyStateComponent* State_HiddenIGC;                                // 0x08B8 (size: 0x8)
    class UFalconEnemyStateComponent* State_DisappearIGC;                             // 0x08C0 (size: 0x8)
    class USceneComponent* Wand_End;                                                  // 0x08C8 (size: 0x8)
    class UStaticMeshComponent* Wand;                                                 // 0x08D0 (size: 0x8)
    class UFalconEnemyStateComponent* State_NPC;                                      // 0x08D8 (size: 0x8)
    class UFalconEnemyComponent* FalconEnemy;                                         // 0x08E0 (size: 0x8)
    class UFalconEnemyStateComponent* State_ZapDone;                                  // 0x08E8 (size: 0x8)
    class UFalconEnemyStateComponent* State_Disappear;                                // 0x08F0 (size: 0x8)
    class UFalconEnemyStateComponent* State_TurnTo;                                   // 0x08F8 (size: 0x8)
    class UFalconEnemyStateComponent* State_Wait;                                     // 0x0900 (size: 0x8)
    class UFalconEnemyStateComponent* State_PromptVisible;                            // 0x0908 (size: 0x8)
    class UFalconEnemyStateComponent* State_Zap;                                      // 0x0910 (size: 0x8)
    class UFalconEnemyStateComponent* State_Alert;                                    // 0x0918 (size: 0x8)
    class UFalconEnemyStateComponent* State_Appear;                                   // 0x0920 (size: 0x8)
    class UFalconEnemyStateComponent* State_Hidden;                                   // 0x0928 (size: 0x8)
    class UFalconEnemyStateComponent* State_Inactive;                                 // 0x0930 (size: 0x8)
    class ACollectable_Dragon_C* WatchActor;                                          // 0x0938 (size: 0x8)
    bool SaveState;                                                                   // 0x0940 (size: 0x1)
    bool NPC_Start;                                                                   // 0x0941 (size: 0x1)
    bool VFX_Trigger;                                                                 // 0x0942 (size: 0x1)
    class ASaveFairy_CheckPoint_C* Checkpoint;                                        // 0x0948 (size: 0x8)
    FString LevelCheckpointRef;                                                       // 0x0950 (size: 0x10)
    FString CheckPointName;                                                           // 0x0960 (size: 0x10)
    int32 SquadID;                                                                    // 0x0970 (size: 0x4)
    class UParticleSystem* VFX_UniqueFairyFX;                                         // 0x0978 (size: 0x8)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void LS115 - Trigger Chasm Fairy State(int32 State ID);
    void MissionRestore();
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionSuspend(bool Suspend);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionSetup(bool Active);
    void MissionReset(class AActor* RequestActor);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionAlert(class AActor* Actor, int32 Value);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_CNS1168_ChasmFairy(int32 EntryPoint);
}; // Size: 0x980

#endif
