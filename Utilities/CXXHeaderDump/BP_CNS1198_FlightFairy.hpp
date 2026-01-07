#ifndef UE4SS_SDK_BP_CNS1198_FlightFairy_HPP
#define UE4SS_SDK_BP_CNS1198_FlightFairy_HPP

class ABP_CNS1198_FlightFairy_C : public ABP_CNS1198_FairyWithDirectionArrow_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0948 (size: 0x8)
    class UFalconEnemyStateComponent* State_Flamed;                                   // 0x0950 (size: 0x8)
    float FacingArrowOffset;                                                          // 0x0958 (size: 0x4)
    bool AchievementCheck;                                                            // 0x095C (size: 0x1)
    EAchievement AchievementIndex;                                                    // 0x095D (size: 0x1)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__State_Hidden_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Appear_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Disappear_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_DisappearFlamed_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CNS1198_FlightFairy(int32 EntryPoint);
}; // Size: 0x95E

#endif
