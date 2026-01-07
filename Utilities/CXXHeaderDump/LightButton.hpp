#ifndef UE4SS_SDK_LightButton_HPP
#define UE4SS_SDK_LightButton_HPP

class ULightButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UButton* Button;                                                            // 0x0210 (size: 0x8)
    class UUI_Cine_TextBlock_C* CineTextBlock;                                        // 0x0218 (size: 0x8)
    FText DisplayName;                                                                // 0x0220 (size: 0x18)
    class AActor* NewLightActor;                                                      // 0x0238 (size: 0x8)
    FLinearColor DefaultLight;                                                        // 0x0240 (size: 0x10)
    float DefaultIntensity;                                                           // 0x0250 (size: 0x4)
    bool Selected?;                                                                   // 0x0254 (size: 0x1)
    class UObject* Orbit;                                                             // 0x0258 (size: 0x8)
    class AActor* _LightActor;                                                        // 0x0260 (size: 0x8)

    void IGetRequestedBoolVariableValue(FString VariableName, bool& NewParam);
    void IGetCinematicCamera(class ABP_CameraActor_C*& BP_CameraActor);
    void IGetCinematicWidget(class UAdvancedUI_C*& CurrentWidget);
    void SetupButtonColorNew();
    FText Get_Button_ToolTipText_0();
    void SetupButtonColors(class ULightButton_C* LightButton);
    void BndEvt__LightButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature();
    void IUpdateGizmoTransformMode(TEnumAsByte<EGizmoTransformMode::Type> Transformmode);
    void IUpdateSelectedComponent(class UActorComponent* Component);
    void IUpdateSelectedMaterial(class UMaterialInterface* NewParam);
    void IUpdateColorWidget(class UWidget* NewWidget);
    void IUpdateSelectedPostProcess(class APostProcessVolume* NewParam);
    void IUpdateSelectedParticleComponent(class UParticleSystemComponent* Emitter);
    void IUnPauseGame();
    void IPauseGame();
    void IUpdateSelectedSkybox(class AActor* Skybox);
    void IUpdateDrivableLightActor(class APawn* Pawn);
    void IUpdateSkeletalMeshForAnimation(class USkeletalMeshComponent* SkeletalMesh);
    void IUpdateSelectedActor(class AActor* Actor);
    void IUpdateEFog(class AActor* ExponentialHeightFogActor);
    void IUpdateSelectedCharacter(class ACharacter* Character);
    void IUpdateSelectedAnimation(class UObject* CurrentPlayingAnimation);
    void IChangeButtonColor(FLinearColor Color);
    void Construct();
    void IDoSearch(FText SearchParameter, bool Empty);
    void Initialize();
    void RemoveFromUI(class AActor* DestroyedActor);
    void IUpdateSelectedLightActor(class AActor* LightActor);
    void ExecuteUbergraph_LightButton(int32 EntryPoint);
}; // Size: 0x268

#endif
