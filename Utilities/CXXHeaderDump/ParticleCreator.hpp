#ifndef UE4SS_SDK_ParticleCreator_HPP
#define UE4SS_SDK_ParticleCreator_HPP

class UParticleCreator_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UCheckBox* CheckBox_0;                                                      // 0x0210 (size: 0x8)
    class UUI_Cine_TextBlock_C* CineTextBlock;                                        // 0x0218 (size: 0x8)
    class UUI_Cine_TextBlock_C* CineTextBlock_0;                                      // 0x0220 (size: 0x8)
    class UExpandableArea* ExpandableArea_0;                                          // 0x0228 (size: 0x8)
    class UScrollBox* ScrollBox_1;                                                    // 0x0230 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_0;                                          // 0x0238 (size: 0x8)
    TArray<FAssetData> Assets;                                                        // 0x0240 (size: 0x10)
    bool CreateParticle?;                                                             // 0x0250 (size: 0x1)

    void IGetCinematicWidget(class UAdvancedUI_C*& CurrentWidget);
    void IGetCinematicCamera(class ABP_CameraActor_C*& BP_CameraActor);
    void IGetRequestedBoolVariableValue(FString VariableName, bool& NewParam);
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
    void BndEvt__ExpandableArea_0_K2Node_ComponentBoundEvent_2_OnExpandableAreaExpansionChanged__DelegateSignature(class UExpandableArea* Area, bool bIsExpanded);
    void BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_32_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void ExecuteUbergraph_ParticleCreator(int32 EntryPoint);
}; // Size: 0x251

#endif
