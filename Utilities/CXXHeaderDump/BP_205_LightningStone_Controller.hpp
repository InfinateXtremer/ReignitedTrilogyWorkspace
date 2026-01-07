#ifndef UE4SS_SDK_BP_205_LightningStone_Controller_HPP
#define UE4SS_SDK_BP_205_LightningStone_Controller_HPP

class ABP_205_LightningStone_Controller_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    TArray<class ABP_205_OrbTargets_C*> Platforms;                                    // 0x0450 (size: 0x10)
    int32 total_OrbsPlaced;                                                           // 0x0460 (size: 0x4)
    int32 IGC_ID;                                                                     // 0x0464 (size: 0x4)
    class AActor* IGC_Selector;                                                       // 0x0468 (size: 0x8)
    int32 total_ThievesDead;                                                          // 0x0470 (size: 0x4)
    int32 total_TargetsActive;                                                        // 0x0474 (size: 0x4)
    int32 total_AvailableOrbs;                                                        // 0x0478 (size: 0x4)
    TArray<class ATargetPoint*> extraspawn_points;                                    // 0x0480 (size: 0x10)
    bool everythingComplete?;                                                         // 0x0490 (size: 0x1)
    int32 extraCount;                                                                 // 0x0494 (size: 0x4)

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
    void 205 - Lightning Stone Update(int32 Number);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_205_LightningStone_Controller(int32 EntryPoint);
}; // Size: 0x498

#endif
