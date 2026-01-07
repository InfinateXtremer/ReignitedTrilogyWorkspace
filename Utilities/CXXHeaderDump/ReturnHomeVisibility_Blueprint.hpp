#ifndef UE4SS_SDK_ReturnHomeVisibility_Blueprint_HPP
#define UE4SS_SDK_ReturnHomeVisibility_Blueprint_HPP

class AReturnHomeVisibility_Blueprint_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UBoxComponent* CollisionComp;                                               // 0x0320 (size: 0x8)
    FPhasmidSoftReference softRef;                                                    // 0x0328 (size: 0x28)

    void UserConstructionScript();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_ReturnHomeVisibility_Blueprint(int32 EntryPoint);
}; // Size: 0x350

#endif
