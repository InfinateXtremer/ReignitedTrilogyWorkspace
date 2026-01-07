#ifndef UE4SS_SDK_UI_SubActorsListPanel_HPP
#define UE4SS_SDK_UI_SubActorsListPanel_HPP

class UUI_SubActorsListPanel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UScrollBox* ActorList;                                                      // 0x0210 (size: 0x8)
    class UExpandableArea* LevelActorsArea;                                           // 0x0218 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock;                                     // 0x0220 (size: 0x8)
    FString Level;                                                                    // 0x0228 (size: 0x10)
    TMap<class FString, class AActor*> DictActor;                                     // 0x0238 (size: 0x50)

    void get current level name(FString& level name);
    void get is pause enabled(bool& is enabled);
    void get game index(int32& the game index);
    void get slot index(int32& slot index);
    void get starting level for game(int32& game index, bool& level has been played, FString& level path);
    void get level visited(FString& level path, bool& visited);
    void get completion pct for level(FString level path, float& pct complete);
    void IGetRequestedBoolVariableValue(FString VariableName, bool& NewParam);
    void IGetCinematicCamera(class ABP_CameraActor_C*& BP_CameraActor);
    void IGetCinematicWidget(class UAdvancedUI_C*& CurrentWidget);
    ESlateVisibility Get_AllActorsArea_Visibility_0();
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
    void begin level load(FString level name, bool New Game);
    void Construct();
    void ExecuteUbergraph_UI_SubActorsListPanel(int32 EntryPoint);
}; // Size: 0x288

#endif
