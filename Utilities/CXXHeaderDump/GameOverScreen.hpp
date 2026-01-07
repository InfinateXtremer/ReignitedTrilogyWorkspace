#ifndef UE4SS_SDK_GameOverScreen_HPP
#define UE4SS_SDK_GameOverScreen_HPP

class AGameOverScreen_C : public AFalconLoadingScreen
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)
    class USplineComponent* TextSpline;                                               // 0x0388 (size: 0x8)
    class UPointLightComponent* Rear_PointLight;                                      // 0x0390 (size: 0x8)
    class UParticleSystemComponent* trail;                                            // 0x0398 (size: 0x8)
    class UPointLightComponent* OffKey_PointLight;                                    // 0x03A0 (size: 0x8)
    class UPointLightComponent* Key_PointLight;                                       // 0x03A8 (size: 0x8)
    class UPointLightComponent* Main_PointLight;                                      // 0x03B0 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x03B8 (size: 0x8)
    class UPortalNameComponent_C* PortalNameComponent;                                // 0x03C0 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x03C8 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x03D0 (size: 0x8)
    TEnumAsByte<ELevelTransitionType::Type> TransitionType;                           // 0x03D8 (size: 0x1)
    TMap<TEnumAsByte<EFalconLoadScreen::Type>, FText> LoadingTextMap;                 // 0x03E0 (size: 0x50)
    int32 swoop 0 index;                                                              // 0x0430 (size: 0x4)
    int32 swoop 1 index;                                                              // 0x0434 (size: 0x4)
    int32 swoop 2 index;                                                              // 0x0438 (size: 0x4)
    int32 CharacterIndex;                                                             // 0x043C (size: 0x4)
    class UParticleSystemComponent* MagicTrail;                                       // 0x0440 (size: 0x8)
    class AActor* CurrentChar;                                                        // 0x0448 (size: 0x8)
    bool YValCheck;                                                                   // 0x0450 (size: 0x1)
    FText default loading text;                                                       // 0x0458 (size: 0x18)
    FVector LightsOffSet;                                                             // 0x0470 (size: 0xC)
    FVector InitialLocation;                                                          // 0x047C (size: 0xC)

    void UserConstructionScript();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void Update Swoop 0(float delta time);
    void Start Swoop 0();
    void BP_OnShowLoadScreen(TEnumAsByte<EFalconLoadScreen::Type> screenType);
    void BP_OnHideLoadScreen();
    void ReceiveTick(float DeltaSeconds);
    void LetterReveal();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_GameOverScreen(int32 EntryPoint);
}; // Size: 0x488

#endif
