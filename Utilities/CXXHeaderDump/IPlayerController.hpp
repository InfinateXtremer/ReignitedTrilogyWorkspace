#ifndef UE4SS_SDK_IPlayerController_HPP
#define UE4SS_SDK_IPlayerController_HPP

class IIPlayerController_C : public IInterface
{

    void GetCameraMovementAxisState(float& X, float& Y);
    void SetUpdateAudioListenerOverride(bool Enabled);
    void GetPlayerInCutsceneMode(bool& InCutsceneMode);
    void GetCurrentInputComponent(class UFalconCharacterInputComponent*& CurrentInputComponent);
    void PopDisableControllerOnPossess();
    void PopDisableControllerInput();
    void PushDisableControllerInput();
    void GetMovementAxisState(float& X, float& Y);
    void PlayerSettingsUpdated();
    void Debug Settings Updated();
    void Debug Change Character(TSoftClassPtr<APawn> soft pawn class ref);
    void GetPlayerUnderDesignerControl(bool& UnderDesignerControl);
    void OnSetPlayerCharacterContext(FSpyroCharacterInitialData InitialData);
    void SetPlayerUnderDesignerControl(bool IsUnderDesignerControl);
    void SetPlayerInCutsceneMode(bool IsInCutscene);
}; // Size: 0x28

#endif
