#ifndef UE4SS_SDK_BP_CNS1198_FairyWithDirectionArrow_HPP
#define UE4SS_SDK_BP_CNS1198_FairyWithDirectionArrow_HPP

class ABP_CNS1198_FairyWithDirectionArrow_C : public ABP_Base_Friendly_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    class UFalconEnemyStateComponent* State_Wave;                                     // 0x0908 (size: 0x8)
    class UFalconEnemyStateComponent* State_Disappear;                                // 0x0910 (size: 0x8)
    class UFalconEnemyStateComponent* State_Appear;                                   // 0x0918 (size: 0x8)
    class UFalconEnemyStateComponent* State_Hidden;                                   // 0x0920 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0928 (size: 0x8)
    class UParticleSystemComponent* FairyGlow;                                        // 0x0930 (size: 0x8)
    class UStaticMeshComponent* DirArrow;                                             // 0x0938 (size: 0x8)
    class UParticleSystem* VFX_UniqueFairyFX;                                         // 0x0940 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__State_Hidden_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Hidden_K2Node_ComponentBoundEvent_1_StateExitSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent, class UFalconEnemyStateComponent* NextStateComponent);
    void BndEvt__State_Disappear_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Appear_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CNS1198_FairyWithDirectionArrow(int32 EntryPoint);
}; // Size: 0x948

#endif
