#ifndef UE4SS_SDK_CNS2081_BrotherArnie_HPP
#define UE4SS_SDK_CNS2081_BrotherArnie_HPP

class ACNS2081_BrotherArnie_C : public ABP_Base_Friendly_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    class UFalconEnemyStateComponent* State_TurnBack;                                 // 0x0908 (size: 0x8)
    class UFalconEnemyStateComponent* State_TurnTo;                                   // 0x0910 (size: 0x8)
    class UFalconEnemyStateComponent* State_DoneChant;                                // 0x0918 (size: 0x8)
    class UFalconEnemyStateComponent* State_Chant;                                    // 0x0920 (size: 0x8)
    float Rotation_Rotation_4FE209B146777F72FE5B66BDEA0D2516;                         // 0x0928 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Rotation__Direction_4FE209B146777F72FE5B66BDEA0D2516; // 0x092C (size: 0x1)
    class UTimelineComponent* Rotation;                                               // 0x0930 (size: 0x8)
    class AActor* FaceActor;                                                          // 0x0938 (size: 0x8)
    FRotator Rotation_Start;                                                          // 0x0940 (size: 0xC)
    FRotator Rotation_End;                                                            // 0x094C (size: 0xC)

    void UserConstructionScript();
    void Rotation__FinishedFunc();
    void Rotation__UpdateFunc();
    void MissionEnd(bool Success, bool LevelEnd);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void ReceiveBeginPlay();
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void BndEvt__State_TurnTo_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_TurnBack_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_CNS2081_BrotherArnie(int32 EntryPoint);
}; // Size: 0x958

#endif
