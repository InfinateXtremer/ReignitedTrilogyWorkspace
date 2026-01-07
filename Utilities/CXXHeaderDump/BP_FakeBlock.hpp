#ifndef UE4SS_SDK_BP_FakeBlock_HPP
#define UE4SS_SDK_BP_FakeBlock_HPP

class ABP_FakeBlock_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UBP_StateComponent_C* State: DownLit;                                       // 0x0450 (size: 0x8)
    class UBP_StateComponent_C* State: Up;                                            // 0x0458 (size: 0x8)
    class UStaticMeshComponent* Star;                                                 // 0x0460 (size: 0x8)
    class UStaticMeshComponent* bLock;                                                // 0x0468 (size: 0x8)
    class UStaticMeshComponent* Base;                                                 // 0x0470 (size: 0x8)
    float Timeline_0_0_UP_BDBC1F9A48B1929367DC18BEEABDD470;                           // 0x0478 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0_0__Direction_BDBC1F9A48B1929367DC18BEEABDD470; // 0x047C (size: 0x1)
    class UTimelineComponent* Timeline_0_0;                                           // 0x0480 (size: 0x8)
    float Timeline_1_Down_023BB22245F992706924E1B1A947CFD5;                           // 0x0488 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_023BB22245F992706924E1B1A947CFD5; // 0x048C (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0490 (size: 0x8)
    float PositionDown;                                                               // 0x0498 (size: 0x4)
    float PositionUp;                                                                 // 0x049C (size: 0x4)
    bool Active;                                                                      // 0x04A0 (size: 0x1)
    class UMaterialInstanceDynamic* Material;                                         // 0x04A8 (size: 0x8)
    class AActor* Controller;                                                         // 0x04B0 (size: 0x8)
    bool Moving;                                                                      // 0x04B8 (size: 0x1)
    bool done;                                                                        // 0x04B9 (size: 0x1)
    bool GameOn;                                                                      // 0x04BA (size: 0x1)
    class ATargetPoint* TargetPoint;                                                  // 0x04C0 (size: 0x8)
    class AActor* Player;                                                             // 0x04C8 (size: 0x8)
    class AActor* IGCSelector;                                                        // 0x04D0 (size: 0x8)
    bool BlockIsUp;                                                                   // 0x04D8 (size: 0x1)

    void UserConstructionScript();
    void Timeline_0_0__FinishedFunc();
    void Timeline_0_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void MissionRestore();
    void ReceiveBeginPlay();
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionSuspend(bool Suspend);
    void MissionSetup(bool Active);
    void MissionReset(class AActor* RequestActor);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void BlockDown();
    void BlockUp();
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void ExecuteUbergraph_BP_FakeBlock(int32 EntryPoint);
}; // Size: 0x4D9

#endif
