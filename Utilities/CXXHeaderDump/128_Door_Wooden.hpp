#ifndef UE4SS_SDK_128_Door_Wooden_HPP
#define UE4SS_SDK_128_Door_Wooden_HPP

class A128_Door_Wooden_C : public AMission_Item_Base_StateMachine_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UAC_FalconSaveCollectedLocal_C* AC_FalconSaveCollectedLocal;                // 0x0488 (size: 0x8)
    class USceneComponent* HitLoc2;                                                   // 0x0490 (size: 0x8)
    class USceneComponent* HitLoc1;                                                   // 0x0498 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x04A0 (size: 0x8)
    class UBoxComponent* BoxCollision;                                                // 0x04A8 (size: 0x8)
    class UDestructibleComponent* Destructible;                                       // 0x04B0 (size: 0x8)
    class UBP_StateComponent_C* State_Destroy;                                        // 0x04B8 (size: 0x8)
    class UBP_DestructibleFade_C* BP_DestructibleFade;                                // 0x04C0 (size: 0x8)
    FVector Vector;                                                                   // 0x04C8 (size: 0xC)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void BndEvt__State: Death_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Destroy_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ExecuteUbergraph_128_Door_Wooden(int32 EntryPoint);
}; // Size: 0x4D4

#endif
