#ifndef UE4SS_SDK_ParticleButton_HPP
#define UE4SS_SDK_ParticleButton_HPP

class UParticleButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UButton* Button;                                                            // 0x0210 (size: 0x8)
    class UUI_Cine_TextBlock_C* CineTextBlock;                                        // 0x0218 (size: 0x8)
    class UParticleSystemComponent* ParticleSystemComponent;                          // 0x0220 (size: 0x8)
    bool Selected?;                                                                   // 0x0228 (size: 0x1)
    class UParticleSystemComponent* _NewParticleSystem;                               // 0x0230 (size: 0x8)

    void IGetRequestedBoolVariableValue(FString VariableName, bool& NewParam);
    void IGetCinematicCamera(class ABP_CameraActor_C*& BP_CameraActor);
    void IGetCinematicWidget(class UAdvancedUI_C*& CurrentWidget);
    void Select(bool Selected?, class AActor* Actor);
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
    void IUpdateSelectedPostProcess(class APostProcessVolume* NewParam);
    void IUpdateColorWidget(class UWidget* NewWidget);
    void IUpdateSelectedMaterial(class UMaterialInterface* NewParam);
    void IUpdateSelectedComponent(class UActorComponent* Component);
    void IUpdateGizmoTransformMode(TEnumAsByte<EGizmoTransformMode::Type> Transformmode);
    void CheckForSelection();
    void IDoSearch(FText SearchParameter, bool Empty);
    void BndEvt__Button_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void IUpdateSelectedParticleComponent(class UParticleSystemComponent* Emitter);
    void Initialize();
    void Remove FromUI(class AActor* DestroyedActor);
    void ExecuteUbergraph_ParticleButton(int32 EntryPoint);
}; // Size: 0x238

#endif
