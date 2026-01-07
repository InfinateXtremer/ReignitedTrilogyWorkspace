#ifndef UE4SS_SDK_LS102_WellWhirlwindController_HPP
#define UE4SS_SDK_LS102_WellWhirlwindController_HPP

class ALS102_WellWhirlwindController_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x0320 (size: 0x8)
    class UCapsuleComponent* Collision_Bottom;                                        // 0x0328 (size: 0x8)
    class UCapsuleComponent* Collision_Top;                                           // 0x0330 (size: 0x8)
    class ABP_Whirlwind_C* whirlwind ref;                                             // 0x0338 (size: 0x8)
    bool IsActive;                                                                    // 0x0340 (size: 0x1)

    void UserConstructionScript();
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__Collision_Bottom_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_LS102_WellWhirlwindController(int32 EntryPoint);
}; // Size: 0x341

#endif
