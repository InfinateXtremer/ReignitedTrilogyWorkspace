#ifndef UE4SS_SDK_BP_LS212_Cactus_Skinny_HPP
#define UE4SS_SDK_BP_LS212_Cactus_Skinny_HPP

class ABP_LS212_Cactus_Skinny_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UAC_FalconSaveCollectedLocal_C* AC_FalconSaveCollectedLocal;                // 0x0450 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0458 (size: 0x8)
    class UDestructibleComponent* Destructible;                                       // 0x0460 (size: 0x8)
    class UBP_DestructibleFade_C* BP_DestructibleFade;                                // 0x0468 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Destroyed;                     // 0x0470 (size: 0x8)
    class UCapsuleComponent* Capsule1;                                                // 0x0478 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0480 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Bump;                          // 0x0488 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FireHit;                       // 0x0490 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x0498 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x04A0 (size: 0x8)
    class AActor* SkillPointWatcher;                                                  // 0x04A8 (size: 0x8)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void BndEvt__FalconEnemyState_Destroyed_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_FireHit_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_Bump_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ExecuteUbergraph_BP_LS212_Cactus_Skinny(int32 EntryPoint);
}; // Size: 0x4B0

#endif
