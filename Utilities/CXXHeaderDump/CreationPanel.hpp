#ifndef UE4SS_SDK_CreationPanel_HPP
#define UE4SS_SDK_CreationPanel_HPP

class UCreationPanel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UCharacterCreation_C* CharacterCreation;                                    // 0x0210 (size: 0x8)
    class UUI_Cine_TextBlock_C* CineTextBlock;                                        // 0x0218 (size: 0x8)
    class UExpandableArea* ExpandableArea_1;                                          // 0x0220 (size: 0x8)
    class ULightCreation_C* LightCreation;                                            // 0x0228 (size: 0x8)

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
    void ExecuteUbergraph_CreationPanel(int32 EntryPoint);
}; // Size: 0x230

#endif
