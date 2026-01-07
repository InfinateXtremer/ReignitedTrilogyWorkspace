#ifndef UE4SS_SDK_BP_VFX_LS118_Druid_Platform_HPP
#define UE4SS_SDK_BP_VFX_LS118_Druid_Platform_HPP

class ABP_VFX_LS118_Druid_Platform_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UParticleSystemComponent* PS_Druid_Platform_Rocks_Base;                     // 0x0320 (size: 0x8)
    class UParticleSystemComponent* PS_Rocks_1;                                       // 0x0328 (size: 0x8)
    class UParticleSystemComponent* PS_Rocks_2;                                       // 0x0330 (size: 0x8)
    class UParticleSystemComponent* PS_Rocks_3;                                       // 0x0338 (size: 0x8)
    class UParticleSystemComponent* PS_Rocks_4;                                       // 0x0340 (size: 0x8)
    class UParticleSystemComponent* PS_Rocks_Top;                                     // 0x0348 (size: 0x8)
    class USkeletalMeshComponent* SK_VFX_LS118_DruidPlatform;                         // 0x0350 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0358 (size: 0x8)
    float Platform_Return_Percent_7FFAB4CA4EF80FCE69C0F1A07FF21E22;                   // 0x0360 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Platform_Return__Direction_7FFAB4CA4EF80FCE69C0F1A07FF21E22; // 0x0364 (size: 0x1)
    class UTimelineComponent* Platform Return;                                        // 0x0368 (size: 0x8)
    float AnimStart;                                                                  // 0x0370 (size: 0x4)
    float AnimEnd;                                                                    // 0x0374 (size: 0x4)

    void UserConstructionScript();
    void Platform Return__FinishedFunc();
    void Platform Return__UpdateFunc();
    void LS118 - Swaying Platform Stop();
    void ReceiveBeginPlay();
    void Druid Platform VFX - Start Moving();
    void ExecuteUbergraph_BP_VFX_LS118_Druid_Platform(int32 EntryPoint);
}; // Size: 0x378

#endif
