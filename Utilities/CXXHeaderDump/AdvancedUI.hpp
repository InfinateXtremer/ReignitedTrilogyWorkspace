#ifndef UE4SS_SDK_AdvancedUI_HPP
#define UE4SS_SDK_AdvancedUI_HPP

class UAdvancedUI_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UUI_AllActorsPanel_C* AllActorsPanel;                                       // 0x0210 (size: 0x8)
    class UUI_AnimationListPanel_C* AnimationPanel;                                   // 0x0218 (size: 0x8)
    class UUI_AnimationTimelinePanel_C* AnimationUtilities;                           // 0x0220 (size: 0x8)
    class UUI_MaterialPanel_C* BodyMaterialPanel;                                     // 0x0228 (size: 0x8)
    class UUI_CharactersPanel_C* CharactersPanel;                                     // 0x0230 (size: 0x8)
    class UCheckBox* CheckBox_0;                                                      // 0x0238 (size: 0x8)
    class UUI_CinematicsPanel_C* CinematicsPanel;                                     // 0x0240 (size: 0x8)
    class UUI_Cine_TextBlock_C* CineTextBlock;                                        // 0x0248 (size: 0x8)
    class UComponents_C* Components;                                                  // 0x0250 (size: 0x8)
    class UCreationPanel_C* CreationPanel_0;                                          // 0x0258 (size: 0x8)
    class UButton* DestroyAllSelectedActors;                                          // 0x0260 (size: 0x8)
    class UButton* DestroyLastActor;                                                  // 0x0268 (size: 0x8)
    class UButton* DestroyLight;                                                      // 0x0270 (size: 0x8)
    class UUI_EFogPanel_C* EFogPanel;                                                 // 0x0278 (size: 0x8)
    class UUI_ExponentialFog_C* ExponentialFog;                                       // 0x0280 (size: 0x8)
    class UUI_GizmoPanel_C* GizmoPanel;                                               // 0x0288 (size: 0x8)
    class UGridPanel* GridPanel_84;                                                   // 0x0290 (size: 0x8)
    class UUI_LightSettings_C* LightSettings_A;                                       // 0x0298 (size: 0x8)
    class ULightsListPanel_C* LightsListPanel;                                        // 0x02A0 (size: 0x8)
    class UUI_MaterialList_C* MaterialList;                                           // 0x02A8 (size: 0x8)
    class UExpandableArea* MaterialPanel;                                             // 0x02B0 (size: 0x8)
    class UParameterEditor_C* MaterialPropertyEditor;                                 // 0x02B8 (size: 0x8)
    class UButton* NextPageButton;                                                    // 0x02C0 (size: 0x8)
    class UParticleCreator_C* ParticleCreator;                                        // 0x02C8 (size: 0x8)
    class UUI_ParticleParameterOptions_C* ParticleParameterOptions;                   // 0x02D0 (size: 0x8)
    class UUI_ParticlesPanel_C* ParticlesPanel;                                       // 0x02D8 (size: 0x8)
    class UUI_Poseable_C* Poseable;                                                   // 0x02E0 (size: 0x8)
    class UButton* PossesActor;                                                       // 0x02E8 (size: 0x8)
    class UButton* PossesCamera;                                                      // 0x02F0 (size: 0x8)
    class UButton* PossesLightButton;                                                 // 0x02F8 (size: 0x8)
    class UUI_CameraFilters_C* PostProcess;                                           // 0x0300 (size: 0x8)
    class UUI_PostProcessPanel_C* PostProcessPanel;                                   // 0x0308 (size: 0x8)
    class UButton* PrevPageButton;                                                    // 0x0310 (size: 0x8)
    class UReignitedWidgetBrowser_C* ReignitedWidgetBrowser;                          // 0x0318 (size: 0x8)
    class UWidgetSwitcher* RightPanelSwticher;                                        // 0x0320 (size: 0x8)
    class UUI_ScreenshotPanel_C* ScreenshotPanel;                                     // 0x0328 (size: 0x8)
    class UEditableTextBox* SearchBox;                                                // 0x0330 (size: 0x8)
    class UExpandableArea* Skybox;                                                    // 0x0338 (size: 0x8)
    class UUI_SkyboxEditor_C* SkyboxEditor;                                           // 0x0340 (size: 0x8)
    class UUI_SkyboxList_C* SkyboxList;                                               // 0x0348 (size: 0x8)
    class UScrollBox* SpawnableSkyboxList;                                            // 0x0350 (size: 0x8)
    class UUI_TeleportCamera_C* TeleportCamera;                                       // 0x0358 (size: 0x8)
    class UButton* TeleportToActor;                                                   // 0x0360 (size: 0x8)
    class UTextBlock* TextBlock_48;                                                   // 0x0368 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_Cine_TextBlock_C_0;                                // 0x0370 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_Cine_TextBlock_C_1;                                // 0x0378 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_Cine_TextBlock_C_2;                                // 0x0380 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_Cine_TextBlock_C_3;                                // 0x0388 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_Cine_TextBlock_C_4;                                // 0x0390 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_Cine_TextBlock_C_5;                                // 0x0398 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_Cine_TextBlock_C_6;                                // 0x03A0 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock;                                     // 0x03A8 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock_0;                                   // 0x03B0 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock_103;                                 // 0x03B8 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock_C_0;                                 // 0x03C0 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_0;                                          // 0x03C8 (size: 0x8)
    class AActor* UILightActor;                                                       // 0x03D0 (size: 0x8)
    class AActor* UIActor;                                                            // 0x03D8 (size: 0x8)
    class APawn* DrivableLightActor;                                                  // 0x03E0 (size: 0x8)
    class AActor* FalconSky;                                                          // 0x03E8 (size: 0x8)
    class ABP_CameraActor_C* CameraActor;                                             // 0x03F0 (size: 0x8)
    int32 CurrentRightPanelPage;                                                      // 0x03F8 (size: 0x4)
    int32 MaxRightPage;                                                               // 0x03FC (size: 0x4)
    class ACharacter* UICharacterActor;                                               // 0x0400 (size: 0x8)
    class UObject* CurrentPlayingAnimation;                                           // 0x0408 (size: 0x8)
    class AActor* EFog;                                                               // 0x0410 (size: 0x8)
    TEnumAsByte<EGizmoTransformMode::Type> GizmoType;                                 // 0x0418 (size: 0x1)

    void get current level name(FString& level name);
    void get is pause enabled(bool& is enabled);
    void get game index(int32& the game index);
    void get slot index(int32& slot index);
    void get starting level for game(int32& game index, bool& level has been played, FString& level path);
    void IGetRequestedBoolVariableValue(FString VariableName, bool& NewParam);
    void IGetCinematicCamera(class ABP_CameraActor_C*& BP_CameraActor);
    void IGetCinematicWidget(class UAdvancedUI_C*& CurrentWidget);
    ESlateVisibility GetVisibility_0();
    ECheckBoxState GetCheckedState_0();
    ESlateVisibility GetPossesingLightReminderVisibility();
    ESlateVisibility GetCutsceneReminderVisibility();
    FText Get_ActorName_Text_0();
    void Start Game(int32 game index, int32 slot index);
    void level load finished();
    void set pause enabled(bool Enabled);
    void save progression(FString level checkpoint, FString new level path);
    void set menu string(FString menu key, bool key exists, FString string value);
    void set menu float(FString menu key, bool key exists, float float value);
    void get menu string(FString menu key, bool key exists, FString string value);
    void get menu float(FString menu key, bool key exists, float float value);
    void load game from save(int32 game slot, bool New Game, int32 NewParam);
    void delete save(int32 Slot);
    void respawn at checkpoint();
    void set cutscene playing(bool is playing);
    void get state of the game -DEPRECATED(TEnumAsByte<EGamestate::Type> state of the game);
    void restart game();
    void pause game for menu(bool do pause, bool ForceUnpause);
    void set slot index(int32 slot index);
    void set game index(int32 game index);
    void is slot active(int32 slot index, bool slot is active);
    void is any slot active(bool active slot exists);
    void has game started(bool game has started);
    void set starting level for game(FString level path);
    void IChangeButtonColor(FLinearColor Color);
    void IDoSearch(FText SearchParameter, bool Empty);
    void IUpdateSkeletalMeshForAnimation(class USkeletalMeshComponent* SkeletalMesh);
    void IPauseGame();
    void IUnPauseGame();
    void IUpdateSelectedParticleComponent(class UParticleSystemComponent* Emitter);
    void IUpdateSelectedPostProcess(class APostProcessVolume* NewParam);
    void IUpdateSelectedMaterial(class UMaterialInterface* NewParam);
    void IUpdateSelectedComponent(class UActorComponent* Component);
    void BndEvt__DestroyLight_K2Node_ComponentBoundEvent_712_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__PossesLightButton_K2Node_ComponentBoundEvent_877_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__PossesCamera_K2Node_ComponentBoundEvent_191_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_3_K2Node_ComponentBoundEvent_572_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_377_K2Node_ComponentBoundEvent_6518_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_419_K2Node_ComponentBoundEvent_7159_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_30_K2Node_ComponentBoundEvent_1607_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Detailed4KScreenshot_K2Node_ComponentBoundEvent_5433_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void BndEvt__EditableTextBox_225_K2Node_ComponentBoundEvent_81_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__Button_42_K2Node_ComponentBoundEvent_824_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_46_K2Node_ComponentBoundEvent_771_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__TeleportToActor_K2Node_ComponentBoundEvent_734_OnButtonClickedEvent__DelegateSignature();
    void GetCamera();
    void IUpdateSelectedCharacter(class ACharacter* Character);
    void IUpdateSelectedAnimation(class UObject* CurrentPlayingAnimation);
    void IUpdateSelectedLightActor(class AActor* LightActor);
    void IUpdateDrivableLightActor(class APawn* Pawn);
    void IUpdateSelectedSkybox(class AActor* Skybox);
    void IUpdateSelectedActor(class AActor* Actor);
    void BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_230_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void HideMenu();
    void IUpdateEFog(class AActor* ExponentialHeightFogActor);
    void begin level load(FString level name, bool New Game);
    void IUpdateColorWidget(class UWidget* NewWidget);
    void IUpdateGizmoTransformMode(TEnumAsByte<EGizmoTransformMode::Type> Transformmode);
    void ExecuteUbergraph_AdvancedUI(int32 EntryPoint);
}; // Size: 0x419

#endif
