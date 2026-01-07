#ifndef UE4SS_SDK_EFogButton_HPP
#define UE4SS_SDK_EFogButton_HPP

class UEFogButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UButton* Button;                                                            // 0x0210 (size: 0x8)
    class UUI_Cine_TextBlock_C* CineTextBlock;                                        // 0x0218 (size: 0x8)
    FText DisplayName;                                                                // 0x0220 (size: 0x18)
    class UExponentialHeightFogComponent* FogComponent;                               // 0x0238 (size: 0x8)
    class UAdvancedUI_C* MainUI;                                                      // 0x0240 (size: 0x8)
    bool Selected?;                                                                   // 0x0248 (size: 0x1)
    class AActor* FogActor;                                                           // 0x0250 (size: 0x8)
    class AActor* _NewFog;                                                            // 0x0258 (size: 0x8)

    void IGetRequestedBoolVariableValue(FString VariableName, bool& NewParam);
    void IGetCinematicCamera(class ABP_CameraActor_C*& BP_CameraActor);
    void IGetCinematicWidget(class UAdvancedUI_C*& CurrentWidget);
    void IChangeButtonColor(FLinearColor Color);
    void IUpdateSelectedAnimation(class UObject* CurrentPlayingAnimation);
    void IUpdateSelectedCharacter(class ACharacter* Character);
    void IUpdateSelectedLightActor(class AActor* LightActor);
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
    void BndEvt__LightButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void IDoSearch(FText SearchParameter, bool Empty);
    void IUpdateEFog(class AActor* ExponentialHeightFogActor);
    void Initialize();
    void RemoveFromUI(class AActor* DestroyedActor);
    void ExecuteUbergraph_EFogButton(int32 EntryPoint);
}; // Size: 0x260

#endif
