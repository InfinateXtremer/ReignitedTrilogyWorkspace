#ifndef UE4SS_SDK_CNS2158_WhiskersTheGemcutter_HPP
#define UE4SS_SDK_CNS2158_WhiskersTheGemcutter_HPP

class ACNS2158_WhiskersTheGemcutter_C : public ABP_Base_Friendly_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    class UAC_FalconSaveCollectedLocal_C* AC_FalconSaveCollectedLocal;                // 0x0908 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Start;                         // 0x0910 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0918 (size: 0x8)
    class UStaticMeshComponent* SM_VFX_LightCone_Miner;                               // 0x0920 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_TurnTo;                        // 0x0928 (size: 0x8)
    class UFalconEnemyStateComponent* State_Run;                                      // 0x0930 (size: 0x8)
    class UTextRenderComponent* TextRender_0;                                         // 0x0938 (size: 0x8)
    class AActor* MyLizard;                                                           // 0x0940 (size: 0x8)
    class AActor* IGC_Selector;                                                       // 0x0948 (size: 0x8)
    TArray<TEnumAsByte<EObjectTypeQuery>> NewVar_0_0;                                 // 0x0950 (size: 0x10)
    FPhasmidSoftReference SoftTarget;                                                 // 0x0960 (size: 0x28)
    class AActor* TargetPoint;                                                        // 0x0988 (size: 0x8)
    bool Saved;                                                                       // 0x0990 (size: 0x1)

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
    void LizardStateChange(class AActor* Actor, class UFalconEnemyStateComponent* StateComponent);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__FalconEnemyState_TurnTo_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveBeginPlay();
    void Begin();
    void restoreObjectSaveData(const FPhasmidObjectSaveDataList& dataList, const FPhasmidObjectSaveDataList& checkPointDataList, bool checkPointDataIsValid);
    void ExecuteUbergraph_CNS2158_WhiskersTheGemcutter(int32 EntryPoint);
}; // Size: 0x991

#endif
