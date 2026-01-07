#ifndef UE4SS_SDK_GA_Spyro_Swim_HPP
#define UE4SS_SDK_GA_Spyro_Swim_HPP

class UGA_Spyro_Swim_C : public UGA_Spyro_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0640 (size: 0x8)
    int32 CamSettingsIdUnderwater;                                                    // 0x0648 (size: 0x4)
    bool JumpedOutNoEffects;                                                          // 0x064C (size: 0x1)
    int32 CamSettingsIdSurface;                                                       // 0x0650 (size: 0x4)
    float EventMagnitude;                                                             // 0x0654 (size: 0x4)

    void SetUnderwaterCameraSettings();
    void IsKBMAndVehicle(bool& Value);
    void IsKeyboardMouse(bool& Value);
    void IsUsingMouseForSwimming(bool& Value);
    void SetInitialDiveVelocity(bool& return);
    void Added_6144BDDF47962230E578ED8F29618DEF();
    void Removed_7CEC812C474BBD64C1EAFDACCDD80F1E();
    void Removed_F0B39170404D7075912979875CBFEE22();
    void Added_58F13A1D4CDC5D385A8EFA91C0828287();
    void PostActivateAbilityFromEvent(const FGameplayEventData& EventData);
    void AbilityActionDispatcher(FGameplayTag GameplayTag, FGameplayEventData Payload);
    void PostEndAbility(bool bWasCancelled);
    void InitSurfaceMovement();
    void RequestDiveFromSurface();
    void JumpFromSurface();
    void EnterDivingMode();
    void PopUnderwaterCamera();
    void WaitForUnderwaterFreeLook();
    void OnBreach();
    void OnJumpOut();
    void OnHitSurfaceCharging();
    void OnHitSurface();
    void OnHeadBashToDive();
    void CheckSuperFireMaterial();
    void PopCameraSurface();
    void PushCameraSurface();
    void PushUnderwaterCamera();
    void StartCameraListeners();
    void OnNewInputSource(EInputSource NewInputSource);
    void ExecuteUbergraph_GA_Spyro_Swim(int32 EntryPoint);
}; // Size: 0x658

#endif
