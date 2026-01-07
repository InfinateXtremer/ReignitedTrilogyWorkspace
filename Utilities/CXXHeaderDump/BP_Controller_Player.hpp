#ifndef UE4SS_SDK_BP_Controller_Player_HPP
#define UE4SS_SDK_BP_Controller_Player_HPP

class ABP_Controller_Player_C : public ASpyroPlayerController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0830 (size: 0x8)
    class UCharacterInputComponent_Empty_C* CharacterInputComponent_Empty;            // 0x0838 (size: 0x8)
    class UCharacterInputComponent_Spectator_C* CharacterInputComponent_Spectator;    // 0x0840 (size: 0x8)
    class UCharacterInputComponent_Spyro_C* CharacterInputComponent_Spyro;            // 0x0848 (size: 0x8)
    class APawn* CurrentControlledPawn;                                               // 0x0850 (size: 0x8)
    float DeltaSeconds;                                                               // 0x0858 (size: 0x4)
    bool DEBUG_L3Pressed;                                                             // 0x085C (size: 0x1)
    bool DEBUG_R3Pressed;                                                             // 0x085D (size: 0x1)
    bool UseSpectatorController;                                                      // 0x085E (size: 0x1)
    float InputMovementStateX;                                                        // 0x0860 (size: 0x4)
    float InputMovementStateY;                                                        // 0x0864 (size: 0x4)
    int32 DisableControllerInputStack;                                                // 0x0868 (size: 0x4)
    bool ControllerInputDisabled;                                                     // 0x086C (size: 0x1)
    bool ShouldPopDisabledInput;                                                      // 0x086D (size: 0x1)
    float CameraLeftAxis;                                                             // 0x0870 (size: 0x4)
    float CameraRightAxis;                                                            // 0x0874 (size: 0x4)
    float CameraYAxis;                                                                // 0x0878 (size: 0x4)
    float CameraXAxis;                                                                // 0x087C (size: 0x4)
    FKey ChargeKeyMap;                                                                // 0x0880 (size: 0x18)
    bool ChargeKeyStatus;                                                             // 0x0898 (size: 0x1)
    bool AudioListenerOverrideEnabled;                                                // 0x0899 (size: 0x1)

    void GetCameraMovementAxisState(float& X, float& Y);
    void GetPlayerInCutsceneMode(bool& InCutsceneMode);
    void GetCurrentInputComponent(class UFalconCharacterInputComponent*& CurrentInputComponent);
    void GetMovementAxisState(float& X, float& Y);
    void GetPlayerUnderDesignerControl(bool& UnderDesignerControl);
    void UpdateBPCamera();
    void AudioListenerOverride();
    void UpdatePlayerControlContext();
    void UserConstructionScript();
    void InpActEvt_Jump_K2Node_InputActionEvent_19(FKey Key);
    void InpActEvt_Jump_K2Node_InputActionEvent_18(FKey Key);
    void InpActEvt_FreeLook_K2Node_InputActionEvent_17(FKey Key);
    void InpActEvt_FreeLook_K2Node_InputActionEvent_16(FKey Key);
    void InpActEvt_SideRollLeft_K2Node_InputActionEvent_15(FKey Key);
    void InpActEvt_SideRollLeft_K2Node_InputActionEvent_14(FKey Key);
    void InpActEvt_SideRollRight_K2Node_InputActionEvent_13(FKey Key);
    void InpActEvt_SideRollRight_K2Node_InputActionEvent_12(FKey Key);
    void InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_0(FKey Key);
    void InpActEvt_SelectButton_K2Node_InputActionEvent_11(FKey Key);
    void InpActEvt_StartButton_K2Node_InputActionEvent_10(FKey Key);
    void InpActEvt_LeftTrigger_K2Node_InputActionEvent_9(FKey Key);
    void InpActEvt_LeftTrigger_K2Node_InputActionEvent_8(FKey Key);
    void InpActEvt_RightThumbstickButton_K2Node_InputActionEvent_7(FKey Key);
    void InpActEvt_RightThumbstickButton_K2Node_InputActionEvent_6(FKey Key);
    void OnLoaded_D8C52DC549E8B13E7DA09DB7652677CF(UClass* Loaded);
    void InpActEvt_LeftThumbstickButton_K2Node_InputActionEvent_5(FKey Key);
    void InpActEvt_LeftThumbstickButton_K2Node_InputActionEvent_4(FKey Key);
    void InpActEvt_RightTrigger_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_FireAttack_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_PointToTreasure_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_PointToTreasure_K2Node_InputActionEvent_0(FKey Key);
    void CheckShouldPopDisabledInput();
    void PopDisableControllerOnPossess();
    void SetPlayerUnderDesignerControl(bool IsUnderDesignerControl);
    void SetPlayerInCutsceneMode(bool IsInCutscene);
    void InpAxisEvt_MovementAxisY_K2Node_InputAxisEvent_0(float AxisValue);
    void InpAxisEvt_MovementAxisX_K2Node_InputAxisEvent_1(float AxisValue);
    void PopDisableControllerInput();
    void PushDisableControllerInput();
    void InpAxisEvt_CameraAxisY_K2Node_InputAxisEvent_112(float AxisValue);
    void InpAxisEvt_CameraAxisX_K2Node_InputAxisEvent_113(float AxisValue);
    void InpAxisEvt_CameraLeftAxis_K2Node_InputAxisEvent_117(float AxisValue);
    void InpAxisEvt_CameraRightAxis_K2Node_InputAxisEvent_122(float AxisValue);
    void OnSetPlayerCharacterContext(FSpyroCharacterInitialData InitialData);
    void ReceiveTick(float DeltaSeconds);
    void ChangePlayableCharacter(TSoftClassPtr<APawn> soft class ref);
    void Debug Change Character(TSoftClassPtr<APawn> soft pawn class ref);
    void Debug Settings Updated();
    void PlayerSettingsUpdated();
    void SetUseRetroControls(bool RetroControls);
    void ReceiveBeginPlay();
    void InitializeControlType();
    void GetChargeMapping();
    void CheckChargeButtonState();
    void SetUpdateAudioListenerOverride(bool Enabled);
    void IncreaseMaxHealth();
    void ExecuteUbergraph_BP_Controller_Player(int32 EntryPoint);
}; // Size: 0x89A

#endif
