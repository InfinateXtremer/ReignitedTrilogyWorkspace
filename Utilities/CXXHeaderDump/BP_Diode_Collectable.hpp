#ifndef UE4SS_SDK_BP_Diode_Collectable_HPP
#define UE4SS_SDK_BP_Diode_Collectable_HPP

class ABP_Diode_Collectable_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0450 (size: 0x8)
    class UAC_FalconSaveParamLocal_C* AC_FalconSaveParamLocal;                        // 0x0458 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_LightBulb_Insert_Start;                    // 0x0460 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_LightBulb_Collected;                       // 0x0468 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_LightBulb_Idle_Sparkles;                   // 0x0470 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_LightBulb_Inserted;                        // 0x0478 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0480 (size: 0x8)
    class UBP_StateComponent_C* State: Inserted;                                      // 0x0488 (size: 0x8)
    class UBP_StateComponent_C* State: Collected;                                     // 0x0490 (size: 0x8)
    class UBP_StateComponent_C* State: Idle;                                          // 0x0498 (size: 0x8)
    float Timeline_0_0_NewTrack_0_B015B9864AA9AB7D72F46096C27B2D74;                   // 0x04A0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0_0__Direction_B015B9864AA9AB7D72F46096C27B2D74; // 0x04A4 (size: 0x1)
    class UTimelineComponent* Timeline_0_0;                                           // 0x04A8 (size: 0x8)
    float Timeline_1_NewTrack_0_4255EED6476480B7300F73A0909D88E4;                     // 0x04B0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_4255EED6476480B7300F73A0909D88E4; // 0x04B4 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x04B8 (size: 0x8)
    float StartRotation;                                                              // 0x04C0 (size: 0x4)
    float EndRotation;                                                                // 0x04C4 (size: 0x4)
    float StartXRotation;                                                             // 0x04C8 (size: 0x4)

    int32 getObjectSaveData(FPhasmidObjectSaveDataList& dataList);
    void UserConstructionScript();
    void Timeline_0_0__FinishedFunc();
    void Timeline_0_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void BndEvt__State: Collected_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State: Inserted_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void 205 Diode - Save Was Used();
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Diode_Collectable(int32 EntryPoint);
}; // Size: 0x4CC

#endif
