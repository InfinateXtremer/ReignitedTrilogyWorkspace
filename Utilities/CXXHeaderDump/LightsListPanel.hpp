#ifndef UE4SS_SDK_LightsListPanel_HPP
#define UE4SS_SDK_LightsListPanel_HPP

class ULightsListPanel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UUI_Cine_TextBlock_C* CineTextBlock;                                        // 0x0210 (size: 0x8)
    class UScrollBox* LightList;                                                      // 0x0218 (size: 0x8)
    class UExpandableArea* LightsArea;                                                // 0x0220 (size: 0x8)
    class APawn* DrivableLightActor;                                                  // 0x0228 (size: 0x8)
    class UCineCameraComponent* Camera;                                               // 0x0230 (size: 0x8)
    class ABP_CameraActor_C* CameraActor;                                             // 0x0238 (size: 0x8)
    class ACharacter* UICharacterActor;                                               // 0x0240 (size: 0x8)
    class UObject* CurrentPlayingAnimation;                                           // 0x0248 (size: 0x8)
    class AActor* UILightActor;                                                       // 0x0250 (size: 0x8)
    TArray<FString> Levels;                                                           // 0x0258 (size: 0x10)

    void IGetRequestedBoolVariableValue(FString VariableName, bool& NewParam);
    void IGetCinematicCamera(class ABP_CameraActor_C*& BP_CameraActor);
    void IGetCinematicWidget(class UAdvancedUI_C*& CurrentWidget);
    FText Get_ActorName_Text_0();
    void IChangeButtonColor(FLinearColor Color);
    void IDoSearch(FText SearchParameter, bool Empty);
    void IUpdateEFog(class AActor* ExponentialHeightFogActor);
    void IUpdateSelectedActor(class AActor* Actor);
    void IUpdateSkeletalMeshForAnimation(class USkeletalMeshComponent* SkeletalMesh);
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
    void BndEvt__Lights_K2Node_ComponentBoundEvent_2195_OnExpandableAreaExpansionChanged__DelegateSignature(class UExpandableArea* Area, bool bIsExpanded);
    void GetCamera();
    void IUpdateSelectedCharacter(class ACharacter* Character);
    void IUpdateSelectedAnimation(class UObject* CurrentPlayingAnimation);
    void IUpdateSelectedLightActor(class AActor* LightActor);
    void IUpdateDrivableLightActor(class APawn* Pawn);
    void ExecuteUbergraph_LightsListPanel(int32 EntryPoint);
}; // Size: 0x268

#endif
