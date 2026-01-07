#ifndef UE4SS_SDK_Colormap_HPP
#define UE4SS_SDK_Colormap_HPP

class UColormap_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class USlider* AlphaSlider;                                                       // 0x0210 (size: 0x8)
    class USpinBox* AlphaSpinBox;                                                     // 0x0218 (size: 0x8)
    class UButton* Button_57;                                                         // 0x0220 (size: 0x8)
    class USlider* Hue_Slider;                                                        // 0x0228 (size: 0x8)
    class USpinBox* HueSpinbox;                                                       // 0x0230 (size: 0x8)
    class USlider* Saturation_Slider;                                                 // 0x0238 (size: 0x8)
    class USpinBox* SaturationSpinbox;                                                // 0x0240 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock_C_0;                                 // 0x0248 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock_C_1;                                 // 0x0250 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock_C_2;                                 // 0x0258 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock_C_3;                                 // 0x0260 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock_C_4;                                 // 0x0268 (size: 0x8)
    class USlider* ValueSlider;                                                       // 0x0270 (size: 0x8)
    class USpinBox* ValueSpinbox;                                                     // 0x0278 (size: 0x8)
    FLinearColor CurrentColor;                                                        // 0x0280 (size: 0x10)
    FColormap_COnColorUpdated OnColorUpdated;                                         // 0x0290 (size: 0x10)
    class UMaterialInstanceDynamic* SaturationMat;                                    // 0x02A0 (size: 0x8)
    class UMaterialInstanceDynamic* ValueMat;                                         // 0x02A8 (size: 0x8)

    void IGetRequestedBoolVariableValue(FString VariableName, bool& NewParam);
    void IGetCinematicCamera(class ABP_CameraActor_C*& BP_CameraActor);
    void IGetCinematicWidget(class UAdvancedUI_C*& CurrentWidget);
    float Get_AlphaSpinBox_Value_0();
    float Get_AlphaSlider_Value_0();
    void UpdateAlpha(float Value, FLinearColor& Color);
    ESlateVisibility Get_Value_Slider_Visibility_0();
    ESlateVisibility Get_Saturation_Slider_Visibility_0();
    float Get_HueSpinbox_Value_0();
    void UpdateValue(float Value, FLinearColor& Color);
    void UpdateSaturation(float Saturation, FLinearColor& Color);
    FText Get_ValueValue_Text_0();
    float Get_ValueSlider_Value_0();
    FText Get_HueValue_Text_0();
    FText Get_SaturationValue_Text_0();
    float Get_Saturation_Slider_Value_0();
    float Get_Hue_Slider_Value_0();
    void UpdateHue(float Hue, bool FullValueRange?);
    void IChangeButtonColor(FLinearColor Color);
    void IDoSearch(FText SearchParameter, bool Empty);
    void IUpdateSelectedAnimation(class UObject* CurrentPlayingAnimation);
    void IUpdateSelectedCharacter(class ACharacter* Character);
    void IUpdateSelectedLightActor(class AActor* LightActor);
    void IUpdateEFog(class AActor* ExponentialHeightFogActor);
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
    void BndEvt__Hue_Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__Saturation_Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__Button_57_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ValueSlider_K2Node_ComponentBoundEvent_129_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__SpinBox_1_K2Node_ComponentBoundEvent_217_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__HueSpinbox_K2Node_ComponentBoundEvent_284_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SaturationSpinbox_K2Node_ComponentBoundEvent_302_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void UpdateColor(const FLinearColor& NewParam);
    void BndEvt__AlphaSlider_K2Node_ComponentBoundEvent_137_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__AlphaSpinBox_K2Node_ComponentBoundEvent_337_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void ExecuteUbergraph_Colormap(int32 EntryPoint);
    void OnColorUpdated__DelegateSignature(FLinearColor NewColor);
}; // Size: 0x2B0

#endif
