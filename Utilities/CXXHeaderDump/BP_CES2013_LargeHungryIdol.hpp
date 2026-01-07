#ifndef UE4SS_SDK_BP_CES2013_LargeHungryIdol_HPP
#define UE4SS_SDK_BP_CES2013_LargeHungryIdol_HPP

class ABP_CES2013_LargeHungryIdol_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UParticleSystemComponent* PS_LS203_TorchFire_R;                             // 0x09F8 (size: 0x8)
    class UParticleSystemComponent* PS_LS203_TorchFire_L;                             // 0x0A00 (size: 0x8)
    class UPointLightComponent* PointLight1;                                          // 0x0A08 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0A10 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Barf;                          // 0x0A18 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Eat;                           // 0x0A20 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle_MouthOpen;                // 0x0A28 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A30 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle_MouthClosed;              // 0x0A38 (size: 0x8)
    class AController_Fish_Game_C* FishController;                                    // 0x0A40 (size: 0x8)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void Fish Game - On Fish Eaten();
    void Fish Game - Barf();
    void Fish Game - On Start();
    void Fish Game - On Won();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CES2013_LargeHungryIdol(int32 EntryPoint);
}; // Size: 0xA48

#endif
