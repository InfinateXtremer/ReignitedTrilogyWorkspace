#ifndef UE4SS_SDK_BP_Powerup_Controller_HPP
#define UE4SS_SDK_BP_Powerup_Controller_HPP

class ABP_Powerup_Controller_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)
    FTimerHandle IceBreathTimer;                                                      // 0x0328 (size: 0x8)
    bool WithoutSkin?;                                                                // 0x0330 (size: 0x1)
    FTimerHandle SuperChargeTimer;                                                    // 0x0338 (size: 0x8)
    FTimerHandle MagmaTimer;                                                          // 0x0340 (size: 0x8)
    FTimerHandle SpikesTimer;                                                         // 0x0348 (size: 0x8)
    FTimerHandle SuperflameTimer;                                                     // 0x0350 (size: 0x8)
    FTimerHandle RagefireTimer;                                                       // 0x0358 (size: 0x8)
    FTimerHandle FreeFlightTimer;                                                     // 0x0360 (size: 0x8)

    void UserConstructionScript();
    void InpActEvt_C_K2Node_InputKeyEvent_4(FKey Key);
    void InpActEvt_Add_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_Subtract_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_Ice Breath_K2Node_InputActionEvent_6(FKey Key);
    void InpActEvt_Fairy Kiss_K2Node_InputActionEvent_5(FKey Key);
    void InpActEvt_SuperFlame_K2Node_InputActionEvent_4(FKey Key);
    void InpActEvt_SpikedIceBreath_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_Magma_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_Supercharge_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_FreeFlight_K2Node_InputActionEvent_0(FKey Key);
    void InpActEvt_NumPadEight_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_NumPadNine_K2Node_InputKeyEvent_0(FKey Key);
    void ClearEffects();
    void ApplyFreeflight();
    void SuperCharge();
    void Magma();
    void spikes();
    void SuperFlame();
    void RageFire();
    void IceBreath();
    void Clear Timers();
    void ReceiveBeginPlay();
    void CheckIceBreath();
    void CheckFairyKiss();
    void CheckSuperFlame();
    void CheckSpikedIceBreath();
    void CheckMagma();
    void CheckSupercharge();
    void CheckFreeFlight();
    void ExecuteUbergraph_BP_Powerup_Controller(int32 EntryPoint);
}; // Size: 0x368

#endif
