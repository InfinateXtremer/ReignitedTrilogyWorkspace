#ifndef UE4SS_SDK_BP_LizardReset_HPP
#define UE4SS_SDK_BP_LizardReset_HPP

class ABP_LizardReset_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot1;                                         // 0x0328 (size: 0x8)
    bool ImActive;                                                                    // 0x0330 (size: 0x1)
    class AActor* MissionMaster;                                                      // 0x0338 (size: 0x8)
    class AActor* Selector1;                                                          // 0x0340 (size: 0x8)
    class AActor* Selector2;                                                          // 0x0348 (size: 0x8)
    class AActor* Lumpy2;                                                             // 0x0350 (size: 0x8)
    class AActor* Lumpy1;                                                             // 0x0358 (size: 0x8)
    class AActor* Trigger;                                                            // 0x0360 (size: 0x8)
    bool NewVar_0;                                                                    // 0x0368 (size: 0x1)
    class AActor* MM_1;                                                               // 0x0370 (size: 0x8)
    class AActor* MM_2;                                                               // 0x0378 (size: 0x8)
    int32 Selector2_IGC_Index;                                                        // 0x0380 (size: 0x4)
    bool Part2Active;                                                                 // 0x0384 (size: 0x1)
    int32 Selector1_IGC_Index;                                                        // 0x0388 (size: 0x4)

    void UserConstructionScript();
    void MissionAlert(class AActor* Actor, int32 Value);
    void ReceiveBeginPlay();
    void TriggerStart(class AActor* OverlappedActor, class AActor* OtherActor);
    void Trigger End(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void MissionSuspend(bool Suspend);
    void MissionSetup(bool Active);
    void MissionReset(class AActor* RequestActor);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionRestore();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void ExecuteUbergraph_BP_LizardReset(int32 EntryPoint);
}; // Size: 0x38C

#endif
