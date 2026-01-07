#ifndef UE4SS_SDK_BP_202_LampCrystal_HPP
#define UE4SS_SDK_BP_202_LampCrystal_HPP

class ABP_202_LampCrystal_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0320 (size: 0x8)
    class UStaticMeshComponent* SM_VFX_LS106_LightFogGlow;                            // 0x0328 (size: 0x8)
    class UPointLightComponent* Crystal Light;                                        // 0x0330 (size: 0x8)
    class UStaticMeshComponent* Crystal;                                              // 0x0338 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0340 (size: 0x8)
    bool debugMaterialLit;                                                            // 0x0348 (size: 0x1)
    bool BakeLightLit;                                                                // 0x0349 (size: 0x1)
    int32 Lights Lit;                                                                 // 0x034C (size: 0x4)
    class UMaterialInstance* Crystal_MI;                                              // 0x0350 (size: 0x8)
    class UMaterialInstance* Crystal_MAT;                                             // 0x0358 (size: 0x8)
    float Emissive Off;                                                               // 0x0360 (size: 0x4)
    float Cubemap Multiply Off;                                                       // 0x0364 (size: 0x4)
    float Emissive On;                                                                // 0x0368 (size: 0x4)
    float Cubemap Multiply On;                                                        // 0x036C (size: 0x4)
    float Current Crystal Intensity;                                                  // 0x0370 (size: 0x4)
    float Target Crystal Intensity;                                                   // 0x0374 (size: 0x4)
    float Light Intensity;                                                            // 0x0378 (size: 0x4)
    float Fog Intensity;                                                              // 0x037C (size: 0x4)
    float Spot Light Intensity;                                                       // 0x0380 (size: 0x4)
    float Light Speed;                                                                // 0x0384 (size: 0x4)

    void UserConstructionScript();
    void Event Turn Off Light();
    void Event Adjust Light();
    void MissionAlert(class AActor* Actor, int32 Value);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void MissionRestore();
    void MissionSuspend(bool Suspend);
    void MissionSetup(bool Active);
    void MissionReset(class AActor* RequestActor);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void ExecuteUbergraph_BP_202_LampCrystal(int32 EntryPoint);
}; // Size: 0x388

#endif
