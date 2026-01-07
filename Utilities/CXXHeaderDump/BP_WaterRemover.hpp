#ifndef UE4SS_SDK_BP_WaterRemover_HPP
#define UE4SS_SDK_BP_WaterRemover_HPP

class ABP_WaterRemover_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot1;                                         // 0x0320 (size: 0x8)
    class AActor* Thing1;                                                             // 0x0328 (size: 0x8)
    class AActor* Thing2;                                                             // 0x0330 (size: 0x8)
    class AActor* Thing3;                                                             // 0x0338 (size: 0x8)
    class AActor* Thing4;                                                             // 0x0340 (size: 0x8)
    class AActor* Thing5;                                                             // 0x0348 (size: 0x8)
    class AActor* Thing6;                                                             // 0x0350 (size: 0x8)
    class AActor* Thing7;                                                             // 0x0358 (size: 0x8)
    class AActor* Thing8;                                                             // 0x0360 (size: 0x8)
    class AActor* Thing9;                                                             // 0x0368 (size: 0x8)
    class AActor* Thing10;                                                            // 0x0370 (size: 0x8)
    class ASharkSub1_C* Sub;                                                          // 0x0378 (size: 0x8)
    class AJumpOutTrigger_C* JumpOutTrigger;                                          // 0x0380 (size: 0x8)
    class AActor* Thing11;                                                            // 0x0388 (size: 0x8)
    class AActor* Thing12;                                                            // 0x0390 (size: 0x8)
    class AActor* Thing13;                                                            // 0x0398 (size: 0x8)

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
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void ExecuteUbergraph_BP_WaterRemover(int32 EntryPoint);
}; // Size: 0x3A0

#endif
