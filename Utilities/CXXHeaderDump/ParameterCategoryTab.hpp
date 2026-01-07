#ifndef UE4SS_SDK_ParameterCategoryTab_HPP
#define UE4SS_SDK_ParameterCategoryTab_HPP

class UParameterCategoryTab_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UExpandableArea* ExpandableArea_0;                                          // 0x0210 (size: 0x8)
    class UScrollBox* ScrollBox_1;                                                    // 0x0218 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock;                                     // 0x0220 (size: 0x8)
    class UMaterialInterface* Material;                                               // 0x0228 (size: 0x8)
    FString CategoryName;                                                             // 0x0230 (size: 0x10)
    FMaterialVariable MaterialVariables;                                              // 0x0240 (size: 0x50)

    void IGetRequestedBoolVariableValue(FString VariableName, bool& NewParam);
    void IGetCinematicCamera(class ABP_CameraActor_C*& BP_CameraActor);
    void IGetCinematicWidget(class UAdvancedUI_C*& CurrentWidget);
    void HandleParameterButtonCreation();
    class UVectorPameter_C* CreateVectorWidget(FString inString);
    class UScalarParameter_C* CreateScalarWidget(FString inString);
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
    void IUpdateSelectedComponent(class UActorComponent* Component);
    void IUpdateGizmoTransformMode(TEnumAsByte<EGizmoTransformMode::Type> Transformmode);
    void BndEvt__ExpandableArea_0_K2Node_ComponentBoundEvent_6_OnExpandableAreaExpansionChanged__DelegateSignature(class UExpandableArea* Area, bool bIsExpanded);
    void IUpdateSelectedMaterial(class UMaterialInterface* NewParam);
    void Construct();
    void ExecuteUbergraph_ParameterCategoryTab(int32 EntryPoint);
}; // Size: 0x290

#endif
