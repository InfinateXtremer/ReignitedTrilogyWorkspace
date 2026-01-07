#ifndef UE4SS_SDK_BP_LS124_Achievement_GemsInTheRough_HPP
#define UE4SS_SDK_BP_LS124_Achievement_GemsInTheRough_HPP

class ABP_LS124_Achievement_GemsInTheRough_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)

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
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_LS124_Achievement_GemsInTheRough(int32 EntryPoint);
}; // Size: 0x328

#endif
