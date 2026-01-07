#ifndef UE4SS_SDK_BP_SpyroDamageWatcher_Blueprint_208_HPP
#define UE4SS_SDK_BP_SpyroDamageWatcher_Blueprint_208_HPP

class ABP_SpyroDamageWatcher_Blueprint_208_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UAC_FalconSaveCollectedPerm_C* AC_FalconSaveCollectedPerm;                  // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot1;                                         // 0x0328 (size: 0x8)
    int32 SpyroHit;                                                                   // 0x0330 (size: 0x4)
    class AActor* Boss;                                                               // 0x0338 (size: 0x8)

    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void MissionAlert(class AActor* Actor, int32 Value);
    void SpyroTookDamage(class AActor* Actor, const FGameplayEventData Payload);
    void PlayerReady();
    void ExecuteUbergraph_BP_SpyroDamageWatcher_Blueprint_208(int32 EntryPoint);
}; // Size: 0x340

#endif
