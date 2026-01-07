#ifndef UE4SS_SDK_BP_205_WhirlwindSpawner_HPP
#define UE4SS_SDK_BP_205_WhirlwindSpawner_HPP

class ABP_205_WhirlwindSpawner_C : public ATriggerBox
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)
    class UAC_FalconSaveCollectedLocal_C* AC_FalconSaveCollectedLocal;                // 0x0328 (size: 0x8)
    class AActor* WhirlwindRef;                                                       // 0x0330 (size: 0x8)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void ActivateMechanic(class AActor* RequestingActor, int32 Value);
    void DeactivateMechanic(class AActor* RequestingActor, int32 Value);
    void BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ExecuteUbergraph_BP_205_WhirlwindSpawner(int32 EntryPoint);
}; // Size: 0x338

#endif
