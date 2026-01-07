#ifndef UE4SS_SDK_BP_Elora_Teleport_Manager_JB_HPP
#define UE4SS_SDK_BP_Elora_Teleport_Manager_JB_HPP

class ABP_Elora_Teleport_Manager_JB_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0320 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0328 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0330 (size: 0x8)
    class AActor* CrystalGlacier;                                                     // 0x0338 (size: 0x8)
    class AActor* SkelosBadlands;                                                     // 0x0340 (size: 0x8)
    class AActor* Zephyr;                                                             // 0x0348 (size: 0x8)
    class AActor* BreezeHarbor;                                                       // 0x0350 (size: 0x8)
    class AActor* Scorch;                                                             // 0x0358 (size: 0x8)
    class AActor* Fracture_Hills;                                                     // 0x0360 (size: 0x8)
    class AActor* Magma_Cone;                                                         // 0x0368 (size: 0x8)
    class AActor* Shady_Oasis;                                                        // 0x0370 (size: 0x8)
    class AActor* Climb;                                                              // 0x0378 (size: 0x8)
    class AActor* ProfessorDoor;                                                      // 0x0380 (size: 0x8)
    class AActor* MoneybagsBridge;                                                    // 0x0388 (size: 0x8)
    FTransform TargetTransform;                                                       // 0x0390 (size: 0x30)
    bool Learned_To_Climb?;                                                           // 0x03C0 (size: 0x1)
    bool Door_Raised?;                                                                // 0x03C1 (size: 0x1)
    bool Bridge_Extended?;                                                            // 0x03C2 (size: 0x1)
    class AActor* Elora;                                                              // 0x03C8 (size: 0x8)
    class AActor* Selector_1;                                                         // 0x03D0 (size: 0x8)
    class AActor* Selector_2;                                                         // 0x03D8 (size: 0x8)
    class ABP_LS210_Bridge_01_C* bridge;                                              // 0x03E0 (size: 0x8)
    class ABP_LS210_Door_02_C* Door;                                                  // 0x03E8 (size: 0x8)
    class ABP_Whirlwind_C* Whirlwind;                                                 // 0x03F0 (size: 0x8)
    bool Whirlwind_Activated_?;                                                       // 0x03F8 (size: 0x1)
    bool Destroy_Self;                                                                // 0x03F9 (size: 0x1)
    int32 OrbCount;                                                                   // 0x03FC (size: 0x4)
    class AActor* Elora_2;                                                            // 0x0400 (size: 0x8)
    bool Teleported;                                                                  // 0x0408 (size: 0x1)
    bool DidBeginningCheck;                                                           // 0x0409 (size: 0x1)

    void UserConstructionScript();
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void MissionAlert(class AActor* Actor, int32 Value);
    void ReceiveBeginPlay();
    void TeleportPlayer(FVector Loc, FRotator Rot);
    void StateCheck();
    void PlayerReady();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_Elora_Teleport_Manager_JB(int32 EntryPoint);
}; // Size: 0x40A

#endif
