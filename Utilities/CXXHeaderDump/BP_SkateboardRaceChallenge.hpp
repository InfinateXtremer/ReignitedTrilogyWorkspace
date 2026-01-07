#ifndef UE4SS_SDK_BP_SkateboardRaceChallenge_HPP
#define UE4SS_SDK_BP_SkateboardRaceChallenge_HPP

class ABP_SkateboardRaceChallenge_C : public ASkateboardRaceChallenge
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05F8 (size: 0x8)
    class UUI_Flight_LapsPlace_C* Flight Laps Place Widget;                           // 0x0600 (size: 0x8)
    class UUI_HUD_Timer_C* hud timer widget;                                          // 0x0608 (size: 0x8)
    class UUI_SkateBoostBar_C* Skate Boost Bar Widget;                                // 0x0610 (size: 0x8)
    class ABP_SkateboardTriggerVolume_C* SkateboardTriggerVolume;                     // 0x0618 (size: 0x8)
    class AActor* PlayerStartLocation;                                                // 0x0620 (size: 0x8)
    class ABP_S3FallToDeath_C* FallToDeathVolume;                                     // 0x0628 (size: 0x8)
    TArray<class ASkateRace_Checkpoint_Trigger_C*> RaceCheckpoints;                   // 0x0630 (size: 0x10)
    bool CurrentlyResetting;                                                          // 0x0640 (size: 0x1)
    TArray<class ABP_CES3056_GiantCrab_SkateRace_C*> LS320 Raceway Crabs;             // 0x0648 (size: 0x10)
    int32 NumCrabsLeft;                                                               // 0x0658 (size: 0x4)
    int32 NumCrabsToKill;                                                             // 0x065C (size: 0x4)
    FName BoostBarIcon;                                                               // 0x0660 (size: 0x8)
    class ABP_Transporter_Generic_C* ExitTransporter;                                 // 0x0668 (size: 0x8)
    FTimerHandle RespawnCameraFadeOutTimer;                                           // 0x0670 (size: 0x8)
    FTimerHandle SkateCrashRespawnDelayTimer;                                         // 0x0678 (size: 0x8)
    FTimerHandle RespawnCameraFadeInStartTimer;                                       // 0x0680 (size: 0x8)
    FTimerHandle RespawnCameraFadeInFinishedTimer;                                    // 0x0688 (size: 0x8)
    class ABP_HarmfulTerrain_C* IgnoreHarmfulTerrain;                                 // 0x0690 (size: 0x8)
    TArray<class AStaticMeshActor*> CollisionToTurnON;                                // 0x0698 (size: 0x10)
    TArray<class AStaticMeshActor*> CollisionToTurnOFF;                               // 0x06A8 (size: 0x10)

    void CalcPlayerRaceResetTransform(FTransform& RetTransform);
    void UserConstructionScript();
    void OnRaceStart();
    void OnRaceEnd();
    void OnRaceUpdate(int32 curLap, float curTime, int32 curPlace, float curTurboPercent);
    void OnDamageTaken(class AActor* Actor, const FGameplayEventData Payload);
    void ResetPlayerToTrack();
    void OnFallToDeath();
    void OnAbilityAction(FGameplayTag InputAction, const FGameplayEventData Payload);
    void OnRacewayCrabKilled();
    void ClearSkateTurboState();
    void RestoreSkateTurboState();
    void OnExitTransporterExitted(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void UnBoundFromTransporter(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void RespawnCameraFadeOutFinished();
    void SkateCrashRespawnDelayFinished();
    void RespawnCameraFadeInStart();
    void RespawnCameraFadeInFinished();
    void ExecuteUbergraph_BP_SkateboardRaceChallenge(int32 EntryPoint);
}; // Size: 0x6B8

#endif
