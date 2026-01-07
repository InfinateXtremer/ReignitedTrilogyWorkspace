#ifndef UE4SS_SDK_UI_MaterialPanel_HPP
#define UE4SS_SDK_UI_MaterialPanel_HPP

class UUI_MaterialPanel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UVerticalBox* BodyMaterial;                                                 // 0x0210 (size: 0x8)
    class UComboBoxString* TextureSlotBox;                                            // 0x0218 (size: 0x8)
    class UEditableTextBox* TextureURL;                                               // 0x0220 (size: 0x8)
    class UComboBoxString* TextureVariableBox;                                        // 0x0228 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock;                                     // 0x0230 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock_C_0;                                 // 0x0238 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock_C_1;                                 // 0x0240 (size: 0x8)
    class APawn* DrivableLightActor;                                                  // 0x0248 (size: 0x8)
    class UCineCameraComponent* Camera;                                               // 0x0250 (size: 0x8)
    class ABP_CameraActor_C* CameraActor;                                             // 0x0258 (size: 0x8)
    class ACharacter* UICharacterActor;                                               // 0x0260 (size: 0x8)

    void IGetRequestedBoolVariableValue(FString VariableName, bool& NewParam);
    void IGetCinematicCamera(class ABP_CameraActor_C*& BP_CameraActor);
    void IGetCinematicWidget(class UAdvancedUI_C*& CurrentWidget);
    ESlateVisibility GetMenuVisibility();
    FText Get_ActorName_Text_0();
    void OnFail_705D28AD43CFC44E7BFA8ABB8888E16B(class UTexture2DDynamic* Texture);
    void OnSuccess_705D28AD43CFC44E7BFA8ABB8888E16B(class UTexture2DDynamic* Texture);
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
    void BndEvt__EditableTextBox_106_K2Node_ComponentBoundEvent_159_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__ComboBoxString_74_K2Node_ComponentBoundEvent_929_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void IUpdateSelectedCharacter(class ACharacter* Character);
    void UpdateMaterialNames();
    void ExecuteUbergraph_UI_MaterialPanel(int32 EntryPoint);
}; // Size: 0x268

#endif
