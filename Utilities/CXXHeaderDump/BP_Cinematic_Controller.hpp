#ifndef UE4SS_SDK_BP_Cinematic_Controller_HPP
#define UE4SS_SDK_BP_Cinematic_Controller_HPP

class ABP_Cinematic_Controller_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)
    class UAdvancedUI_C* MainUI;                                                      // 0x0328 (size: 0x8)
    class ABP_CameraActor_C* CCameraActor;                                            // 0x0330 (size: 0x8)
    class ACharacter* playerCharacter;                                                // 0x0338 (size: 0x8)
    TArray<TSoftObjectPtr<UWorld>> levelList;                                         // 0x0340 (size: 0x10)
    bool ControllingCamera?;                                                          // 0x0350 (size: 0x1)
    bool TimePause;                                                                   // 0x0351 (size: 0x1)
    int32 CurrentGame;                                                                // 0x0354 (size: 0x4)
    FString CurrentLevel;                                                             // 0x0358 (size: 0x10)
    class APlayerController* PlayerController;                                        // 0x0368 (size: 0x8)
    int32 CurrentSlot;                                                                // 0x0370 (size: 0x4)
    class APawn* _SelectedCharacter;                                                  // 0x0378 (size: 0x8)

    void get current level name(FString& level name);
    void get is pause enabled(bool& is enabled);
    void get game index(int32& the game index);
    void get slot index(int32& slot index);
    void get starting level for game(int32& game index, bool& level has been played, FString& level path);
    void IGetRequestedBoolVariableValue(FString VariableName, bool& NewParam);
    void IGetCinematicCamera(class ABP_CameraActor_C*& BP_CameraActor);
    void IGetCinematicWidget(class UAdvancedUI_C*& CurrentWidget);
    void SetCurrentLevel();
    void CreateCamera(class ABP_CameraActor_C*& CameraActor);
    void GetGameIndex(int32& the game index);
    void HudVisibility(bool bShowHUD);
    void CreateCreatableSkyboxButton(TSoftObjectPtr<UWorld> Level, int32 Array Index, class UButton*& CreatedButton);
    void AddCreatableSkybox();
    void AddButtons();
    void UserConstructionScript();
    void InpActEvt_CinematicMenu_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_8(FKey Key);
    void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_7(FKey Key);
    void InpActEvt_LeftControl_K2Node_InputKeyEvent_6(FKey Key);
    void InpActEvt_LeftControl_K2Node_InputKeyEvent_5(FKey Key);
    void InpActEvt_LeftShift_K2Node_InputKeyEvent_4(FKey Key);
    void InpActEvt_LeftShift_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_SwitchToCameraLiteralPause_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_0(FKey Key);
    void InpActEvt_Jump_K2Node_InputActionEvent_0(FKey Key);
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
    void IMoveForward(float Value);
    void IMoveRight(float Value);
    void ICameraAxisX(float Axis);
    void ICameraAxisY(float Axis);
    void IMoveUp(float Axis);
    void IWheelUp();
    void IWheelDown();
    void ISlowDown(bool Active?);
    void ISpeedUp(bool Active?);
    void IDoFocus(bool Holding);
    void ICaptureScene();
    void IDoPickup();
    void IDoRestore();
    void IMoveDown(float Axis);
    void IJump();
    void DisplayUI();
    void InpAxisEvt_MovementAxisX_K2Node_InputAxisEvent_0(float AxisValue);
    void InpAxisEvt_MovementAxisY_K2Node_InputAxisEvent_14(float AxisValue);
    void InpAxisEvt_CameraAxisY_K2Node_InputAxisEvent_48(float AxisValue);
    void SwitchCameraTickPause();
    void TogglePauseGame();
    void SwitchToCameraWithoutPuase();
    void ReceiveBeginPlay();
    void CheckCinematicMenu();
    void CheckLiteralPauseCameraSwitch();
    void CheckMoveUpDown();
    void CheckSwitchToCameraWithoutPuase();
    void CheckForDuplicates();
    void UnpauseGame();
    void PauseGame();
    void SwitchControls();
    void begin level load(FString level name, bool New Game);
    void InpAxisEvt_MoveUPDown_K2Node_InputAxisEvent_92(float AxisValue);
    void CheckCameraLeftRight();
    void InpAxisEvt_CameraAxisLeftRight_K2Node_InputAxisEvent_125(float AxisValue);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_Cinematic_Controller(int32 EntryPoint);
}; // Size: 0x380

#endif
