#ifndef UE4SS_SDK_BP_CES1155_LampFool_HPP
#define UE4SS_SDK_BP_CES1155_LampFool_HPP

class ABP_CES1155_LampFool_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UStaticMeshComponent* SM_VFX_LS106_LightFogGlow;                            // 0x09F8 (size: 0x8)
    class UPointLightComponent* Lamp_PointLight;                                      // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FoolIn;                        // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_FoolOut;                       // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ModelSwapToLamp;               // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_ModelSwapToFool;               // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_LightOnCheck;                  // 0x0A28 (size: 0x8)
    class UBP_ModelSwapComponent_C* BP_ModelSwapComponent;                            // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_LampOut;                       // 0x0A38 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_LampLoop;                      // 0x0A40 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_LampIn;                        // 0x0A48 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_LightOff;                      // 0x0A50 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleLit;                       // 0x0A58 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_LightOn;                       // 0x0A60 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleUnlit;                     // 0x0A68 (size: 0x8)
    float LampFogAlpha_Alpha_63FB8CF84F8D2682CD21CFB80289BBB7;                        // 0x0A70 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> LampFogAlpha__Direction_63FB8CF84F8D2682CD21CFB80289BBB7; // 0x0A74 (size: 0x1)
    class UTimelineComponent* LampFogAlpha;                                           // 0x0A78 (size: 0x8)
    TArray<class ABP_CES1058_DemonDog_C*> ListOfDogs;                                 // 0x0A80 (size: 0x10)
    TArray<class ABP_CES1059_ArmoredTurtle_C*> ListOfTurtles;                         // 0x0A90 (size: 0x10)
    bool DogIsBlocking;                                                               // 0x0AA0 (size: 0x1)
    FGameplayTagContainer LooseBonkGameplayTag;                                       // 0x0AA8 (size: 0x20)
    bool LightDogCheck;                                                               // 0x0AC8 (size: 0x1)
    float LampRadius;                                                                 // 0x0ACC (size: 0x4)
    float FogRadius;                                                                  // 0x0AD0 (size: 0x4)
    float LampIntensity;                                                              // 0x0AD4 (size: 0x4)
    float FogOpacity;                                                                 // 0x0AD8 (size: 0x4)
    float LampEmissive;                                                               // 0x0ADC (size: 0x4)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void LampFogAlpha__FinishedFunc();
    void LampFogAlpha__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__FalconEnemyState_ModelSwapToFool_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_ModelSwapToLamp_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void TurnLightsOn();
    void TurnLightsOff();
    void BndEvt__FalconEnemyState_LightOnCheck_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__FalconEnemyState_LightOnCheck_K2Node_ComponentBoundEvent_3_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void On Cull(class AActor* Actor, bool bIsCulled);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void DogStartedAttack(class ABP_CES1058_DemonDog_C* Doggo);
    void ExecuteUbergraph_BP_CES1155_LampFool(int32 EntryPoint);
}; // Size: 0xAE0

#endif
