#ifndef UE4SS_SDK_UI_LightSettings_HPP
#define UE4SS_SDK_UI_LightSettings_HPP

class UUI_LightSettings_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UCheckBox* CheckBox_0;                                                      // 0x0210 (size: 0x8)
    class UUI_Cine_TextBlock_C* CineTextBlock;                                        // 0x0218 (size: 0x8)
    class UUI_Cine_TextBlock_C* CineTextBlock_17;                                     // 0x0220 (size: 0x8)
    class UUI_Cine_TextBlock_C* CineTextBlock_18;                                     // 0x0228 (size: 0x8)
    class UUI_Cine_TextBlock_C* CineTextBlock_19;                                     // 0x0230 (size: 0x8)
    class USpinBox* InnerCone;                                                        // 0x0238 (size: 0x8)
    class UInvalidationBox* InvalidationBox_5;                                        // 0x0240 (size: 0x8)
    class UVerticalBox* LampConeSettings;                                             // 0x0248 (size: 0x8)
    class USpinBox* Light_Attenuation_Radius;                                         // 0x0250 (size: 0x8)
    class USpinBox* Light_Intensity_Slider;                                           // 0x0258 (size: 0x8)
    class USpinBox* Light_Volumetric_Intensity;                                       // 0x0260 (size: 0x8)
    class UButton* LightColorButton;                                                  // 0x0268 (size: 0x8)
    class UExpandableArea* LightSettingsExpandable;                                   // 0x0270 (size: 0x8)
    class USpinBox* OuterCone;                                                        // 0x0278 (size: 0x8)
    class UCheckBox* ShadowCheckbox;                                                  // 0x0280 (size: 0x8)
    class USpinBox* SpinBox_0;                                                        // 0x0288 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock_C_0;                                 // 0x0290 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock_C_1;                                 // 0x0298 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock_C_3;                                 // 0x02A0 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock_C_4;                                 // 0x02A8 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock_C_5;                                 // 0x02B0 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock_C_6;                                 // 0x02B8 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock_C_7;                                 // 0x02C0 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock_C_8;                                 // 0x02C8 (size: 0x8)
    class AActor* UILightActor;                                                       // 0x02D0 (size: 0x8)
    float CustomIntensity;                                                            // 0x02D8 (size: 0x4)
    class UCineCameraComponent* Camera;                                               // 0x02E0 (size: 0x8)
    class ABP_CameraActor_C* CameraActor;                                             // 0x02E8 (size: 0x8)
    FLinearColor LightColor;                                                          // 0x02F0 (size: 0x10)
    class APawn* DrivableLightActor;                                                  // 0x0300 (size: 0x8)

    void IGetRequestedBoolVariableValue(FString VariableName, bool& NewParam);
    void IGetCinematicCamera(class ABP_CameraActor_C*& BP_CameraActor);
    void IGetCinematicWidget(class UAdvancedUI_C*& CurrentWidget);
    void SetLightMobilityText();
    void UpdateConeAngleSlider();
    void SetVisibilityCheckbox();
    void GetLightVisibility(bool& visible);
    void SetWidgetVisibility();
    void UpdateAttenuationSlider();
    void UpdateButtonColor();
    void UpdateIntensitySlider();
    void UpdateTextColor();
    float Get_Light_Volumetric_Intensity_Value_0();
    FSlateColor GetLightSlateColor();
    ECheckBoxState SetLightVisiblityCheckBox();
    ECheckBoxState CheckLightingChannel2();
    ECheckBoxState CheckLightingChannel1();
    ECheckBoxState CheckLightingChannel0();
    float Get_Attenuation_Radius();
    float Get_Intensity();
    FText Get_ActorName_Text_0();
    FText Light_X_Rotation_Text();
    FText Light_Z_Rotation_Text();
    FText Light_Y_Rotation_Text();
    ECheckBoxState Get_Shadow_State();
    void IChangeButtonColor(FLinearColor Color);
    void IDoSearch(FText SearchParameter, bool Empty);
    void IUpdateSelectedAnimation(class UObject* CurrentPlayingAnimation);
    void IUpdateSelectedCharacter(class ACharacter* Character);
    void IUpdateEFog(class AActor* ExponentialHeightFogActor);
    void IUpdateSelectedActor(class AActor* Actor);
    void IUpdateSkeletalMeshForAnimation(class USkeletalMeshComponent* SkeletalMesh);
    void IUpdateSelectedSkybox(class AActor* Skybox);
    void IPauseGame();
    void IUnPauseGame();
    void IUpdateSelectedParticleComponent(class UParticleSystemComponent* Emitter);
    void IUpdateSelectedPostProcess(class APostProcessVolume* NewParam);
    void IUpdateColorWidget(class UWidget* NewWidget);
    void IUpdateSelectedMaterial(class UMaterialInterface* NewParam);
    void IUpdateSelectedComponent(class UActorComponent* Component);
    void IUpdateGizmoTransformMode(TEnumAsByte<EGizmoTransformMode::Type> Transformmode);
    void BndEvt__CheckBox_166_K2Node_ComponentBoundEvent_397_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__X_TextBox_K2Node_ComponentBoundEvent_1000_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__Y_TextBox_K2Node_ComponentBoundEvent_1016_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__Z_TextBox_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void UpdateLightColor();
    void BndEvt__SpinBox_155_K2Node_ComponentBoundEvent_1531_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SpinBox_158_K2Node_ComponentBoundEvent_2548_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SpinBox_156_K2Node_ComponentBoundEvent_2693_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SpinBox_157_K2Node_ComponentBoundEvent_2736_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SpinBox_159_K2Node_ComponentBoundEvent_2892_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_684_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_1962_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void Construct();
    void GetCamera();
    void GetColor();
    void IUpdateSelectedLightActor(class AActor* LightActor);
    void IUpdateDrivableLightActor(class APawn* Pawn);
    void BndEvt__LightColorButton_K2Node_ComponentBoundEvent_154_OnButtonClickedEvent__DelegateSignature();
    void CustomEvent_0(FLinearColor NewColor);
    void HideUI(class AActor* DestroyedActor);
    void BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_79_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__OuterCone_K2Node_ComponentBoundEvent_256_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_278_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void ExecuteUbergraph_UI_LightSettings(int32 EntryPoint);
}; // Size: 0x308

#endif
