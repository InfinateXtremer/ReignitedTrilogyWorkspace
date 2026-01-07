#ifndef UE4SS_SDK_CNS1127_MarcoTheBalloonist_HPP
#define UE4SS_SDK_CNS1127_MarcoTheBalloonist_HPP

class ACNS1127_MarcoTheBalloonist_C : public ABP_Base_Friendly_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    class UFalconEnemyStateComponent* State_Horror;                                   // 0x0908 (size: 0x8)
    class UFalconEnemyStateComponent* State_DoinkIdle;                                // 0x0910 (size: 0x8)
    class UFalconEnemyStateComponent* State_Doink;                                    // 0x0918 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0920 (size: 0x8)
    bool collected;                                                                   // 0x0928 (size: 0x1)
    class AActor* SelectorActor;                                                      // 0x0930 (size: 0x8)
    int32 SelectorIndex_SpokenOnce;                                                   // 0x0938 (size: 0x4)
    int32 SelectorIndex_ReturnVisit;                                                  // 0x093C (size: 0x4)
    int32 SelectorIndex_Unlocked;                                                     // 0x0940 (size: 0x4)
    int32 SelectorIndex;                                                              // 0x0944 (size: 0x4)
    bool FirstVisit;                                                                  // 0x0948 (size: 0x1)
    float SaveFloat;                                                                  // 0x094C (size: 0x4)
    class AActor* GoalNotMetIGC;                                                      // 0x0950 (size: 0x8)
    FString LevelPath;                                                                // 0x0958 (size: 0x10)
    EInventoryType GoalType;                                                          // 0x0968 (size: 0x1)
    int32 GoalLocal;                                                                  // 0x096C (size: 0x4)
    int32 GoalValue;                                                                  // 0x0970 (size: 0x4)
    bool Revisitor;                                                                   // 0x0974 (size: 0x1)
    bool Unlocked;                                                                    // 0x0975 (size: 0x1)

    void UserConstructionScript();
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
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void DialogueControl(bool Start, FString DebugString, class AActor* TalkTarget, class UAnimSequence* VOLipSyncAnim);
    void saveData(float SaveVal);
    void UpdateIGCValues();
    void PlayerDied(class AActor* Actor, const FGameplayEventData Payload);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void SelectorSetup();
    void ExecuteUbergraph_CNS1127_MarcoTheBalloonist(int32 EntryPoint);
}; // Size: 0x976

#endif
