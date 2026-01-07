#ifndef UE4SS_SDK_BP_S2_TreasureChest_UnderwaterVase_HPP
#define UE4SS_SDK_BP_S2_TreasureChest_UnderwaterVase_HPP

class ABP_S2_TreasureChest_UnderwaterVase_C : public ABP_TreasureChest_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0620 (size: 0x8)
    class UDestructibleComponent* DestructibleUnderwater;                             // 0x0628 (size: 0x8)
    FRotator goalRotation;                                                            // 0x0630 (size: 0xC)
    bool startsUnderwater?;                                                           // 0x063C (size: 0x1)
    class UMaterialInstanceDynamic* VaseMat;                                          // 0x0640 (size: 0x8)

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
    void BndEvt__State_Default_K2Node_ComponentBoundEvent_0_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void MissionAlert(class AActor* Actor, int32 Value);
    void Treasure Chest - Underwater Vase - Stop Spinning();
    void ExecuteUbergraph_BP_S2_TreasureChest_UnderwaterVase(int32 EntryPoint);
}; // Size: 0x648

#endif
