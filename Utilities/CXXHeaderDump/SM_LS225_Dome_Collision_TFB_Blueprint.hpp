#ifndef UE4SS_SDK_SM_LS225_Dome_Collision_TFB_Blueprint_HPP
#define UE4SS_SDK_SM_LS225_Dome_Collision_TFB_Blueprint_HPP

class ASM_LS225_Dome_Collision_TFB_Blueprint_C : public AStaticMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0328 (size: 0x8)
    class AActor* BorderActor;                                                        // 0x0330 (size: 0x8)
    class AActor* CenterActor;                                                        // 0x0338 (size: 0x8)
    bool InBorderActor;                                                               // 0x0340 (size: 0x1)
    FTransform BorderTransform;                                                       // 0x0350 (size: 0x30)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
    void EndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
    void ExecuteUbergraph_SM_LS225_Dome_Collision_TFB_Blueprint(int32 EntryPoint);
}; // Size: 0x380

#endif
