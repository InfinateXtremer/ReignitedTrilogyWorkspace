#ifndef UE4SS_SDK_UI_SubParticlesListPanel_HPP
#define UE4SS_SDK_UI_SubParticlesListPanel_HPP

class UUI_SubParticlesListPanel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UScrollBox* ActorList;                                                      // 0x0210 (size: 0x8)
    class UExpandableArea* LevelActorsArea;                                           // 0x0218 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_Cine_TextBlock;                                    // 0x0220 (size: 0x8)
    FString Level;                                                                    // 0x0228 (size: 0x10)

    void IGetRequestedBoolVariableValue(FString VariableName, bool& NewParam);
    void IGetCinematicCamera(class ABP_CameraActor_C*& BP_CameraActor);
    void IGetCinematicWidget(class UAdvancedUI_C*& CurrentWidget);
    ESlateVisibility Get_AllActorsArea_Visibility_0();
    FText Get_ActorName_Text_0();
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
    void BndEvt__Lights_K2Node_ComponentBoundEvent_2195_OnExpandableAreaExpansionChanged__DelegateSignature(class UExpandableArea* Area, bool bIsExpanded);
    void Construct();
    void ExecuteUbergraph_UI_SubParticlesListPanel(int32 EntryPoint);
}; // Size: 0x238

#endif
