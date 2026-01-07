#ifndef UE4SS_SDK_BP_OrbTurtleStart_HPP
#define UE4SS_SDK_BP_OrbTurtleStart_HPP

class ABP_OrbTurtleStart_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    float Checking;                                                                   // 0x0330 (size: 0x4)
    class AActor* TurtleController;                                                   // 0x0338 (size: 0x8)

    void UserConstructionScript();
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionRestore();
    void MissionSuspend(bool Suspend);
    void MissionSetup(bool Active);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionReset(class AActor* RequestActor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionAlert(class AActor* Actor, int32 Value);
    void ExecuteUbergraph_BP_OrbTurtleStart(int32 EntryPoint);
}; // Size: 0x340

#endif
