#ifndef UE4SS_SDK_BP_CameraActor_HPP
#define UE4SS_SDK_BP_CameraActor_HPP

class ABP_CameraActor_C : public APawn
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0378 (size: 0x8)
    class UPhysicsHandleComponent* PhysicsHandle;                                     // 0x0380 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0388 (size: 0x8)
    class UCineCameraComponent* Camera;                                               // 0x0390 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0398 (size: 0x8)
    class UFloatingPawnMovement* FloatingPawnMovement;                                // 0x03A0 (size: 0x8)
    class UTextRenderComponent* Hypercam2Text;                                        // 0x03A8 (size: 0x8)
    class UTextRenderComponent* TextRender1;                                          // 0x03B0 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x03B8 (size: 0x8)
    class UMaterialInstanceDynamic* BWEffect;                                         // 0x03C0 (size: 0x8)
    class UMaterialInstanceDynamic* OutlineEffect;                                    // 0x03C8 (size: 0x8)
    bool HoldingObject;                                                               // 0x03D0 (size: 0x1)
    class AActor* CurrentHoldingActor;                                                // 0x03D8 (size: 0x8)

    void IGetRequestedBoolVariableValue(FString VariableName, bool& NewParam);
    void IGetCinematicCamera(class ABP_CameraActor_C*& BP_CameraActor);
    void IGetCinematicWidget(class UAdvancedUI_C*& CurrentWidget);
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
    void IUpdateGizmoTransformMode(TEnumAsByte<EGizmoTransformMode::Type> Transformmode);
    void ICaptureScene();
    void IDoPickup();
    void IDoRestore();
    void IMoveDown(float Axis);
    void IJump();
    void IMoveForward(float Value);
    void IMoveRight(float Value);
    void IMoveUp(float Axis);
    void IWheelUp();
    void IWheelDown();
    void ICameraAxisX(float Axis);
    void ICameraAxisY(float Axis);
    void ISlowDown(bool Active?);
    void ISpeedUp(bool Active?);
    void IDoFocus(bool Holding);
    void ExecuteUbergraph_BP_CameraActor(int32 EntryPoint);
}; // Size: 0x3E0

#endif
