#ifndef UE4SS_SDK_BP_TurtleContact_HPP
#define UE4SS_SDK_BP_TurtleContact_HPP

class ABP_TurtleContact_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    class AActor* Myself;                                                             // 0x0330 (size: 0x8)
    class AActor* BabyTurtleController;                                               // 0x0338 (size: 0x8)
    bool Checking;                                                                    // 0x0340 (size: 0x1)

    void UserConstructionScript();
    void MissionStart(class AActor* MasterActor, int32 Value);
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void MissionRestore();
    void MissionSuspend(bool Suspend);
    void MissionSetup(bool Active);
    void MissionReset(class AActor* RequestActor);
    void MissionAlert(class AActor* Actor, int32 Value);
    void ReceiveBeginPlay();
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionEnd(bool Success, bool LevelEnd);
    void ExecuteUbergraph_BP_TurtleContact(int32 EntryPoint);
}; // Size: 0x341

#endif
