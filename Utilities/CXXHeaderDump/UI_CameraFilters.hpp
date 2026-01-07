#ifndef UE4SS_SDK_UI_CameraFilters_HPP
#define UE4SS_SDK_UI_CameraFilters_HPP

class UUI_CameraFilters_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class USpinBox* Aperture;                                                         // 0x0210 (size: 0x8)
    class UButton* Button_123;                                                        // 0x0218 (size: 0x8)
    class UCheckBox* BWCheckBox;                                                      // 0x0220 (size: 0x8)
    class USpinBox* CA_Intentisy;                                                     // 0x0228 (size: 0x8)
    class USpinBox* CA_Offset;                                                        // 0x0230 (size: 0x8)
    class USpinBox* CameraAngleSpinBox;                                               // 0x0238 (size: 0x8)
    class UCheckBox* CheckBox_58;                                                     // 0x0240 (size: 0x8)
    class UComboBoxString* DepthofField_Method_Button;                                // 0x0248 (size: 0x8)
    class UExpandableArea* ExpandableArea_0;                                          // 0x0250 (size: 0x8)
    class USpinBox* Focal_Distance;                                                   // 0x0258 (size: 0x8)
    class USpinBox* GrainIntensity;                                                   // 0x0260 (size: 0x8)
    class USpinBox* GrainJitter;                                                      // 0x0268 (size: 0x8)
    class USpinBox* Max_Brightness;                                                   // 0x0270 (size: 0x8)
    class USpinBox* Min_Brightness;                                                   // 0x0278 (size: 0x8)
    class UCheckBox* OutlineCheckbox;                                                 // 0x0280 (size: 0x8)
    class USlider* Slider_0;                                                          // 0x0288 (size: 0x8)
    class USpinBox* SpinBox_1;                                                        // 0x0290 (size: 0x8)
    class USpinBox* TemperatureSpinBox;                                               // 0x0298 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_Cine_TextBlock_C_0;                                // 0x02A0 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_Cine_TextBlock_C_1;                                // 0x02A8 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_Cine_TextBlock_C_2;                                // 0x02B0 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_Cine_TextBlock_C_3;                                // 0x02B8 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_Cine_TextBlock_C_4;                                // 0x02C0 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_Cine_TextBlock_C_5;                                // 0x02C8 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_Cine_TextBlock_C_6;                                // 0x02D0 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_Cine_TextBlock_C_7;                                // 0x02D8 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_Cine_TextBlock_C_8;                                // 0x02E0 (size: 0x8)
    class USpinBox* Vignette;                                                         // 0x02E8 (size: 0x8)
    class AActor* UIActor;                                                            // 0x02F0 (size: 0x8)
    class UCineCameraComponent* Camera;                                               // 0x02F8 (size: 0x8)
    class ABP_CameraActor_C* CameraActor;                                             // 0x0300 (size: 0x8)

    void IGetRequestedBoolVariableValue(FString VariableName, bool& NewParam);
    void IGetCinematicCamera(class ABP_CameraActor_C*& BP_CameraActor);
    void IGetCinematicWidget(class UAdvancedUI_C*& CurrentWidget);
    float CameraRotationSlider();
    float CameraRotationSpinbox();
    ECheckBoxState GetDoFState();
    void IChangeButtonColor(FLinearColor Color);
    void IDoSearch(FText SearchParameter, bool Empty);
    void IUpdateSelectedAnimation(class UObject* CurrentPlayingAnimation);
    void IUpdateSelectedCharacter(class ACharacter* Character);
    void IUpdateSelectedLightActor(class AActor* LightActor);
    void IUpdateEFog(class AActor* ExponentialHeightFogActor);
    void IUpdateSkeletalMeshForAnimation(class USkeletalMeshComponent* SkeletalMesh);
    void IUpdateDrivableLightActor(class APawn* Pawn);
    void IUpdateSelectedSkybox(class AActor* Skybox);
    void IPauseGame();
    void IUnPauseGame();
    void IUpdateSelectedParticleComponent(class UParticleSystemComponent* Emitter);
    void IUpdateSelectedPostProcess(class APostProcessVolume* NewParam);
    void IUpdateColorWidget(class UWidget* NewWidget);
    void IUpdateSelectedMaterial(class UMaterialInterface* NewParam);
    void IUpdateSelectedComponent(class UActorComponent* Component);
    void IUpdateGizmoTransformMode(TEnumAsByte<EGizmoTransformMode::Type> Transformmode);
    void BndEvt__SpinBox_154_K2Node_ComponentBoundEvent_963_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__CheckBox_58_K2Node_ComponentBoundEvent_214_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__SpinBox_11_K2Node_ComponentBoundEvent_3685_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SpinBox_12_K2Node_ComponentBoundEvent_3777_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__Max_Exposure_K2Node_ComponentBoundEvent_650_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__Min_Exposure_K2Node_ComponentBoundEvent_748_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__GrainIntensity_K2Node_ComponentBoundEvent_1551_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__GrainJitter_K2Node_ComponentBoundEvent_1607_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__Vignette_K2Node_ComponentBoundEvent_1664_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__ComboBoxString_145_K2Node_ComponentBoundEvent_614_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void Refocus();
    void BndEvt__Aperture_K2Node_ComponentBoundEvent_344_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__Slider_0_K2Node_ComponentBoundEvent_14266_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__SpinBox_45_K2Node_ComponentBoundEvent_5921_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__Button_123_K2Node_ComponentBoundEvent_7213_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void BndEvt__CheckBox_23_K2Node_ComponentBoundEvent_124_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__CheckBox_82_K2Node_ComponentBoundEvent_534_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__MotionBlur_Amount_K2Node_ComponentBoundEvent_2639_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__MotionBlur_Max_K2Node_ComponentBoundEvent_2652_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__MotionBlur_PerObjectSize_K2Node_ComponentBoundEvent_2823_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void GetCamera();
    void IUpdateSelectedActor(class AActor* Actor);
    void BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_97_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SpinBox_1_K2Node_ComponentBoundEvent_75_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void ExecuteUbergraph_UI_CameraFilters(int32 EntryPoint);
}; // Size: 0x308

#endif
