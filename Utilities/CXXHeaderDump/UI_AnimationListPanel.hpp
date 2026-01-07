#ifndef UE4SS_SDK_UI_AnimationListPanel_HPP
#define UE4SS_SDK_UI_AnimationListPanel_HPP

class UUI_AnimationListPanel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UScrollBox* AnimationList;                                                  // 0x0210 (size: 0x8)
    class UExpandableArea* AnimationsArea;                                            // 0x0218 (size: 0x8)
    class UUI_Cine_TextBlock_C* CineTextBlock;                                        // 0x0220 (size: 0x8)
    class ACharacter* UICharacterActor;                                               // 0x0228 (size: 0x8)
    class UObject* CurrentPlayingAnimation;                                           // 0x0230 (size: 0x8)
    class ACharacter* CurrentCharacter;                                               // 0x0238 (size: 0x8)
    TArray<FName> AnimationPathArray;                                                 // 0x0240 (size: 0x10)
    class UDataTable* AnimPaths_DT;                                                   // 0x0250 (size: 0x8)
    FString SelectorActorClassName;                                                   // 0x0258 (size: 0x10)
    TArray<class UDataTable*> AnimationDTList;                                        // 0x0268 (size: 0x10)

    void IGetRequestedBoolVariableValue(FString VariableName, bool& NewParam);
    void IGetCinematicCamera(class ABP_CameraActor_C*& BP_CameraActor);
    void IGetCinematicWidget(class UAdvancedUI_C*& CurrentWidget);
    void UpdateWidgetStatus();
    void FindAnimationsFromAssetRegistry(bool Condition);
    FText Get_ActorName_Text_0();
    void IChangeButtonColor(FLinearColor Color);
    void IDoSearch(FText SearchParameter, bool Empty);
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
    void BndEvt__Animations_K2Node_ComponentBoundEvent_5250_OnExpandableAreaExpansionChanged__DelegateSignature(class UExpandableArea* Area, bool bIsExpanded);
    void IUpdateSelectedCharacter(class ACharacter* Character);
    void IUpdateSelectedAnimation(class UObject* CurrentPlayingAnimation);
    void ClearList();
    void SetupRegistryPathFromDT();
    void AddAnimationsFromDT();
    void Construct();
    void ExecuteUbergraph_UI_AnimationListPanel(int32 EntryPoint);
}; // Size: 0x278

#endif
