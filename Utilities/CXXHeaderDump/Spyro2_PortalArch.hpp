#ifndef UE4SS_SDK_Spyro2_PortalArch_HPP
#define UE4SS_SDK_Spyro2_PortalArch_HPP

class ASpyro2_PortalArch_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UStaticMeshComponent* SM_SH_S2_PopUp_Gate_Glow_Ground_Transition;           // 0x0320 (size: 0x8)
    class UStaticMeshComponent* Portal_Large_GlowCover;                               // 0x0328 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_PopUpPortal_Mist;                          // 0x0330 (size: 0x8)
    class UStaticMeshComponent* SM_SH_S2_PopUp_Gate_GlowCover;                        // 0x0338 (size: 0x8)
    class UStaticMeshComponent* PopUp_Gate_InitalGlow;                                // 0x0340 (size: 0x8)
    class UStaticMeshComponent* SM_SH_S2_PopUp_Gate_Glow_Ground;                      // 0x0348 (size: 0x8)
    class UStaticMeshComponent* SM_SH_S2_PopUp_Gate_Glow;                             // 0x0350 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_Portal_Mist_Large;                         // 0x0358 (size: 0x8)
    class UStaticMeshComponent* Portal_Large_GlowOnly;                                // 0x0360 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent;                      // 0x0368 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0370 (size: 0x8)
    class UPointLightComponent* PointLight_buildArch_L;                               // 0x0378 (size: 0x8)
    class UPointLightComponent* PointLight_buildArch_R;                               // 0x0380 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0388 (size: 0x8)
    class UAC_FalconSaveCollectedPerm_C* AC_FalconSaveCollectedPerm;                  // 0x0390 (size: 0x8)
    class UStaticMeshComponent* SmallPortalStatic;                                    // 0x0398 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x03A0 (size: 0x8)
    class UAC_FalconSaveCollectedLocal_C* UNUSED_AC_FalconSaveCollectedLocal;         // 0x03A8 (size: 0x8)
    class UStaticMeshComponent* PortalMesh;                                           // 0x03B0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x03B8 (size: 0x8)
    float Large_Arch_fade_Final_Arch_Glow_Opacity_F19C8B0547AE5533116858982AB6DA16;   // 0x03C0 (size: 0x4)
    float Large_Arch_fade_Final_Arch_Glow_F19C8B0547AE5533116858982AB6DA16;           // 0x03C4 (size: 0x4)
    float Large_Arch_fade_Light_Intensity_F19C8B0547AE5533116858982AB6DA16;           // 0x03C8 (size: 0x4)
    float Large_Arch_fade_Main_Emissive_F19C8B0547AE5533116858982AB6DA16;             // 0x03CC (size: 0x4)
    float Large_Arch_fade_Main_Opacity_F19C8B0547AE5533116858982AB6DA16;              // 0x03D0 (size: 0x4)
    float Large_Arch_fade_Emissive_Power_F19C8B0547AE5533116858982AB6DA16;            // 0x03D4 (size: 0x4)
    float Large_Arch_fade_Opacity_F19C8B0547AE5533116858982AB6DA16;                   // 0x03D8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Large_Arch_fade__Direction_F19C8B0547AE5533116858982AB6DA16; // 0x03DC (size: 0x1)
    class UTimelineComponent* Large Arch fade;                                        // 0x03E0 (size: 0x8)
    float Timeline_0_Final_Arch_Glow_Opacity_D54437474505E9FF1C7689B7813CDAFF;        // 0x03E8 (size: 0x4)
    float Timeline_0_Final_Arch_Glow_D54437474505E9FF1C7689B7813CDAFF;                // 0x03EC (size: 0x4)
    float Timeline_0_Light_Intensity_D54437474505E9FF1C7689B7813CDAFF;                // 0x03F0 (size: 0x4)
    float Timeline_0_Main_Emissive_D54437474505E9FF1C7689B7813CDAFF;                  // 0x03F4 (size: 0x4)
    float Timeline_0_Main_Opacity_D54437474505E9FF1C7689B7813CDAFF;                   // 0x03F8 (size: 0x4)
    float Timeline_0_Emissive_Power_D54437474505E9FF1C7689B7813CDAFF;                 // 0x03FC (size: 0x4)
    float Timeline_0_Opacity_D54437474505E9FF1C7689B7813CDAFF;                        // 0x0400 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_D54437474505E9FF1C7689B7813CDAFF; // 0x0404 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0408 (size: 0x8)
    float Arch_Light_down_Light_Intensity_3613889841A8A39BA5C4CDAF7906BAB7;           // 0x0410 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Arch_Light_down__Direction_3613889841A8A39BA5C4CDAF7906BAB7; // 0x0414 (size: 0x1)
    class UTimelineComponent* Arch Light down;                                        // 0x0418 (size: 0x8)
    float Gate_Cover_Glow_Out_Final_Arch_Glow_Opacity_DD8EC62443D7F981D8D8F0B04734FCCE; // 0x0420 (size: 0x4)
    float Gate_Cover_Glow_Out_Final_Arch_Glow_DD8EC62443D7F981D8D8F0B04734FCCE;       // 0x0424 (size: 0x4)
    float Gate_Cover_Glow_Out_Light_Intensity_DD8EC62443D7F981D8D8F0B04734FCCE;       // 0x0428 (size: 0x4)
    float Gate_Cover_Glow_Out_Main_Emissive_DD8EC62443D7F981D8D8F0B04734FCCE;         // 0x042C (size: 0x4)
    float Gate_Cover_Glow_Out_Main_Opacity_DD8EC62443D7F981D8D8F0B04734FCCE;          // 0x0430 (size: 0x4)
    float Gate_Cover_Glow_Out_Emissive_Power_DD8EC62443D7F981D8D8F0B04734FCCE;        // 0x0434 (size: 0x4)
    float Gate_Cover_Glow_Out_Opacity_DD8EC62443D7F981D8D8F0B04734FCCE;               // 0x0438 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Gate_Cover_Glow_Out__Direction_DD8EC62443D7F981D8D8F0B04734FCCE; // 0x043C (size: 0x1)
    class UTimelineComponent* Gate Cover Glow Out;                                    // 0x0440 (size: 0x8)
    float Gate_Cover_Glow_In_Final_Arch_Glow_Opacity_BF341208496422919B0F35837546EBB8; // 0x0448 (size: 0x4)
    float Gate_Cover_Glow_In_Final_Arch_Glow_BF341208496422919B0F35837546EBB8;        // 0x044C (size: 0x4)
    float Gate_Cover_Glow_In_Light_Intensity_BF341208496422919B0F35837546EBB8;        // 0x0450 (size: 0x4)
    float Gate_Cover_Glow_In_Main_Emissive_BF341208496422919B0F35837546EBB8;          // 0x0454 (size: 0x4)
    float Gate_Cover_Glow_In_Main_Opacity_BF341208496422919B0F35837546EBB8;           // 0x0458 (size: 0x4)
    float Gate_Cover_Glow_In_Emissive_Power_BF341208496422919B0F35837546EBB8;         // 0x045C (size: 0x4)
    float Gate_Cover_Glow_In_Opacity_BF341208496422919B0F35837546EBB8;                // 0x0460 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Gate_Cover_Glow_In__Direction_BF341208496422919B0F35837546EBB8; // 0x0464 (size: 0x1)
    class UTimelineComponent* Gate Cover Glow In;                                     // 0x0468 (size: 0x8)
    float Arch_Lights_Light_Intensity_D9BC922747313F201A797F83FAA127D3;               // 0x0470 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Arch_Lights__Direction_D9BC922747313F201A797F83FAA127D3; // 0x0474 (size: 0x1)
    class UTimelineComponent* Arch Lights;                                            // 0x0478 (size: 0x8)
    float Delay;                                                                      // 0x0480 (size: 0x4)
    bool alreadyCollected;                                                            // 0x0484 (size: 0x1)
    FVector ActiveLocation;                                                           // 0x0488 (size: 0xC)
    FVector InactiveLocation;                                                         // 0x0494 (size: 0xC)
    class APortalTransporter_C* PortalTransporter;                                    // 0x04A0 (size: 0x8)
    bool LargeArch;                                                                   // 0x04A8 (size: 0x1)
    FPhasmidSoftReference PortalActor;                                                // 0x04B0 (size: 0x28)
    TArray<class AActor*> DestroyActors;                                              // 0x04D8 (size: 0x10)
    TArray<class AActor*> NotifyActors;                                               // 0x04E8 (size: 0x10)
    int32 NotifyValue;                                                                // 0x04F8 (size: 0x4)
    class UAkAudioEvent* SFX_Popup;                                                   // 0x0500 (size: 0x8)
    bool GroundGlow;                                                                  // 0x0508 (size: 0x1)
    FLinearColor SpotLight Color;                                                     // 0x050C (size: 0x10)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void Arch Light down__FinishedFunc();
    void Arch Light down__UpdateFunc();
    void Gate Cover Glow In__FinishedFunc();
    void Gate Cover Glow In__UpdateFunc();
    void Arch Lights__FinishedFunc();
    void Arch Lights__UpdateFunc();
    void Gate Cover Glow Out__FinishedFunc();
    void Gate Cover Glow Out__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Large Arch fade__FinishedFunc();
    void Large Arch fade__UpdateFunc();
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void MissionAlert(class AActor* Actor, int32 Value);
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void PlayerReady();
    void Big Portal FXs();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void BndEvt__PortalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__SmallPortalStatic_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void SetMinimapIcon();
    void ExecuteUbergraph_Spyro2_PortalArch(int32 EntryPoint);
}; // Size: 0x51C

#endif
