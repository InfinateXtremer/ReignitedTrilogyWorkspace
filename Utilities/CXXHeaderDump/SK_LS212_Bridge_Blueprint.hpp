#ifndef UE4SS_SDK_SK_LS212_Bridge_Blueprint_HPP
#define UE4SS_SDK_SK_LS212_Bridge_Blueprint_HPP

class ASK_LS212_Bridge_Blueprint_C : public ASkeletalMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A0 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x03A8 (size: 0x8)
    class AStaticMeshActor* BridgeCollision;                                          // 0x03B0 (size: 0x8)
    bool Unrolled;                                                                    // 0x03B8 (size: 0x1)

    void UserConstructionScript();
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void MissionStart(class AActor* MasterActor, int32 Value);
    void ReceiveBeginPlay();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionAlert(class AActor* Actor, int32 Value);
    void ExecuteUbergraph_SK_LS212_Bridge_Blueprint(int32 EntryPoint);
}; // Size: 0x3B9

#endif
