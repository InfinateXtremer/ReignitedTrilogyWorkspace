#ifndef UE4SS_SDK_BP_S2_TreasureChest_QuestionMarkVase_HPP
#define UE4SS_SDK_BP_S2_TreasureChest_QuestionMarkVase_HPP

class ABP_S2_TreasureChest_QuestionMarkVase_C : public ABP_TreasureChest_BASE_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0620 (size: 0x8)
    class UParticleSystemComponent* PS_MysteryVase_Dissappear;                        // 0x0628 (size: 0x8)
    class UParticleSystemComponent* PS_MysteryVase_Appear;                            // 0x0630 (size: 0x8)
    class UParticleSystemComponent* PS_MysteryVase_Explode;                           // 0x0638 (size: 0x8)
    class USplineComponent* Spline7;                                                  // 0x0640 (size: 0x8)
    class USplineComponent* Spline6;                                                  // 0x0648 (size: 0x8)
    class USplineComponent* Spline5;                                                  // 0x0650 (size: 0x8)
    class USplineComponent* Spline4;                                                  // 0x0658 (size: 0x8)
    class USplineComponent* Spline3;                                                  // 0x0660 (size: 0x8)
    class USplineComponent* Spline2;                                                  // 0x0668 (size: 0x8)
    class USplineComponent* Spline1;                                                  // 0x0670 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0678 (size: 0x8)
    float MysteryGrow_scaleMult_C8ADF3E6436C1E294B41788C53CB73AD;                     // 0x0680 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> MysteryGrow__Direction_C8ADF3E6436C1E294B41788C53CB73AD; // 0x0684 (size: 0x1)
    class UTimelineComponent* MysteryGrow;                                            // 0x0688 (size: 0x8)
    TArray<class ABP_S2_TreasureChest_QuestionMarkVase_Empty_C*> List_Vases;          // 0x0690 (size: 0x10)
    TArray<class ACameraActor*> List_Cameras;                                         // 0x06A0 (size: 0x10)
    int32 vaseIndex;                                                                  // 0x06B0 (size: 0x4)
    bool preventIGC?;                                                                 // 0x06B4 (size: 0x1)
    bool isRevealed?;                                                                 // 0x06B5 (size: 0x1)
    FVector JustBrokenLocation;                                                       // 0x06B8 (size: 0xC)
    bool doPlayerTeleport?;                                                           // 0x06C4 (size: 0x1)

    bool ForceHasGem(bool& bHasGem);
    void UserConstructionScript();
    void MysteryGrow__FinishedFunc();
    void MysteryGrow__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void Treasure Chest - Question Mark - Start IGC();
    void Treasure Chest - Question Mark - Adjust(class ABP_TreasureChest_BASE_C* Question Chest, bool activate?, bool doImmediately?);
    void BndEvt__State_Death_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BP_HandleDamage(float Magnitude, FGameplayTagContainer DamageTags, class UPrimitiveComponent* HitComponent, const class AActor* DamagingActor);
    void ExecuteUbergraph_BP_S2_TreasureChest_QuestionMarkVase(int32 EntryPoint);
}; // Size: 0x6C5

#endif
