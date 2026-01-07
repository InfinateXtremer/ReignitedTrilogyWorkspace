#ifndef UE4SS_SDK_LS212_BoneWall_HPP
#define UE4SS_SDK_LS212_BoneWall_HPP

class ALS212_BoneWall_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UAC_FalconSaveCollectedLocal_C* AC_FalconSaveCollectedLocal;                // 0x0450 (size: 0x8)
    class UParticleSystemComponent* PS_LS212_VFX_BoneWall_A;                          // 0x0458 (size: 0x8)
    class UParticleSystemComponent* PS_LS212_VFX_BoneWall_B;                          // 0x0460 (size: 0x8)
    class UBP_StateComponent_C* State_Damage3;                                        // 0x0468 (size: 0x8)
    class UBP_DestructibleFade_C* BP_DestructibleFade;                                // 0x0470 (size: 0x8)
    class UDestructibleComponent* Damage2_DM;                                         // 0x0478 (size: 0x8)
    class UStaticMeshComponent* Damage1;                                              // 0x0480 (size: 0x8)
    class UBP_StateComponent_C* State_Damage2;                                        // 0x0488 (size: 0x8)
    class UBP_StateComponent_C* State_Damage1;                                        // 0x0490 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0498 (size: 0x8)
    class UStaticMeshComponent* Intact;                                               // 0x04A0 (size: 0x8)
    bool Destroyed;                                                                   // 0x04A8 (size: 0x1)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__State_Damage1_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Damage2_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Death_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Damage3_K2Node_ComponentBoundEvent_18_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void Player Ready();
    void ExecuteUbergraph_LS212_BoneWall(int32 EntryPoint);
}; // Size: 0x4A9

#endif
