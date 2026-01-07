#ifndef UE4SS_SDK_UI_SkyboxEditor_HPP
#define UE4SS_SDK_UI_SkyboxEditor_HPP

class UUI_SkyboxEditor_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UExpandableArea* AstralExpandableArea;                                      // 0x0210 (size: 0x8)
    class USpinBox* AstralHorizonFalloffSpinBox;                                      // 0x0218 (size: 0x8)
    class USpinBox* AstralHorizonIntensitySpinBox;                                    // 0x0220 (size: 0x8)
    class USpinBox* AuroraBlurSpinBox;                                                // 0x0228 (size: 0x8)
    class UCheckBox* AuroraCheckBox_4;                                                // 0x0230 (size: 0x8)
    class UExpandableArea* AuroraExpandableArea;                                      // 0x0238 (size: 0x8)
    class USpinBox* AuroraExponentSpinBox;                                            // 0x0240 (size: 0x8)
    class USpinBox* AuroraIntensitySpinBox;                                           // 0x0248 (size: 0x8)
    class USpinBox* AuroraLayer1BaseSpinBox;                                          // 0x0250 (size: 0x8)
    class USpinBox* AuroraLayer2BaseSpinBox;                                          // 0x0258 (size: 0x8)
    class USpinBox* AuroraSpeedSpinBox;                                               // 0x0260 (size: 0x8)
    class USpinBox* CloudDarkColorB;                                                  // 0x0268 (size: 0x8)
    class UButton* CloudDarkColorButton;                                              // 0x0270 (size: 0x8)
    class USpinBox* CloudDarkColorG;                                                  // 0x0278 (size: 0x8)
    class USpinBox* CloudDarkColorR;                                                  // 0x0280 (size: 0x8)
    class USpinBox* CloudDensitySpinBox;                                              // 0x0288 (size: 0x8)
    class USpinBox* CloudDirectionSpinBox;                                            // 0x0290 (size: 0x8)
    class UExpandableArea* CloudExpandableArea;                                       // 0x0298 (size: 0x8)
    class USpinBox* CloudHemShadowFalloffSpinBox;                                     // 0x02A0 (size: 0x8)
    class USpinBox* CloudLayer1HeightSpinBox;                                         // 0x02A8 (size: 0x8)
    class USpinBox* CloudLayer2HeightSpinBox;                                         // 0x02B0 (size: 0x8)
    class USpinBox* CloudLightColorB;                                                 // 0x02B8 (size: 0x8)
    class UButton* CloudLightColorButton;                                             // 0x02C0 (size: 0x8)
    class USpinBox* CloudLightColorG;                                                 // 0x02C8 (size: 0x8)
    class USpinBox* CloudLightColorR;                                                 // 0x02D0 (size: 0x8)
    class USpinBox* CloudOpacitySpinBox;                                              // 0x02D8 (size: 0x8)
    class USpinBox* CloudPhaseSpinBox;                                                // 0x02E0 (size: 0x8)
    class UExpandableArea* CloudRim;                                                  // 0x02E8 (size: 0x8)
    class USpinBox* CloudRimSunHighlightSpinBox;                                      // 0x02F0 (size: 0x8)
    class UExpandableArea* CloudShadow;                                               // 0x02F8 (size: 0x8)
    class USpinBox* CloudShadowFalloffSpinBox;                                        // 0x0300 (size: 0x8)
    class USpinBox* CloudShadowLengthSpinBox;                                         // 0x0308 (size: 0x8)
    class UExpandableArea* CloudShine;                                                // 0x0310 (size: 0x8)
    class USpinBox* CloudShineIntensitySpinBox;                                       // 0x0318 (size: 0x8)
    class USpinBox* CloudShineVariationSpinBox;                                       // 0x0320 (size: 0x8)
    class USpinBox* CloudSpeedSpinBox;                                                // 0x0328 (size: 0x8)
    class USpinBox* CloudSunAlphaEdgeFalloffSpinBox;                                  // 0x0330 (size: 0x8)
    class USpinBox* CloudSunBrightnessSpinBox;                                        // 0x0338 (size: 0x8)
    class UExpandableArea* CloudSunExpandableArea_2;                                  // 0x0340 (size: 0x8)
    class USpinBox* CloudSunLightingIntensitySpinBox;                                 // 0x0348 (size: 0x8)
    class USpinBox* CloudSunRimB;                                                     // 0x0350 (size: 0x8)
    class UButton* CloudSunRimColorButton;                                            // 0x0358 (size: 0x8)
    class USpinBox* CloudSunRimG;                                                     // 0x0360 (size: 0x8)
    class USpinBox* CloudSunRimR;                                                     // 0x0368 (size: 0x8)
    class USpinBox* CloudSunRimShadowB;                                               // 0x0370 (size: 0x8)
    class UButton* CloudSunRimShadowColorButton;                                      // 0x0378 (size: 0x8)
    class USpinBox* CloudSunRimShadowG;                                               // 0x0380 (size: 0x8)
    class USpinBox* CloudSunRimShadowR;                                               // 0x0388 (size: 0x8)
    class USpinBox* CloudTilingSpinBox;                                               // 0x0390 (size: 0x8)
    class UExpandableArea* CloudWisps;                                                // 0x0398 (size: 0x8)
    class USpinBox* CloudWispsOpacitySpinBox;                                         // 0x03A0 (size: 0x8)
    class USpinBox* CludHemShadowLen2SpinBox;                                         // 0x03A8 (size: 0x8)
    class UCheckBox* ColorsDeterminedBySunPosCheckBox;                                // 0x03B0 (size: 0x8)
    class UExpandableArea* ExpandableArea_0;                                          // 0x03B8 (size: 0x8)
    class UButton* HorizonButton;                                                     // 0x03C0 (size: 0x8)
    class USpinBox* HorizonColorB;                                                    // 0x03C8 (size: 0x8)
    class USpinBox* HorizonColorG;                                                    // 0x03D0 (size: 0x8)
    class USpinBox* HorizonColorR;                                                    // 0x03D8 (size: 0x8)
    class USpinBox* HorizonFalloffSpinBox;                                            // 0x03E0 (size: 0x8)
    class USpinBox* LightDirectionB;                                                  // 0x03E8 (size: 0x8)
    class USpinBox* LightDirectionG;                                                  // 0x03F0 (size: 0x8)
    class USpinBox* LightDirectionR;                                                  // 0x03F8 (size: 0x8)
    class UExpandableArea* MoonExpandableArea;                                        // 0x0400 (size: 0x8)
    class USpinBox* MoonOpacitySpinBox;                                               // 0x0408 (size: 0x8)
    class USpinBox* MoonPhaseYSpinBox;                                                // 0x0410 (size: 0x8)
    class USpinBox* MoonPhaseZSpinBox;                                                // 0x0418 (size: 0x8)
    class USpinBox* MoonTextureOpacitySpinBox;                                        // 0x0420 (size: 0x8)
    class UCheckBox* OneCloudLayerCheckBox;                                           // 0x0428 (size: 0x8)
    class USpinBox* OverallColorB;                                                    // 0x0430 (size: 0x8)
    class UButton* OverallColorButton;                                                // 0x0438 (size: 0x8)
    class USpinBox* OverallColorG;                                                    // 0x0440 (size: 0x8)
    class USpinBox* OverallColorR;                                                    // 0x0448 (size: 0x8)
    class UCheckBox* OverrideSunColorsCheckBox;                                       // 0x0450 (size: 0x8)
    class USpinBox* SkyDomeRadiusSpinBox;                                             // 0x0458 (size: 0x8)
    class USpinBox* SkyDomeScaleSpinBox;                                              // 0x0460 (size: 0x8)
    class USpinBox* SpinBox_52;                                                       // 0x0468 (size: 0x8)
    class USpinBox* StarBrightnessSpinBox;                                            // 0x0470 (size: 0x8)
    class UExpandableArea* StarsExpandableArea;                                       // 0x0478 (size: 0x8)
    class USpinBox* StarUSpinBox;                                                     // 0x0480 (size: 0x8)
    class USpinBox* StarVSpinBox;                                                     // 0x0488 (size: 0x8)
    class USpinBox* SunBrightnessSpinBox;                                             // 0x0490 (size: 0x8)
    class USpinBox* SunColorB;                                                        // 0x0498 (size: 0x8)
    class UButton* SunColorButton;                                                    // 0x04A0 (size: 0x8)
    class USpinBox* SunColorG;                                                        // 0x04A8 (size: 0x8)
    class USpinBox* SunColorR;                                                        // 0x04B0 (size: 0x8)
    class USpinBox* SunCoronaIntensitySpinBox;                                        // 0x04B8 (size: 0x8)
    class USpinBox* SunCoronaSoftnessSpinBox;                                         // 0x04C0 (size: 0x8)
    class USpinBox* SunCoronaSpinBox;                                                 // 0x04C8 (size: 0x8)
    class UExpandableArea* SunExpandableArea;                                         // 0x04D0 (size: 0x8)
    class USpinBox* SunHeightOffsetSpinBox;                                           // 0x04D8 (size: 0x8)
    class USpinBox* SunHeightSpinBox;                                                 // 0x04E0 (size: 0x8)
    class USpinBox* SunRadiusSpinBox;                                                 // 0x04E8 (size: 0x8)
    class USpinBox* SunRimIntensitySpinBox;                                           // 0x04F0 (size: 0x8)
    class USpinBox* SunSideOffsetSpinBox;                                             // 0x04F8 (size: 0x8)
    class UTextBlock* TextBlock_67;                                                   // 0x0500 (size: 0x8)
    class UTextBlock* TextBlock_73;                                                   // 0x0508 (size: 0x8)
    class UTextBlock* TextBlock_84;                                                   // 0x0510 (size: 0x8)
    class UCheckBox* UseUE4CloudsCheckBox;                                            // 0x0518 (size: 0x8)
    class USpinBox* WispCloudColorB;                                                  // 0x0520 (size: 0x8)
    class UButton* WispCloudColorButton;                                              // 0x0528 (size: 0x8)
    class USpinBox* WispCloudColorG;                                                  // 0x0530 (size: 0x8)
    class USpinBox* WispCloudColorR;                                                  // 0x0538 (size: 0x8)
    class USpinBox* WispyCloudsRimRadiusSpinBox;                                      // 0x0540 (size: 0x8)
    class USpinBox* WispySunRimFalloffSpinBox;                                        // 0x0548 (size: 0x8)
    class UButton* ZenithButton;                                                      // 0x0550 (size: 0x8)
    class USpinBox* ZenithColorB;                                                     // 0x0558 (size: 0x8)
    class USpinBox* ZenithColorG;                                                     // 0x0560 (size: 0x8)
    class USpinBox* ZenithColorR;                                                     // 0x0568 (size: 0x8)
    class ABP_Falcon_Sky_Sphere_C* Falcon_Sky;                                        // 0x0570 (size: 0x8)
    class ABP_Falcon_Sky_Sphere_DualAstral_C* Falcon_DualAstral;                      // 0x0578 (size: 0x8)

    void IGetRequestedBoolVariableValue(FString VariableName, bool& NewParam);
    void IGetCinematicCamera(class ABP_CameraActor_C*& BP_CameraActor);
    void IGetCinematicWidget(class UAdvancedUI_C*& CurrentWidget);
    bool GetbIsEnabled_0();
    ESlateVisibility GetVisibility_1();
    ESlateVisibility Get_WispCloudColorButton_Visibility_0();
    ESlateVisibility Get_CloudSunRimShadowColorButton_Visibility_0();
    ESlateVisibility Get_CloudSunRimColorButton_Visibility_0();
    ESlateVisibility Get_CloudDarkColorButton_Visibility_0();
    ESlateVisibility Get_CloudLightColorButton_Visibility_0();
    ESlateVisibility Get_SunColorButton_Visibility_0();
    ESlateVisibility Get_OverallColorButton_Visibility_0();
    ESlateVisibility Get_HorizonButton_Visibility_0();
    ESlateVisibility GetVisibility_0();
    FText GetText_1();
    FText GetText_0();
    FText GetStarTexture();
    void IChangeButtonColor(FLinearColor Color);
    void IDoSearch(FText SearchParameter, bool Empty);
    void IUpdateSelectedAnimation(class UObject* CurrentPlayingAnimation);
    void IUpdateSelectedCharacter(class ACharacter* Character);
    void IUpdateSelectedLightActor(class AActor* LightActor);
    void IUpdateEFog(class AActor* ExponentialHeightFogActor);
    void IUpdateSelectedActor(class AActor* Actor);
    void IUpdateSkeletalMeshForAnimation(class USkeletalMeshComponent* SkeletalMesh);
    void IUpdateDrivableLightActor(class APawn* Pawn);
    void IPauseGame();
    void IUnPauseGame();
    void IUpdateSelectedParticleComponent(class UParticleSystemComponent* Emitter);
    void IUpdateSelectedPostProcess(class APostProcessVolume* NewParam);
    void IUpdateColorWidget(class UWidget* NewWidget);
    void IUpdateSelectedMaterial(class UMaterialInterface* NewParam);
    void IUpdateSelectedComponent(class UActorComponent* Component);
    void IUpdateGizmoTransformMode(TEnumAsByte<EGizmoTransformMode::Type> Transformmode);
    void BndEvt__SkyDomeRadiusSpinBox_K2Node_ComponentBoundEvent_94_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SkyDomeScaleSpinBox_K2Node_ComponentBoundEvent_112_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SpinBox_4_K2Node_ComponentBoundEvent_130_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__ZenithColorR_K2Node_ComponentBoundEvent_149_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__ZenithColorG_K2Node_ComponentBoundEvent_169_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__ZenithColorB_K2Node_ComponentBoundEvent_182_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SpinBox_6_K2Node_ComponentBoundEvent_228_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SpinBox_7_K2Node_ComponentBoundEvent_241_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SpinBox_8_K2Node_ComponentBoundEvent_261_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SpinBox_9_K2Node_ComponentBoundEvent_390_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__OverallColorG_K2Node_ComponentBoundEvent_456_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__OverallColorB_K2Node_ComponentBoundEvent_479_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__LightDirectionR_K2Node_ComponentBoundEvent_605_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__LightDirectionG_K2Node_ComponentBoundEvent_618_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__LightDirectionB_K2Node_ComponentBoundEvent_644_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_701_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__OverrideSunColorsCheckBox_K2Node_ComponentBoundEvent_783_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__SunColorR_K2Node_ComponentBoundEvent_893_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SunColorG_K2Node_ComponentBoundEvent_941_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SunColorB_K2Node_ComponentBoundEvent_973_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SpinBox_27_K2Node_ComponentBoundEvent_1006_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SpinBox_28_K2Node_ComponentBoundEvent_1131_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SunRimIntensitySpinBox_K2Node_ComponentBoundEvent_4_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SunCoronaSpinBox_K2Node_ComponentBoundEvent_89_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SunCoronaIntensitySpinBox_K2Node_ComponentBoundEvent_162_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SunCoronaSoftnessSpinBox_K2Node_ComponentBoundEvent_231_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SunHeightSpinBox_K2Node_ComponentBoundEvent_300_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SpinBox_34_K2Node_ComponentBoundEvent_400_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SpinBox_35_K2Node_ComponentBoundEvent_507_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__AstralHorizonFalloffSpinBox_K2Node_ComponentBoundEvent_35_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__AstralHorizonIntensitySpinBox_K2Node_ComponentBoundEvent_82_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__CheckBox_2_K2Node_ComponentBoundEvent_131_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__CloudDensitySpinBox_K2Node_ComponentBoundEvent_731_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__CloudTilingSpinBox_K2Node_ComponentBoundEvent_748_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__CloudLayer1HeightSpinBox_K2Node_ComponentBoundEvent_795_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__CloudLayer2HeightSpinBox_K2Node_ComponentBoundEvent_842_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__CloudSpeedSpinBox_K2Node_ComponentBoundEvent_927_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__CloudSunAlphaEdgeFalloffSpinBox_K2Node_ComponentBoundEvent_978_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__CloudLightColorR_K2Node_ComponentBoundEvent_1030_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__CloudLightColorG_K2Node_ComponentBoundEvent_1082_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__CloudLightColorB_K2Node_ComponentBoundEvent_1095_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__CloudDarkColorR_K2Node_ComponentBoundEvent_1190_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__CloudDarkColorG_K2Node_ComponentBoundEvent_1203_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__CloudDarkColorB_K2Node_ComponentBoundEvent_1261_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__UseUE4CloudsCheckBox_K2Node_ComponentBoundEvent_1588_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__CloudDirectionSpinBox_K2Node_ComponentBoundEvent_1727_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SpinBox_40_K2Node_ComponentBoundEvent_1831_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SpinBox_41_K2Node_ComponentBoundEvent_1947_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__CloudSunLightingIntensitySpinBox_K2Node_ComponentBoundEvent_2069_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__CloudSunBrightnessSpinBox_K2Node_ComponentBoundEvent_2536_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__CloudSunRimR_K2Node_ComponentBoundEvent_2648_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__CloudSunRimG_K2Node_ComponentBoundEvent_2661_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__CloudSunRimB_K2Node_ComponentBoundEvent_2725_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__CloudSunRimShadowR_K2Node_ComponentBoundEvent_2843_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__CloudSunRimShadowG_K2Node_ComponentBoundEvent_2856_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__CloudSunRimShadowB_K2Node_ComponentBoundEvent_2923_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__CloudRimSunHighlightSpinBox_K2Node_ComponentBoundEvent_272_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__CloudShineVariationSpinBox_K2Node_ComponentBoundEvent_478_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__CloudShineIntensitySpinBox_K2Node_ComponentBoundEvent_549_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__WispCloudColorR_K2Node_ComponentBoundEvent_905_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__WispCloudColorG_K2Node_ComponentBoundEvent_979_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__WispCloudColorB_K2Node_ComponentBoundEvent_997_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__WispySunRimFalloffSpinBox_K2Node_ComponentBoundEvent_264_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SpinBox_58_K2Node_ComponentBoundEvent_405_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__CludHemShadowLen2SpinBox_K2Node_ComponentBoundEvent_705_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__CloudHemShadowFalloffSpinBox_K2Node_ComponentBoundEvent_1001_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__CloudShadowLengthSpinBox_K2Node_ComponentBoundEvent_1086_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__CloudShadowFalloffSpinBox_K2Node_ComponentBoundEvent_1240_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__StarBrightnessSpinBox_K2Node_ComponentBoundEvent_1540_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__StarUSpinBox_K2Node_ComponentBoundEvent_1695_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__StarVSpinBox_K2Node_ComponentBoundEvent_1853_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__MoonPhaseYSpinBox_K2Node_ComponentBoundEvent_2299_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__MoonPhaseZSpinBox_K2Node_ComponentBoundEvent_2459_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__MoonOpacitySpinBox_K2Node_ComponentBoundEvent_2847_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__MoonTextureOpacitySpinBox_K2Node_ComponentBoundEvent_3013_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__AuroraSpeedSpinBox_K2Node_ComponentBoundEvent_3258_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__AuroraIntensitySpinBox_K2Node_ComponentBoundEvent_3426_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__AuroraExponentSpinBox_K2Node_ComponentBoundEvent_3596_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__AuroraBlurSpinBox_K2Node_ComponentBoundEvent_3768_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__AuroraLayer1BaseSpinBox_K2Node_ComponentBoundEvent_3942_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__AuroraLayer2BaseSpinBox_K2Node_ComponentBoundEvent_4118_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__AuroraCheckBox_4_K2Node_ComponentBoundEvent_4293_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void IUpdateSelectedSkybox(class AActor* Skybox);
    void BndEvt__ZenithButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void CustomEvent_0(FLinearColor NewColor);
    void BndEvt__HorizonButton_K2Node_ComponentBoundEvent_1237_OnButtonClickedEvent__DelegateSignature();
    void CustomEvent(FLinearColor NewColor);
    void BndEvt__OverallColorButton_K2Node_ComponentBoundEvent_5357_OnButtonClickedEvent__DelegateSignature();
    void CustomEvent_1(FLinearColor NewColor);
    void BndEvt__SunColorButton_K2Node_ComponentBoundEvent_6048_OnButtonClickedEvent__DelegateSignature();
    void CustomEvent_2(FLinearColor NewColor);
    void BndEvt__CloudLightColorButton_K2Node_ComponentBoundEvent_8215_OnButtonClickedEvent__DelegateSignature();
    void CustomEvent_3(FLinearColor NewColor);
    void BndEvt__CloudDarkColorButton_K2Node_ComponentBoundEvent_8492_OnButtonClickedEvent__DelegateSignature();
    void CustomEvent_4(FLinearColor NewColor);
    void BndEvt__CloudSunRimColorButton_K2Node_ComponentBoundEvent_9587_OnButtonClickedEvent__DelegateSignature();
    void CustomEvent_5(FLinearColor NewColor);
    void BndEvt__CloudSunRimShadowColorButton_K2Node_ComponentBoundEvent_9870_OnButtonClickedEvent__DelegateSignature();
    void CustomEvent_6(FLinearColor NewColor);
    void BndEvt__WispCloudColorButton_K2Node_ComponentBoundEvent_10318_OnButtonClickedEvent__DelegateSignature();
    void CustomEvent_7(FLinearColor NewColor);
    void OnDestroyed_Event_0(class AActor* DestroyedActor);
    void Construct();
    void ExecuteUbergraph_UI_SkyboxEditor(int32 EntryPoint);
}; // Size: 0x580

#endif
