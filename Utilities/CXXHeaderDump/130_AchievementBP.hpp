#ifndef UE4SS_SDK_130_AchievementBP_HPP
#define UE4SS_SDK_130_AchievementBP_HPP

class A130_AchievementBP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0320 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0328 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0330 (size: 0x8)
    TArray<class ABP_CES1067_FemaleNightmareBeast_C*> Beasts;                         // 0x0338 (size: 0x10)
    bool Active;                                                                      // 0x0348 (size: 0x1)
    int32 DeadCheck;                                                                  // 0x034C (size: 0x4)
    TArray<FName> StateNames;                                                         // 0x0350 (size: 0x10)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Check();
    void ExecuteUbergraph_130_AchievementBP(int32 EntryPoint);
}; // Size: 0x360

#endif
