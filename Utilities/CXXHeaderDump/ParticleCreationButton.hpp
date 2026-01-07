#ifndef UE4SS_SDK_ParticleCreationButton_HPP
#define UE4SS_SDK_ParticleCreationButton_HPP

class UParticleCreationButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UButton* Button;                                                            // 0x0210 (size: 0x8)
    class UUI_Cine_TextBlock_C* CineTextBlockText;                                    // 0x0218 (size: 0x8)
    FAssetData AnimationAsset;                                                        // 0x0220 (size: 0x50)
    bool Selected?;                                                                   // 0x0270 (size: 0x1)
    class UParticleSystem* ParticleSystem;                                            // 0x0278 (size: 0x8)
    bool CreateMode;                                                                  // 0x0280 (size: 0x1)
    class UParticleCreator_C* ParticleListWidget;                                     // 0x0288 (size: 0x8)

    void IGetRequestedBoolVariableValue(FString VariableName, bool& NewParam);
    void IGetCinematicCamera(class ABP_CameraActor_C*& BP_CameraActor);
    void IGetCinematicWidget(class UAdvancedUI_C*& CurrentWidget);
    void GetParticleCreationVariable(bool& Value);
    void SpawnUpdateParticleBrowser(class UParticleSystem* NewTemplate);
    void SpawnParticleSystem(class UParticleSystem* NewTemplate);
    void CheckHighligted();
    void OnLoaded_D7EBF3194997FAD8A855399E04D1CC27(class UObject* Loaded);
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
    void IUpdateSelectedAnimation(class UObject* CurrentPlayingAnimation);
    void IChangeButtonColor(FLinearColor Color);
    void IUpdateSelectedCharacter(class ACharacter* Character);
    void IDoSearch(FText SearchParameter, bool Empty);
    void Initialize();
    void ExecuteUbergraph_ParticleCreationButton(int32 EntryPoint);
}; // Size: 0x290

#endif
