#ifndef UE4SS_SDK_BP_Metalhead_RollingEnemyKillPlane_HPP
#define UE4SS_SDK_BP_Metalhead_RollingEnemyKillPlane_HPP

class ABP_Metalhead_RollingEnemyKillPlane_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    class AActor* Metalhead_Reference;                                                // 0x0330 (size: 0x8)
    bool DealChargeDamage?;                                                           // 0x0338 (size: 0x1)

    void UserConstructionScript();
    void BndEvt__Cube_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_Metalhead_RollingEnemyKillPlane(int32 EntryPoint);
}; // Size: 0x339

#endif
