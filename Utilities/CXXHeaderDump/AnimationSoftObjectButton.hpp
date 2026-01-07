#ifndef UE4SS_SDK_AnimationSoftObjectButton_HPP
#define UE4SS_SDK_AnimationSoftObjectButton_HPP

class UAnimationSoftObjectButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UButton* Button;                                                            // 0x0210 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock_C_0;                                 // 0x0218 (size: 0x8)
    class UUI_AnimationListPanel_C* MainUI;                                           // 0x0220 (size: 0x8)
    bool Selected?;                                                                   // 0x0228 (size: 0x1)
    class UAnimSequence* Animation;                                                   // 0x0230 (size: 0x8)
    TSoftObjectPtr<UAnimSequence> AnimSoftRefrence;                                   // 0x0238 (size: 0x28)

    void IGetRequestedBoolVariableValue(FString VariableName, bool& NewParam);
    void IGetCinematicCamera(class ABP_CameraActor_C*& BP_CameraActor);
    void IGetCinematicWidget(class UAdvancedUI_C*& CurrentWidget);
    void CheckHighligted();
    void OnLoaded_B437C7274DB39D431A2829841C5DAAB0(class UObject* Loaded);
    void IChangeButtonColor(FLinearColor Color);
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
    void BndEvt__Button_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void Destruct();
    void IDoSearch(FText SearchParameter, bool Empty);
    void Initialize();
    void IUpdateSelectedAnimation(class UObject* CurrentPlayingAnimation);
    void ExecuteUbergraph_AnimationSoftObjectButton(int32 EntryPoint);
}; // Size: 0x260

#endif
