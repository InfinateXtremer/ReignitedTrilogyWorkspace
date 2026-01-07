#ifndef UE4SS_SDK_UI_ParticleParameterOptions_HPP
#define UE4SS_SDK_UI_ParticleParameterOptions_HPP

class UUI_ParticleParameterOptions_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UCheckBox* CheckBox_0;                                                      // 0x0210 (size: 0x8)
    class UUI_Cine_TextBlock_C* CineTextBlock;                                        // 0x0218 (size: 0x8)
    class UUI_Cine_TextBlock_C* CineTextBlock_0;                                      // 0x0220 (size: 0x8)
    class UExpandableArea* ExpandableArea_0;                                          // 0x0228 (size: 0x8)
    class UVerticalBox* ParameterList;                                                // 0x0230 (size: 0x8)
    class USlider* Slider_0;                                                          // 0x0238 (size: 0x8)
    class USpinBox* SpinBox_0;                                                        // 0x0240 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock_C_0;                                 // 0x0248 (size: 0x8)
    class UParticleSystemComponent* Emitter;                                          // 0x0250 (size: 0x8)
    float TimeToSet;                                                                  // 0x0258 (size: 0x4)
    class UDataTable* ParticleDatatable;                                              // 0x0260 (size: 0x8)

    void IGetRequestedBoolVariableValue(FString VariableName, bool& NewParam);
    void IGetCinematicCamera(class ABP_CameraActor_C*& BP_CameraActor);
    void IGetCinematicWidget(class UAdvancedUI_C*& CurrentWidget);
    void AddParameterFromDTable();
    void UpdateHeaderName();
    void ClearAndHide();
    void HandleParameterCreation(TEnumAsByte<EParticleSysParamType> Selection, FParticleSysParam ParticleParameter, class UParticleSystemComponent* ParticleSystemComponent);
    ECheckBoxState GetActiveState();
    ESlateVisibility GetMenuVisibility();
    void Get_ParticleName();
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
    void IUpdateSelectedPostProcess(class APostProcessVolume* NewParam);
    void IUpdateColorWidget(class UWidget* NewWidget);
    void IUpdateSelectedMaterial(class UMaterialInterface* NewParam);
    void IUpdateSelectedComponent(class UActorComponent* Component);
    void IUpdateGizmoTransformMode(TEnumAsByte<EGizmoTransformMode::Type> Transformmode);
    void PopulateList();
    void BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void IUpdateSelectedParticleComponent(class UParticleSystemComponent* Emitter);
    void TriggerHide(class AActor* DestroyedActor);
    void Construct();
    void BndEvt__Slider_0_K2Node_ComponentBoundEvent_54_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_80_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void UpdateParticleSpeed(float ParticleSpeed);
    void ExecuteUbergraph_UI_ParticleParameterOptions(int32 EntryPoint);
}; // Size: 0x268

#endif
