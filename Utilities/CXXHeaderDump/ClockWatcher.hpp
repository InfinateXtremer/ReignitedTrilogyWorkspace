#ifndef UE4SS_SDK_ClockWatcher_HPP
#define UE4SS_SDK_ClockWatcher_HPP

class AClockWatcher_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    float Platform_2_NewTrack_0_C87E895B4F4794FA54FDE08545F91EE3;                     // 0x0330 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Platform_2__Direction_C87E895B4F4794FA54FDE08545F91EE3; // 0x0334 (size: 0x1)
    class UTimelineComponent* Platform 2;                                             // 0x0338 (size: 0x8)
    float Platform_1_NewTrack_0_1F83FEEC451AF342369B85B7ECF96F8C;                     // 0x0340 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Platform_1__Direction_1F83FEEC451AF342369B85B7ECF96F8C; // 0x0344 (size: 0x1)
    class UTimelineComponent* Platform 1;                                             // 0x0348 (size: 0x8)
    int32 Active;                                                                     // 0x0350 (size: 0x4)
    class AActor* ClockPlat1;                                                         // 0x0358 (size: 0x8)
    class AActor* ClockPlat2;                                                         // 0x0360 (size: 0x8)
    FVector Vector_Plat1;                                                             // 0x0368 (size: 0xC)
    FVector StartVector_Plat1;                                                        // 0x0374 (size: 0xC)
    FVector EndVector_Plat1;                                                          // 0x0380 (size: 0xC)
    FVector StartVector_Plat2;                                                        // 0x038C (size: 0xC)
    FVector EndVector_Plat2;                                                          // 0x0398 (size: 0xC)
    FVector Vector_Plat2;                                                             // 0x03A4 (size: 0xC)
    TArray<class AActor*> ActorRefs;                                                  // 0x03B0 (size: 0x10)
    FName StateName_WakeUp;                                                           // 0x03C0 (size: 0x8)
    FName StateName_ClockLoop;                                                        // 0x03C8 (size: 0x8)
    FName StateName_DuoLoop;                                                          // 0x03D0 (size: 0x8)
    class AActor* Plat1Raiser;                                                        // 0x03D8 (size: 0x8)

    void UserConstructionScript();
    void Platform 1__FinishedFunc();
    void Platform 1__UpdateFunc();
    void Platform 2__FinishedFunc();
    void Platform 2__UpdateFunc();
    void ReceiveBeginPlay();
    void StateChange(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void Play Raise SFX(class AActor* Actor);
    void Play Lower SFX(class AActor* Actor);
    void ExecuteUbergraph_ClockWatcher(int32 EntryPoint);
}; // Size: 0x3E0

#endif
