#ifndef UE4SS_SDK_BP_LS101_Achievement_HopSkipJump_HPP
#define UE4SS_SDK_BP_LS101_Achievement_HopSkipJump_HPP

class ABP_LS101_Achievement_HopSkipJump_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)

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
    void achievement status callback(FName achievement id, bool found, float Progress);
    void achievement details callback(FAchievementStruct achievement def, bool found, float Progress);
    void MissionAlert(class AActor* Actor, int32 Value);
    void ExecuteUbergraph_BP_LS101_Achievement_HopSkipJump(int32 EntryPoint);
}; // Size: 0x328

#endif
