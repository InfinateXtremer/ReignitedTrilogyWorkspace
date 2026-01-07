#ifndef UE4SS_SDK_LightHouse_HPP
#define UE4SS_SDK_LightHouse_HPP

class ALightHouse_C : public AMission_Item_Base_StateMachine_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UParticleSystemComponent* PS_VFX_LS111_LIghthouse_Impact;                   // 0x0488 (size: 0x8)
    class UBP_StateComponent_C* State_Death2;                                         // 0x0490 (size: 0x8)
    float Timeline_1_Light_Intensity_F2FD5456450D3D39CA09DE9025111CF4;                // 0x0498 (size: 0x4)
    float Timeline_1_Scale_F2FD5456450D3D39CA09DE9025111CF4;                          // 0x049C (size: 0x4)
    float Timeline_1_Emissive_Strength_F2FD5456450D3D39CA09DE9025111CF4;              // 0x04A0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_F2FD5456450D3D39CA09DE9025111CF4; // 0x04A4 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x04A8 (size: 0x8)
    class UMaterialInterface* GlowMaterial;                                           // 0x04B0 (size: 0x8)
    class AActor* GlowActor;                                                          // 0x04B8 (size: 0x8)
    TSubclassOf<class AActor> GlowObjectClass;                                        // 0x04C0 (size: 0x8)
    bool UseLocalModel;                                                               // 0x04C8 (size: 0x1)
    float Light_Intensity;                                                            // 0x04CC (size: 0x4)
    float Light_Radius;                                                               // 0x04D0 (size: 0x4)
    bool Debug_TestLight;                                                             // 0x04D4 (size: 0x1)

    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__State_Default_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__State_Death2_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_LightHouse(int32 EntryPoint);
}; // Size: 0x4D5

#endif
