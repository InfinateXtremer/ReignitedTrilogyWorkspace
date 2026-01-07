#ifndef UE4SS_SDK_MantaRayController2_HPP
#define UE4SS_SDK_MantaRayController2_HPP

class AMantaRayController2_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)
    class AActor* IGC;                                                                // 0x0328 (size: 0x8)
    class AActor* TeleportSpot;                                                       // 0x0330 (size: 0x8)
    bool ImActive;                                                                    // 0x0338 (size: 0x1)
    class AActor* MissionMaster;                                                      // 0x0340 (size: 0x8)
    class AActor* MySeahorse;                                                         // 0x0348 (size: 0x8)
    class ABP_Spyro_MantaRayRide_C* MyMantaRay;                                       // 0x0350 (size: 0x8)
    FPhasmidSoftReference FlippyIGCSelector;                                          // 0x0358 (size: 0x28)
    FPhasmidSoftReference Flippy;                                                     // 0x0380 (size: 0x28)
    class AIGC_Selector_C* FlippyIGC;                                                 // 0x03A8 (size: 0x8)
    int32 Flippy_IGC_Index;                                                           // 0x03B0 (size: 0x4)
    class AActor* CirclingManta;                                                      // 0x03B8 (size: 0x8)
    int32 Hunter_IGC_Index;                                                           // 0x03C0 (size: 0x4)
    class AIGC_Selector_C* HunterIGC;                                                 // 0x03C8 (size: 0x8)

    void UserConstructionScript();
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionRestore();
    void MissionSuspend(bool Suspend);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionSetup(bool Active);
    void MissionReset(class AActor* RequestActor);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void ExecuteUbergraph_MantaRayController2(int32 EntryPoint);
}; // Size: 0x3D0

#endif
