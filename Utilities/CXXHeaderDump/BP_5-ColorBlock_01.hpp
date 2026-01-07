#ifndef UE4SS_SDK_BP_5-ColorBlock_01_HPP
#define UE4SS_SDK_BP_5-ColorBlock_01_HPP

class ABP_5-ColorBlock_01_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UBP_StateComponent_C* State_Active;                                         // 0x0450 (size: 0x8)
    class UBP_StateComponent_C* State_DownLItWrong;                                   // 0x0458 (size: 0x8)
    class UStaticMeshComponent* Collision;                                            // 0x0460 (size: 0x8)
    class UBP_StateComponent_C* State: DownLit;                                       // 0x0468 (size: 0x8)
    class UBP_StateComponent_C* State: Up;                                            // 0x0470 (size: 0x8)
    class UStaticMeshComponent* Star;                                                 // 0x0478 (size: 0x8)
    class UStaticMeshComponent* bLock;                                                // 0x0480 (size: 0x8)
    class UStaticMeshComponent* Base;                                                 // 0x0488 (size: 0x8)
    float Timeline_0_0_UP_B619AB734E40A8C7071D04B0CDF29FB7;                           // 0x0490 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0_0__Direction_B619AB734E40A8C7071D04B0CDF29FB7; // 0x0494 (size: 0x1)
    class UTimelineComponent* Timeline_0_0;                                           // 0x0498 (size: 0x8)
    float Timeline_1_Down_42F31CAC474DC596CBB52786B96D9403;                           // 0x04A0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_42F31CAC474DC596CBB52786B96D9403; // 0x04A4 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x04A8 (size: 0x8)
    float PositionDown;                                                               // 0x04B0 (size: 0x4)
    float PositionUp;                                                                 // 0x04B4 (size: 0x4)
    bool Active;                                                                      // 0x04B8 (size: 0x1)
    class UMaterialInstanceDynamic* Material;                                         // 0x04C0 (size: 0x8)
    class ABP_5-ColorBlock_Controller_C* Controller;                                  // 0x04C8 (size: 0x8)
    bool Moving;                                                                      // 0x04D0 (size: 0x1)
    bool Down;                                                                        // 0x04D1 (size: 0x1)
    bool GameOn;                                                                      // 0x04D2 (size: 0x1)
    class ATargetPoint* TargetPoint;                                                  // 0x04D8 (size: 0x8)
    FVector FailPoint;                                                                // 0x04E0 (size: 0xC)
    class AActor* Player;                                                             // 0x04F0 (size: 0x8)
    class AActor* IGCSelector;                                                        // 0x04F8 (size: 0x8)
    class AActor* MissionMaster;                                                      // 0x0500 (size: 0x8)
    class UParticleSystem* HitParticle;                                               // 0x0508 (size: 0x8)
    class AActor* FakeBlock;                                                          // 0x0510 (size: 0x8)
    bool FirstAltBlock;                                                               // 0x0518 (size: 0x1)

    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_0_0__FinishedFunc();
    void Timeline_0_0__UpdateFunc();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void ReceiveBeginPlay();
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionRestore();
    void MissionSuspend(bool Suspend);
    void MissionSetup(bool Active);
    void MissionReset(class AActor* RequestActor);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_5-ColorBlock_01(int32 EntryPoint);
}; // Size: 0x519

#endif
