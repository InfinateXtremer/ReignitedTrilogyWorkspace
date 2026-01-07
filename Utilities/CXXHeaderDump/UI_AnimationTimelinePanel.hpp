#ifndef UE4SS_SDK_UI_AnimationTimelinePanel_HPP
#define UE4SS_SDK_UI_AnimationTimelinePanel_HPP

class UUI_AnimationTimelinePanel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UUI_Cine_TextBlock_C* AnimationNameText;                                    // 0x0210 (size: 0x8)
    class USpinBox* AnimationRateSpinbox;                                             // 0x0218 (size: 0x8)
    class USlider* AnimationTimelineSlider;                                           // 0x0220 (size: 0x8)
    class UUI_Cine_TextBlock_C* CineTextBlock;                                        // 0x0228 (size: 0x8)
    class UUI_Cine_TextBlock_C* CineTextBlock_0;                                      // 0x0230 (size: 0x8)
    class UUI_Cine_TextBlock_C* CineTextBlock_2;                                      // 0x0238 (size: 0x8)
    class UImage* Image_43;                                                           // 0x0240 (size: 0x8)
    class UButton* PlayPauseAnimationButton;                                          // 0x0248 (size: 0x8)
    class UUI_Cine_SpinBox_C* UI_Cine_SpinBox;                                        // 0x0250 (size: 0x8)
    class UObject* CurrentPlayingAnimation;                                           // 0x0258 (size: 0x8)
    class ACharacter* UICharacterActor;                                               // 0x0260 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMeshComp;                                   // 0x0268 (size: 0x8)
    class ABP_Posable_Character_C* PoseAsset;                                         // 0x0270 (size: 0x8)

    void IGetRequestedBoolVariableValue(FString VariableName, bool& NewParam);
    void IGetCinematicCamera(class ABP_CameraActor_C*& BP_CameraActor);
    void IGetCinematicWidget(class UAdvancedUI_C*& CurrentWidget);
    void UpdateAnimationNameText();
    void GetAnimName(FText& Name);
    void UpdateVisibility();
    FText GetAnimationText();
    ESlateVisibility Get_AnimationTimelineMenu_Visibility_0();
    FSlateBrush SetupPlayButton();
    float GetAnimationLength();
    ESlateVisibility SetAnimationSpeedVisibility();
    float GetPlayRate();
    void IChangeButtonColor(FLinearColor Color);
    void IDoSearch(FText SearchParameter, bool Empty);
    void IUpdateSelectedLightActor(class AActor* LightActor);
    void IUpdateEFog(class AActor* ExponentialHeightFogActor);
    void IUpdateSelectedActor(class AActor* Actor);
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
    void BndEvt__SpinBox_54_K2Node_ComponentBoundEvent_4167_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__Slider_1_K2Node_ComponentBoundEvent_4274_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__Button_81_K2Node_ComponentBoundEvent_1878_OnButtonClickedEvent__DelegateSignature();
    void IUpdateSelectedCharacter(class ACharacter* Character);
    void IUpdateSelectedAnimation(class UObject* CurrentPlayingAnimation);
    void IUpdateSkeletalMeshForAnimation(class USkeletalMeshComponent* SkeletalMesh);
    void ExecuteUbergraph_UI_AnimationTimelinePanel(int32 EntryPoint);
}; // Size: 0x278

#endif
