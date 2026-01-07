#ifndef UE4SS_SDK_BP_DestructibleEgg_HPP
#define UE4SS_SDK_BP_DestructibleEgg_HPP

class ABP_DestructibleEgg_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UBP_StateComponent_C* BP_Shake;                                             // 0x0450 (size: 0x8)
    class UTfbAkComponent* AkAudio;                                                   // 0x0458 (size: 0x8)
    class UBP_DestructibleFade_C* BP_DestructibleFade;                                // 0x0460 (size: 0x8)
    class UBP_StateComponent_C* BP_Visible;                                           // 0x0468 (size: 0x8)
    class UDestructibleComponent* Destructible;                                       // 0x0470 (size: 0x8)
    class UBP_StateComponent_C* BP_Hidden;                                            // 0x0478 (size: 0x8)
    class UBP_StateComponent_C* BP_Destroyed;                                         // 0x0480 (size: 0x8)
    class UBP_StateComponent_C* BP_Reset;                                             // 0x0488 (size: 0x8)
    class UAkAudioEvent* SFX_Break;                                                   // 0x0490 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__BP_Reset_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__BP_Hidden_K2Node_ComponentBoundEvent_2_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__BP_Visible_K2Node_ComponentBoundEvent_4_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__BP_Destroyed_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__BP_Shake_K2Node_ComponentBoundEvent_1_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_DestructibleEgg(int32 EntryPoint);
}; // Size: 0x498

#endif
