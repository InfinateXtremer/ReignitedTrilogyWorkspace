#ifndef UE4SS_SDK_Lantern_HPP
#define UE4SS_SDK_Lantern_HPP

class ALantern_C : public AMission_Item_Base_StateMachine_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0488 (size: 0x8)
    class UParticleSystemComponent* PS_Lamp_Light;                                    // 0x0490 (size: 0x8)
    class UParticleSystemComponent* PS_Lamp_Activated;                                // 0x0498 (size: 0x8)
    class UBP_StateComponent_C* State_Debug;                                          // 0x04A0 (size: 0x8)
    class UBP_StateComponent_C* State_Hit;                                            // 0x04A8 (size: 0x8)
    class UBP_StateComponent_C* State_Activated;                                      // 0x04B0 (size: 0x8)
    bool GameOn;                                                                      // 0x04B8 (size: 0x1)
    class AActor* AchievementWatcher;                                                 // 0x04C0 (size: 0x8)
    class UMaterialInterface* SourceMaterial;                                         // 0x04C8 (size: 0x8)
    bool Red;                                                                         // 0x04D0 (size: 0x1)
    bool blue;                                                                        // 0x04D1 (size: 0x1)
    bool Green;                                                                       // 0x04D2 (size: 0x1)
    bool Yellow;                                                                      // 0x04D3 (size: 0x1)
    bool Purple;                                                                      // 0x04D4 (size: 0x1)
    bool Orange;                                                                      // 0x04D5 (size: 0x1)
    class UMaterialInstanceDynamic* EmissiveMaterial;                                 // 0x04D8 (size: 0x8)
    float LightOn;                                                                    // 0x04E0 (size: 0x4)
    bool InteriorLamp;                                                                // 0x04E4 (size: 0x1)
    float LightOff;                                                                   // 0x04E8 (size: 0x4)
    bool GameWon;                                                                     // 0x04EC (size: 0x1)
    class AActor* Crystal;                                                            // 0x04F0 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__State_Hit_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void MissionEnd(bool Success, bool LevelEnd);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Lantern(int32 EntryPoint);
}; // Size: 0x4F8

#endif
