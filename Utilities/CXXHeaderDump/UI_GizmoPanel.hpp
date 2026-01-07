#ifndef UE4SS_SDK_UI_GizmoPanel_HPP
#define UE4SS_SDK_UI_GizmoPanel_HPP

class UUI_GizmoPanel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UUI_Cine_TextBlock_C* CineTextBlock;                                        // 0x0210 (size: 0x8)
    class UEditableTextBox* EditableTextBox_0;                                        // 0x0218 (size: 0x8)
    class UUI_Cine_ComboBox_C* UI_Cine_ComboBox;                                      // 0x0220 (size: 0x8)
    class UActorComponent* Component;                                                 // 0x0228 (size: 0x8)

    void IGetCinematicWidget(class UAdvancedUI_C*& CurrentWidget);
    void IGetCinematicCamera(class ABP_CameraActor_C*& BP_CameraActor);
    void IGetRequestedBoolVariableValue(FString VariableName, bool& NewParam);
    void IUpdateGizmoTransform(FString B);
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
    void IUpdateGizmoTransformMode(TEnumAsByte<EGizmoTransformMode::Type> Transformmode);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__ComboBoxString_0_K2Node_ComponentBoundEvent_26_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void IUpdateSelectedComponent(class UActorComponent* Component);
    void BndEvt__UI_Cine_ComboBox_K2Node_ComponentBoundEvent_38_OnSelectionChanged__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void Construct();
    void ExecuteUbergraph_UI_GizmoPanel(int32 EntryPoint);
}; // Size: 0x230

#endif
