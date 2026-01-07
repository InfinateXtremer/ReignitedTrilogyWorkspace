#ifndef UE4SS_SDK_BP_LS131_DragonGreen_HPP
#define UE4SS_SDK_BP_LS131_DragonGreen_HPP

class ABP_LS131_DragonGreen_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UAC_FalconSaveCollectedPerm_C* AC_FalconSaveCollectedPerm;                  // 0x0320 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_Portal_Mist_GnastyLoot;                    // 0x0328 (size: 0x8)
    class UStaticMeshComponent* SM_VFX_LS131_Gate_Glow_Ground;                        // 0x0330 (size: 0x8)
    class UStaticMeshComponent* SM_VFX_LS131_DragonGate_Glow;                         // 0x0338 (size: 0x8)
    class UParticleSystemComponent* PS_LS131_DragonNostrilMotes_Green1;               // 0x0340 (size: 0x8)
    class UParticleSystemComponent* PS_LS131_DragonNostrilMotes_Green2;               // 0x0348 (size: 0x8)
    class UParticleSystemComponent* PS_LS131_DragonNostrilMotes_Green3;               // 0x0350 (size: 0x8)
    class UParticleSystemComponent* PS_LS131_DragonNostrilMotes_Green;                // 0x0358 (size: 0x8)
    class UParticleSystemComponent* P_SmokeStack_L;                                   // 0x0360 (size: 0x8)
    class UParticleSystemComponent* P_SmokeStack_R;                                   // 0x0368 (size: 0x8)
    class UPointLightComponent* PointLight3;                                          // 0x0370 (size: 0x8)
    class UPointLightComponent* PointLight2;                                          // 0x0378 (size: 0x8)
    class UPointLightComponent* PointLight1;                                          // 0x0380 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0388 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0390 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0398 (size: 0x8)
    float Timeline_0_NewTrack_0_4B7F639349924A06ED930B8D3AC2C575;                     // 0x03A0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_4B7F639349924A06ED930B8D3AC2C575; // 0x03A4 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x03A8 (size: 0x8)
    FVector Closed;                                                                   // 0x03B0 (size: 0xC)
    float opened;                                                                     // 0x03BC (size: 0x4)
    FPhasmidSoftReference Magnus;                                                     // 0x03C0 (size: 0x28)
    FPhasmidSoftReference Delbin;                                                     // 0x03E8 (size: 0x28)
    class AActor* Magnus_Local;                                                       // 0x0410 (size: 0x8)
    class AActor* Delbin_Local;                                                       // 0x0418 (size: 0x8)
    bool 134 Finished;                                                                // 0x0420 (size: 0x1)
    bool MagnusRescued;                                                               // 0x0421 (size: 0x1)
    bool Saved;                                                                       // 0x0422 (size: 0x1)
    TArray<class ACollectable_Dragon_C*> LocalDragons;                                // 0x0428 (size: 0x10)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
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
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void MagnusCutsceneEnded();
    void OpenAndSave();
    void ExecuteUbergraph_BP_LS131_DragonGreen(int32 EntryPoint);
}; // Size: 0x438

#endif
