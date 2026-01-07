#ifndef UE4SS_SDK_LightCreation_HPP
#define UE4SS_SDK_LightCreation_HPP

class ULightCreation_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UButton* BtnCreateAreaLight;                                                // 0x0210 (size: 0x8)
    class UButton* BtnCreateSpotLight;                                                // 0x0218 (size: 0x8)
    class UCheckBox* ChkbxCharacterOnly?;                                             // 0x0220 (size: 0x8)
    class UUI_Cine_TextBlock_C* CineTextBlock_0;                                      // 0x0228 (size: 0x8)
    class UUI_Cine_TextBlock_C* CineTextBlock_C_1;                                    // 0x0230 (size: 0x8)
    class UUI_Cine_TextBlock_C* CineTextBlock_C_3;                                    // 0x0238 (size: 0x8)
    class UUI_Cine_TextBlock_C* CineTextBlock_C_4;                                    // 0x0240 (size: 0x8)
    class UExpandableArea* ExpandableArea_0;                                          // 0x0248 (size: 0x8)

    void IGetRequestedBoolVariableValue(FString VariableName, bool& NewParam);
    void IGetCinematicCamera(class ABP_CameraActor_C*& BP_CameraActor);
    void IGetCinematicWidget(class UAdvancedUI_C*& CurrentWidget);
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
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BtnCreateAreaLight_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_LightCreation(int32 EntryPoint);
}; // Size: 0x250

#endif
