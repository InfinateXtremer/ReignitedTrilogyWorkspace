#ifndef UE4SS_SDK_Components_HPP
#define UE4SS_SDK_Components_HPP

class UComponents_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UUI_Cine_TextBlock_C* CineTextBlock;                                        // 0x0210 (size: 0x8)
    class UEditableTextBox* EditableTextBox_0;                                        // 0x0218 (size: 0x8)
    class UExpandableArea* ExpandableArea_0;                                          // 0x0220 (size: 0x8)
    class UScrollBox* ScrollBox_1;                                                    // 0x0228 (size: 0x8)
    class UScrollBox* ScrollBox_2;                                                    // 0x0230 (size: 0x8)
    class AActor* Actor;                                                              // 0x0238 (size: 0x8)
    TArray<FString> ComponentList;                                                    // 0x0240 (size: 0x10)
    TArray<FString> TagList;                                                          // 0x0250 (size: 0x10)
    FString ActorData;                                                                // 0x0260 (size: 0x10)

    void IGetRequestedBoolVariableValue(FString VariableName, bool& NewParam);
    void IGetCinematicCamera(class ABP_CameraActor_C*& BP_CameraActor);
    void IGetCinematicWidget(class UAdvancedUI_C*& CurrentWidget);
    void InıtActor(class AActor* Actor);
    void UpdateAbilityTags();
    void InitComponent(TArray<class UActorComponent*>& ComponentArray);
    void ClearListWidget();
    void CreateWidgetForComponent(class UActorComponent* Component);
    void ClearStringList();
    void IChangeButtonColor(FLinearColor Color);
    void IDoSearch(FText SearchParameter, bool Empty);
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
    void IUpdateSelectedActor(class AActor* Actor);
    void Construct();
    void CustomEvent_0(class AActor* DestroyedActor);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_Components(int32 EntryPoint);
}; // Size: 0x270

#endif
