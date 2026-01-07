#ifndef UE4SS_SDK_UI_Button_ComponentTemplate_HPP
#define UE4SS_SDK_UI_Button_ComponentTemplate_HPP

class UUI_Button_ComponentTemplate_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UButton* Button;                                                            // 0x0210 (size: 0x8)
    class UUI_Cine_TextBlock_C* CineTextBlock;                                        // 0x0218 (size: 0x8)
    class UActorComponent* Component;                                                 // 0x0220 (size: 0x8)
    bool Selected?;                                                                   // 0x0228 (size: 0x1)
    FText ActorName;                                                                  // 0x0230 (size: 0x18)
    FText ComponentType;                                                              // 0x0248 (size: 0x18)

    void IGetRequestedBoolVariableValue(FString VariableName, bool& NewParam);
    void IGetCinematicCamera(class ABP_CameraActor_C*& BP_CameraActor);
    void IGetCinematicWidget(class UAdvancedUI_C*& CurrentWidget);
    void GetComponentDetails(FString& ComponentDetails);
    void ButtonClicked();
    void FindGizmo(class USceneComponent* TargetComponent, class ABP_Gizmo_Base_C*& Gizmo, bool& bIsValid);
    void CreateGizmo(class USceneComponent* SceneComponent);
    void Unselect();
    void Select();
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
    void IUpdateGizmoTransformMode(TEnumAsByte<EGizmoTransformMode::Type> Transformmode);
    void Construct();
    void BndEvt__Button_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature();
    void IDoSearch(FText SearchParameter, bool Empty);
    void Initiliaze();
    void IUpdateSelectedComponent(class UActorComponent* Component);
    void ExecuteUbergraph_UI_Button_ComponentTemplate(int32 EntryPoint);
}; // Size: 0x260

#endif
