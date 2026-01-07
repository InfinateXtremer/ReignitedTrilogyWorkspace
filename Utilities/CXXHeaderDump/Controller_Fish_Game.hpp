#ifndef UE4SS_SDK_Controller_Fish_Game_HPP
#define UE4SS_SDK_Controller_Fish_Game_HPP

class AController_Fish_Game_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UAC_FalconSaveCollectedLocal_C* AC_FalconSaveCollectedLocal;                // 0x0450 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0458 (size: 0x8)
    class UBoxComponent* Fish_Queue_Volume;                                           // 0x0460 (size: 0x8)
    TArray<class AActor*> Fish Queued;                                                // 0x0468 (size: 0x10)
    TArray<class AActor*> Temp Fish Set;                                              // 0x0478 (size: 0x10)
    int32 Current Score;                                                              // 0x0488 (size: 0x4)
    int32 Yellow Fish Index;                                                          // 0x048C (size: 0x4)
    TArray<class AActor*> Inactive Yellow Fish Temp;                                  // 0x0490 (size: 0x10)
    int32 Barf Counter;                                                               // 0x04A0 (size: 0x4)
    bool Game Active;                                                                 // 0x04A4 (size: 0x1)
    class ATriggerBox* temp_Activation_Volume;                                        // 0x04A8 (size: 0x8)
    int32 Old Current Score;                                                          // 0x04B0 (size: 0x4)
    TArray<class AActor*> Yellow Fish Check Set;                                      // 0x04B8 (size: 0x10)
    class ABP_CES2013_LargeHungryIdol_C* TikiRef;                                     // 0x04C8 (size: 0x8)
    class AActor* MissionMaster;                                                      // 0x04D0 (size: 0x8)
    bool Achievement_Ate_Red_Fish;                                                    // 0x04D8 (size: 0x1)
    class AActor* AchievementWatcher;                                                 // 0x04E0 (size: 0x8)
    bool Finished;                                                                    // 0x04E8 (size: 0x1)
    bool PlayerInWater;                                                               // 0x04E9 (size: 0x1)
    bool NewVar_0;                                                                    // 0x04EA (size: 0x1)
    class AActor* WaterCheckVolume;                                                   // 0x04F0 (size: 0x8)
    class AActor* IGC Selector 8Block;                                                // 0x04F8 (size: 0x8)
    class AActor* Foreman Bud 8BLock;                                                 // 0x0500 (size: 0x8)
    class AActor* IGC Selector Fishing;                                               // 0x0508 (size: 0x8)
    class AActor* Foreman Bud Fishing;                                                // 0x0510 (size: 0x8)
    class AActor* SaveManager;                                                        // 0x0518 (size: 0x8)
    class AActor* ColorBlockController;                                               // 0x0520 (size: 0x8)
    class AFish_Base_C* FirstFish;                                                    // 0x0528 (size: 0x8)
    class AActor* 8BlockController;                                                   // 0x0530 (size: 0x8)
    bool Barfing;                                                                     // 0x0538 (size: 0x1)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void Fish Launch Now();
    void ReceiveBeginPlay();
    void Yellow Fish Eaten(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void Blue Fish Eaten(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void Spawed Blue Fish Eaten(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void Red Fish Eaten(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void Fish Jump Active();
    void Barf Starting();
    void Barf Ending();
    void MissionStart(class AActor* MasterActor, int32 Value);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void Player Ready();
    void ReceiveTick(float DeltaSeconds);
    void In Water(class AActor* OverlappedActor, class AActor* OtherActor);
    void Not In Water(class AActor* OverlappedActor, class AActor* OtherActor);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void Special First Fish();
    void Close Gate();
    void Open Gate();
    void ExecuteUbergraph_Controller_Fish_Game(int32 EntryPoint);
}; // Size: 0x539

#endif
