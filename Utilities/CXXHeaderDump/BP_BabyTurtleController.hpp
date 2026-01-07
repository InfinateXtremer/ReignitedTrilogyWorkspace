#ifndef UE4SS_SDK_BP_BabyTurtleController_HPP
#define UE4SS_SDK_BP_BabyTurtleController_HPP

class ABP_BabyTurtleController_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x0320 (size: 0x8)
    class UTextRenderComponent* Baby Turtle Controller;                               // 0x0328 (size: 0x8)
    TArray<class AActor*> BabyTurtles;                                                // 0x0330 (size: 0x10)
    int32 Value;                                                                      // 0x0340 (size: 0x4)

    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void MissionAlert(class AActor* Actor, int32 Value);
    void ExecuteUbergraph_BP_BabyTurtleController(int32 EntryPoint);
}; // Size: 0x344

#endif
