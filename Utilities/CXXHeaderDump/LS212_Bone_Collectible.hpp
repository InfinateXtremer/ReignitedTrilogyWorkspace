#ifndef UE4SS_SDK_LS212_Bone_Collectible_HPP
#define UE4SS_SDK_LS212_Bone_Collectible_HPP

class ALS212_Bone_Collectible_C : public AMission_Item_Base_StateMachine_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UBP_StateComponent_C* BP_Hidden;                                            // 0x0488 (size: 0x8)
    class UBP_StateComponent_C* State_Death2;                                         // 0x0490 (size: 0x8)
    class UAC_FalconSaveCollectedLocal_C* AC_FalconSaveCollectedLocal;                // 0x0498 (size: 0x8)
    class ABP_CES2030_LavaToad_C* MyToad;                                             // 0x04A0 (size: 0x8)
    bool collected;                                                                   // 0x04A8 (size: 0x1)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void Player Ready();
    void BndEvt__State_Death2_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__BP_Hidden_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__BP_Hidden_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__State_Default_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_LS212_Bone_Collectible(int32 EntryPoint);
}; // Size: 0x4A9

#endif
