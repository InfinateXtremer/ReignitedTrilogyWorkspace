#ifndef UE4SS_SDK_LoadingScreen_HPP
#define UE4SS_SDK_LoadingScreen_HPP

class ALoadingScreen_C : public AFalconLoadingScreen
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)
    class UParticleSystemComponent* Trail_Spyro;                                      // 0x0388 (size: 0x8)
    class UPointLightComponent* Rear_PointLight;                                      // 0x0390 (size: 0x8)
    class UPointLightComponent* OffKey_PointLight;                                    // 0x0398 (size: 0x8)
    class UPointLightComponent* Key_PointLight;                                       // 0x03A0 (size: 0x8)
    class UPointLightComponent* Main_PointLight;                                      // 0x03A8 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x03B0 (size: 0x8)
    class UPortalNameComponent_C* PortalNameComponent;                                // 0x03B8 (size: 0x8)
    class USplineComponent* Text;                                                     // 0x03C0 (size: 0x8)
    TMap<TEnumAsByte<EFalconLoadScreen::Type>, FString> LoadingTextMap;               // 0x03C8 (size: 0x50)
    int32 swoop 0 index;                                                              // 0x0418 (size: 0x4)
    int32 swoop 1 index;                                                              // 0x041C (size: 0x4)
    int32 swoop 2 index;                                                              // 0x0420 (size: 0x4)
    int32 CharacterIndex;                                                             // 0x0424 (size: 0x4)
    class UParticleSystemComponent* MagicTrail;                                       // 0x0428 (size: 0x8)
    FVector LightsOffSet;                                                             // 0x0430 (size: 0xC)
    FTransform MeshWorldTransform;                                                    // 0x0440 (size: 0x30)
    float EndSwoopTime;                                                               // 0x0470 (size: 0x4)

    void SetDisplayText(const TEnumAsByte<EFalconLoadScreen::Type>& Key);
    void UpdateLightingLocation(FVector Mesh Location);
    void UpdateTrailLocation(FVector Mesh Location);
    void GetSpyroMeshLocation(FVector& Location);
    void UserConstructionScript();
    void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void Update Swoop 0(float delta time);
    void Update Swoop 1(float delta time);
    void Start Swoop 1();
    void Start Swoop 0();
    void BP_OnShowLoadScreen(TEnumAsByte<EFalconLoadScreen::Type> screenType);
    void BP_OnHideLoadScreen();
    void ExecuteUbergraph_LoadingScreen(int32 EntryPoint);
}; // Size: 0x474

#endif
