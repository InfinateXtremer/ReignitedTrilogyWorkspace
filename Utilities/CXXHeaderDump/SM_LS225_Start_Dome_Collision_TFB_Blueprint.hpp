#ifndef UE4SS_SDK_SM_LS225_Start_Dome_Collision_TFB_Blueprint_HPP
#define UE4SS_SDK_SM_LS225_Start_Dome_Collision_TFB_Blueprint_HPP

class ASM_LS225_Start_Dome_Collision_TFB_Blueprint_C : public AStaticMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0328 (size: 0x8)
    class USceneComponent* Position;                                                  // 0x0330 (size: 0x8)
    class ATargetPoint* DamagePosition;                                               // 0x0338 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_SM_LS225_Start_Dome_Collision_TFB_Blueprint(int32 EntryPoint);
}; // Size: 0x340

#endif
