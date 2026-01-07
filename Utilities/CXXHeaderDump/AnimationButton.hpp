#ifndef UE4SS_SDK_AnimationButton_HPP
#define UE4SS_SDK_AnimationButton_HPP

class UAnimationButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UButton* Button;                                                            // 0x0210 (size: 0x8)
    class UUI_Cine_TextBlock_C* CineTextBlock;                                        // 0x0218 (size: 0x8)
    FAssetData AnimationAsset;                                                        // 0x0220 (size: 0x50)
    class UUI_AnimationListPanel_C* MainUI;                                           // 0x0270 (size: 0x8)
    bool Selected?;                                                                   // 0x0278 (size: 0x1)
    class UAnimSequence* Animation;                                                   // 0x0280 (size: 0x8)

    void IGetRequestedBoolVariableValue(FString VariableName, bool& NewParam);
    void IGetCinematicCamera(class ABP_CameraActor_C*& BP_CameraActor);
    void IGetCinematicWidget(class UAdvancedUI_C*& CurrentWidget);
    void CheckHighligted();
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
    void ExecuteUbergraph_AnimationButton(int32 EntryPoint);
}; // Size: 0x288

#endif
