#ifndef UE4SS_SDK_BP_Gizmo_Base_HPP
#define UE4SS_SDK_BP_Gizmo_Base_HPP

class ABP_Gizmo_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)
    TEnumAsByte<EGizmoTransformMode::Type> GizmoType;                                 // 0x0328 (size: 0x1)
    class AActor* TargetActor;                                                        // 0x0330 (size: 0x8)
    class USceneComponent* TargetComponent;                                           // 0x0338 (size: 0x8)

    void IGetRequestedBoolVariableValue(FString VariableName, bool& NewParam);
    void IGetCinematicWidget(class UAdvancedUI_C*& CurrentWidget);
    void IGetCinematicCamera(class ABP_CameraActor_C*& BP_CameraActor);
    void CalculateCameraDistanceFromGizmo();
    void UserConstructionScript();
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
    void ReceiveBeginPlay();
    void IUpdateGizmoTransformMode(TEnumAsByte<EGizmoTransformMode::Type> Transformmode);
    void ExecuteUbergraph_BP_Gizmo_Base(int32 EntryPoint);
}; // Size: 0x340

#endif
