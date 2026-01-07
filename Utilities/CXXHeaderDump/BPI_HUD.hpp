#ifndef UE4SS_SDK_BPI_HUD_HPP
#define UE4SS_SDK_BPI_HUD_HPP

class IBPI_HUD_C : public IInterface
{

    void IGetRequestedBoolVariableValue(FString VariableName, bool& NewParam);
    void IUpdateGizmoTransformMode(TEnumAsByte<EGizmoTransformMode::Type> Transformmode);
    void IGetCinematicCamera(class ABP_CameraActor_C*& BP_CameraActor);
    void IGetCinematicWidget(class UAdvancedUI_C*& CurrentWidget);
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
    void IUpdateSelectedLightActor(class AActor* LightActor);
    void IUpdateSelectedCharacter(class ACharacter* Character);
    void IUpdateSelectedAnimation(class UObject* CurrentPlayingAnimation);
    void IDoSearch(FText SearchParameter, bool Empty);
    void IChangeButtonColor(FLinearColor Color);
}; // Size: 0x28

#endif
