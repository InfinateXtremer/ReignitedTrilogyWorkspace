#ifndef UE4SS_SDK_BP_208_CBS2003_Ripto_HPP
#define UE4SS_SDK_BP_208_CBS2003_Ripto_HPP

class ABP_208_CBS2003_Ripto_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UFalconEnemyStateComponent* State_Surprised;                                // 0x09F8 (size: 0x8)
    class UAC_FalconSaveParamLocal_C* AC_FalconSaveParamLocal;                        // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* State_Celebrate;                                // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* State_Idle;                                     // 0x0A10 (size: 0x8)
    int32 Int_OrbsTouched;                                                            // 0x0A18 (size: 0x4)
    FRotator OriginalRotation;                                                        // 0x0A1C (size: 0xC)
    class AActor* ClosestOrb;                                                         // 0x0A28 (size: 0x8)
    int32 Temp_OrbAttackValue;                                                        // 0x0A30 (size: 0x4)
    int32 ActualOrbAttackValue;                                                       // 0x0A34 (size: 0x4)
    class AActor* OrbDropper;                                                         // 0x0A38 (size: 0x8)
    class AController* NewVar_0;                                                      // 0x0A40 (size: 0x8)
    class APawn* NewVar_1;                                                            // 0x0A48 (size: 0x8)
    bool PlayedVO;                                                                    // 0x0A50 (size: 0x1)
    bool CrushDead;                                                                   // 0x0A51 (size: 0x1)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void On Player Damage(class AActor* Actor, const FGameplayEventData Payload);
    void PlayerReady();
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionRestore();
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionSuspend(bool Suspend);
    void MissionSetup(bool Active);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReset(class AActor* RequestActor);
    void ReturnRiptoIdle(int32 EventID, EWwiseEvent WWiseEvent, class UAkComponent* GameObjectID);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionAlert(class AActor* Actor, int32 Value);
    void ExecuteUbergraph_BP_208_CBS2003_Ripto(int32 EntryPoint);
}; // Size: 0xA52

#endif
