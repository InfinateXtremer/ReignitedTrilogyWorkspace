#ifndef UE4SS_SDK_UI_Poseable_HPP
#define UE4SS_SDK_UI_Poseable_HPP

class UUI_Poseable_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UButton* Button_0;                                                          // 0x0210 (size: 0x8)
    class UUI_Cine_ComboBox_C* CineComboBox;                                          // 0x0218 (size: 0x8)
    class UUI_Cine_TextBlock_C* CineTextBlock;                                        // 0x0220 (size: 0x8)
    class UUI_Cine_TextBlock_C* CineTextBlock_0;                                      // 0x0228 (size: 0x8)
    class UUI_Cine_TextBlock_C* CineTextBlock_1;                                      // 0x0230 (size: 0x8)
    class UUI_Cine_TextBlock_C* CineTextBlock_2;                                      // 0x0238 (size: 0x8)
    class UExpandableArea* ExpandableArea_0;                                          // 0x0240 (size: 0x8)
    class UExpandableArea* ExpandableArea_1;                                          // 0x0248 (size: 0x8)
    class UMultiLineEditableTextBox* MultiLineEditableTextBox_0;                      // 0x0250 (size: 0x8)
    class ACharacter* SelectedCharacter;                                              // 0x0258 (size: 0x8)
    class ABP_Posable_Character_C* BP_PoseAsset;                                      // 0x0260 (size: 0x8)

    void IGetRequestedBoolVariableValue(FString VariableName, bool& NewParam);
    void IGetCinematicWidget(class UAdvancedUI_C*& CurrentWidget);
    void IGetCinematicCamera(class ABP_CameraActor_C*& BP_CameraActor);
    void UpdateEmotes();
    void IChangeButtonColor(FLinearColor Color);
    void IDoSearch(FText SearchParameter, bool Empty);
    void IUpdateSelectedAnimation(class UObject* CurrentPlayingAnimation);
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
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void IUpdateSelectedCharacter(class ACharacter* Character);
    void Construct();
    void BndEvt__Button_2_K2Node_ComponentBoundEvent_91_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__MultiLineEditableTextBox_0_K2Node_ComponentBoundEvent_25_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__CineComboBox_K2Node_ComponentBoundEvent_114_OnSelectionChanged__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void ExecuteUbergraph_UI_Poseable(int32 EntryPoint);
}; // Size: 0x268

#endif
