#ifndef UE4SS_SDK_BP_LS122_IntroCS_Controller_HPP
#define UE4SS_SDK_BP_LS122_IntroCS_Controller_HPP

class ABP_LS122_IntroCS_Controller_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)
    class AIGC_Selector_C* IGCRef;                                                    // 0x0328 (size: 0x8)
    bool playerReady?;                                                                // 0x0330 (size: 0x1)
    class ABP_CES1045_ThiefGreen_C* ThiefRef;                                         // 0x0338 (size: 0x8)
    bool cancelIGC?;                                                                  // 0x0340 (size: 0x1)

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
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void LS122 - Start Intro CS();
    void MissionAlert(class AActor* Actor, int32 Value);
    void ExecuteUbergraph_BP_LS122_IntroCS_Controller(int32 EntryPoint);
}; // Size: 0x341

#endif
