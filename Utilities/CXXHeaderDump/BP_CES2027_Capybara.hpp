#ifndef UE4SS_SDK_BP_CES2027_Capybara_HPP
#define UE4SS_SDK_BP_CES2027_Capybara_HPP

class ABP_CES2027_Capybara_C : public ABP_CES2218_CapybaraBoat_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04D8 (size: 0x8)
    class UBP_StateComponent_C* State_AwareBehind;                                    // 0x04E0 (size: 0x8)
    class UBP_StateComponent_C* State_Check;                                          // 0x04E8 (size: 0x8)
    class USceneComponent* VehicleAttach;                                             // 0x04F0 (size: 0x8)
    FVector Timeline_1_FadeToBlack_C3EDC5BE4B503F97BDADA88862838DFC;                  // 0x04F8 (size: 0xC)
    float Timeline_1_Fringe_Intensity_C3EDC5BE4B503F97BDADA88862838DFC;               // 0x0504 (size: 0x4)
    float Timeline_1_Fringe_Size_C3EDC5BE4B503F97BDADA88862838DFC;                    // 0x0508 (size: 0x4)
    float Timeline_1_Dissolve_Amount_C3EDC5BE4B503F97BDADA88862838DFC;                // 0x050C (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_C3EDC5BE4B503F97BDADA88862838DFC; // 0x0510 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0518 (size: 0x8)

    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void BndEvt__State_Death2_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void BndEvt__State_Check_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void Death Dissolve();
    void BndEvt__Capsule_K2Node_ComponentBoundEvent_34_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_CES2027_Capybara(int32 EntryPoint);
}; // Size: 0x520

#endif
