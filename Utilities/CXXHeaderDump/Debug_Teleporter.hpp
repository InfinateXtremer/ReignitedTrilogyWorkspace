#ifndef UE4SS_SDK_Debug_Teleporter_HPP
#define UE4SS_SDK_Debug_Teleporter_HPP

class ADebug_Teleporter_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0320 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0328 (size: 0x8)
    class UStaticMeshComponent* Cylinder;                                             // 0x0330 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0338 (size: 0x8)
    class AActor* TargetLoc;                                                          // 0x0340 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_Debug_Teleporter(int32 EntryPoint);
}; // Size: 0x348

#endif
