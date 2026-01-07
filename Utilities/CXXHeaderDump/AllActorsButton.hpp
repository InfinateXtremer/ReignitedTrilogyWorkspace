#ifndef UE4SS_SDK_AllActorsButton_HPP
#define UE4SS_SDK_AllActorsButton_HPP

class UAllActorsButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UButton* Button;                                                            // 0x0210 (size: 0x8)
    class UUI_Cine_TextBlock_C* CineTextBlock_C_0;                                    // 0x0218 (size: 0x8)
    class AActor* Actor;                                                              // 0x0220 (size: 0x8)
    bool Selected?;                                                                   // 0x0228 (size: 0x1)
    FText ActorName;                                                                  // 0x0230 (size: 0x18)
    class AActor* NewActor;                                                           // 0x0248 (size: 0x8)
    class ABP_Gizmo_Base_C* Gizmo;                                                    // 0x0250 (size: 0x8)

    void IGetRequestedBoolVariableValue(FString VariableName, bool& NewParam);
    void IGetCinematicCamera(class ABP_CameraActor_C*& BP_CameraActor);
    void IGetCinematicWidget(class UAdvancedUI_C*& CurrentWidget);
    void FindGizmo(class ABP_Gizmo_Base_C*& AsBP Gizmo Base);
    void DestroyGizmo();
    void UpdateGizmo();
    void Select(bool Selected?, class AActor* Actor);
    void IChangeButtonColor(FLinearColor Color);
    void IUpdateSelectedAnimation(class UObject* CurrentPlayingAnimation);
    void IUpdateSelectedCharacter(class ACharacter* Character);
    void IUpdateSelectedLightActor(class AActor* LightActor);
    void IUpdateEFog(class AActor* ExponentialHeightFogActor);
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
    void Construct();
    void CheckForSelection();
    void IDoSearch(FText SearchParameter, bool Empty);
    void Initiliaze();
    void IUpdateSelectedActor(class AActor* Actor);
    void BndEvt__Button_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature();
    void Destruct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_AllActorsButton(int32 EntryPoint);
}; // Size: 0x258

#endif
