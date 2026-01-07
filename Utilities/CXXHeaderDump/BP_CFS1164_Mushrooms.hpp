#ifndef UE4SS_SDK_BP_CFS1164_Mushrooms_HPP
#define UE4SS_SDK_BP_CFS1164_Mushrooms_HPP

class ABP_CFS1164_Mushrooms_C : public ABP_Base_Fodder_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0AF8 (size: 0x8)
    class UFalconEnemyStateComponent* State_Stare;                                    // 0x0B00 (size: 0x8)

    void UserConstructionScript();
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
    void SetIdleStartOffset(float OffsetPercent);
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
    void ExecuteUbergraph_BP_CFS1164_Mushrooms(int32 EntryPoint);
}; // Size: 0xB08

#endif
