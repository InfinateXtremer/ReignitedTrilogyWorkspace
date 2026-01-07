#ifndef UE4SS_SDK_HulaController_HPP
#define UE4SS_SDK_HulaController_HPP

class AHulaController_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0450 (size: 0x8)
    TArray<class ACNS2110_HulaGirl_C*> HulaGirls;                                     // 0x0458 (size: 0x10)
    class AActor* IGC;                                                                // 0x0468 (size: 0x8)
    class ABP_CNS2012_UmbrellaIdol_C* UmbrellaIdolRef;                                // 0x0470 (size: 0x8)
    class AActor* Chain1;                                                             // 0x0478 (size: 0x8)
    class AActor* Chain2;                                                             // 0x0480 (size: 0x8)

    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void MissionAlert(class AActor* Actor, int32 Value);
    void StateWatcher(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void MissionEnd(bool Success, bool LevelEnd);
    void ExecuteUbergraph_HulaController(int32 EntryPoint);
}; // Size: 0x488

#endif
