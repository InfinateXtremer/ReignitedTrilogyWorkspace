#ifndef UE4SS_SDK_Trolly_Fail_Barrel_HPP
#define UE4SS_SDK_Trolly_Fail_Barrel_HPP

class ATrolly_Fail_Barrel_C : public ATrolly_Fail_Boxes_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)

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
    void MissionAlert(class AActor* Actor, int32 Value);
    void ExecuteUbergraph_Trolly_Fail_Barrel(int32 EntryPoint);
}; // Size: 0x348

#endif
