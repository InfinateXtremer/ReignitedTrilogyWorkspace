#ifndef UE4SS_SDK_PostProcessButton_HPP
#define UE4SS_SDK_PostProcessButton_HPP

class UPostProcessButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UButton* Button;                                                            // 0x0210 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock_C_0;                                 // 0x0218 (size: 0x8)
    FText DisplayName;                                                                // 0x0220 (size: 0x18)
    class UAdvancedUI_C* MainUI;                                                      // 0x0238 (size: 0x8)
    bool Selected?;                                                                   // 0x0240 (size: 0x1)
    class APostProcessVolume* PostProcessVolume;                                      // 0x0248 (size: 0x8)
    class APostProcessVolume* _PostProcessVolume;                                     // 0x0250 (size: 0x8)

    void IGetRequestedBoolVariableValue(FString VariableName, bool& NewParam);
    void IGetCinematicCamera(class ABP_CameraActor_C*& BP_CameraActor);
    void IGetCinematicWidget(class UAdvancedUI_C*& CurrentWidget);
    void IUpdateColorWidget(class UWidget* NewWidget);
    FText Get_Button_ToolTipText_0();
    FText GetText_0();
    void IChangeButtonColor(FLinearColor Color);
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
    void IUpdateSelectedMaterial(class UMaterialInterface* NewParam);
    void IUpdateSelectedComponent(class UActorComponent* Component);
    void IUpdateGizmoTransformMode(TEnumAsByte<EGizmoTransformMode::Type> Transformmode);
    void BndEvt__LightButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void IDoSearch(FText SearchParameter, bool Empty);
    void IUpdateSelectedPostProcess(class APostProcessVolume* NewParam);
    void ExecuteUbergraph_PostProcessButton(int32 EntryPoint);
}; // Size: 0x258

#endif
