#ifndef UE4SS_SDK_CharactersButton_HPP
#define UE4SS_SDK_CharactersButton_HPP

class UCharactersButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UButton* Button;                                                            // 0x0210 (size: 0x8)
    class UUI_Cine_TextBlock_C* CineTextBlock;                                        // 0x0218 (size: 0x8)
    class UAdvancedUI_C* MainUI;                                                      // 0x0220 (size: 0x8)
    bool Selected?;                                                                   // 0x0228 (size: 0x1)
    class ACharacter* Character;                                                      // 0x0230 (size: 0x8)
    class ACharacter* _NewCharacter;                                                  // 0x0238 (size: 0x8)

    void IGetRequestedBoolVariableValue(FString VariableName, bool& NewParam);
    void IGetCinematicCamera(class ABP_CameraActor_C*& BP_CameraActor);
    void IGetCinematicWidget(class UAdvancedUI_C*& CurrentWidget);
    void CheckHighlighted();
    void IChangeButtonColor(FLinearColor Color);
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
    void BndEvt__LightButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature();
    void CheckForSelection();
    void Construct();
    void BndEvt__Button_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_K2Node_ComponentBoundEvent_50_OnButtonHoverEvent__DelegateSignature();
    void IDoSearch(FText SearchParameter, bool Empty);
    void IUpdateSelectedCharacter(class ACharacter* Character);
    void Initialize();
    void RemoveFromUI(class AActor* DestroyedActor);
    void ExecuteUbergraph_CharactersButton(int32 EntryPoint);
}; // Size: 0x240

#endif
