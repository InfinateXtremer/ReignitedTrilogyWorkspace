#ifndef UE4SS_SDK_BP_SteamVent_HPP
#define UE4SS_SDK_BP_SteamVent_HPP

class ABP_SteamVent_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot1;                                         // 0x0328 (size: 0x8)
    float Timeline_0_NewTrack_1_67DC030D41F460857D0C1D8AD147BD7C;                     // 0x0330 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_67DC030D41F460857D0C1D8AD147BD7C; // 0x0334 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0338 (size: 0x8)
    class AActor* MySteamLavaToad;                                                    // 0x0340 (size: 0x8)
    float StartingPos;                                                                // 0x0348 (size: 0x4)
    class UParticleSystemComponent* Steam_VFX;                                        // 0x0350 (size: 0x8)
    FName WatchState;                                                                 // 0x0358 (size: 0x8)

    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__DeathState_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void Player Ready();
    void ItemStateChange(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_SteamVent(int32 EntryPoint);
}; // Size: 0x360

#endif
