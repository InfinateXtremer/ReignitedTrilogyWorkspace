#ifndef UE4SS_SDK_UI_ExponentialFog_HPP
#define UE4SS_SDK_UI_ExponentialFog_HPP

class UUI_ExponentialFog_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UCheckBox* CheckBox_66;                                                     // 0x0210 (size: 0x8)
    class USpinBox* EFog_Density_Slider;                                              // 0x0218 (size: 0x8)
    class USpinBox* EFog_Height_Falloff_Slider;                                       // 0x0220 (size: 0x8)
    class USpinBox* EFog_Start_Distance_Slider;                                       // 0x0228 (size: 0x8)
    class UCheckBox* EFog_Volumetric_Checkbox;                                        // 0x0230 (size: 0x8)
    class UExpandableArea* ExponentialFogExpandable;                                  // 0x0238 (size: 0x8)
    class UButton* InscatteringColor;                                                 // 0x0240 (size: 0x8)
    class UInvalidationBox* InvalidationBox_0;                                        // 0x0248 (size: 0x8)
    class UUI_Cine_TextBlock_C* Title;                                                // 0x0250 (size: 0x8)
    class UUI_Cine_SpinBox_C* UI_Cine_SpinBox;                                        // 0x0258 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock_C_0;                                 // 0x0260 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock_C_2;                                 // 0x0268 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock_C_4;                                 // 0x0270 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock_C_5;                                 // 0x0278 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock_C_6;                                 // 0x0280 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock_C_7;                                 // 0x0288 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock_C_8;                                 // 0x0290 (size: 0x8)
    class USpinBox* VolumetricStrength_Slider;                                        // 0x0298 (size: 0x8)
    class UExponentialHeightFogComponent* ExponentialFog;                             // 0x02A0 (size: 0x8)
    FString SearchTerm;                                                               // 0x02A8 (size: 0x10)

    void IGetRequestedBoolVariableValue(FString VariableName, bool& NewParam);
    void IGetCinematicCamera(class ABP_CameraActor_C*& BP_CameraActor);
    void IGetCinematicWidget(class UAdvancedUI_C*& CurrentWidget);
    void UpdateButton();
    void UpdateTitleColor();
    ESlateVisibility Get_ExponentialFogExpandable_Visibility_0();
    void GetFogColor(FSlateColor& SlateColor, FLinearColor& FogInscatteringColor);
    ECheckBoxState Get_Volumetric_CheckedState_0();
    FText Get_Start_Distance_Text_0();
    FText Fog_Height_Falloff();
    FText Get_Exp_Fog_Density();
    ECheckBoxState GetCheckedState_0();
    void IChangeButtonColor(FLinearColor Color);
    void IDoSearch(FText SearchParameter, bool Empty);
    void IUpdateSelectedAnimation(class UObject* CurrentPlayingAnimation);
    void IUpdateSelectedCharacter(class ACharacter* Character);
    void IUpdateSelectedLightActor(class AActor* LightActor);
    void IUpdateSelectedActor(class AActor* Actor);
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
    void BndEvt__CheckBox_66_K2Node_ComponentBoundEvent_99_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__Volumetric_K2Node_ComponentBoundEvent_239_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__SpinBox_160_K2Node_ComponentBoundEvent_3515_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SpinBox_162_K2Node_ComponentBoundEvent_3609_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SpinBox_161_K2Node_ComponentBoundEvent_3676_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SpinBox_163_K2Node_ComponentBoundEvent_4004_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SpinBox_165_K2Node_ComponentBoundEvent_4209_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SpinBox_164_K2Node_ComponentBoundEvent_4270_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void IUpdateEFog(class AActor* ExponentialHeightFogActor);
    void BndEvt__VolumetricStrength_Slider_K2Node_ComponentBoundEvent_390_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__InscatteringColor_K2Node_ComponentBoundEvent_144_OnButtonClickedEvent__DelegateSignature();
    void CustomEvent_0(FLinearColor NewColor);
    void OnDestroyed_Event_0(class AActor* DestroyedActor);
    void Construct();
    void ExecuteUbergraph_UI_ExponentialFog(int32 EntryPoint);
}; // Size: 0x2B8

#endif
