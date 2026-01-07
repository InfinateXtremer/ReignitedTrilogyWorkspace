#ifndef UE4SS_SDK_BP_CES1069_Engineer_HPP
#define UE4SS_SDK_BP_CES1069_Engineer_HPP

class ABP_CES1069_Engineer_C : public ABP_Base_Enemy_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UStaticMeshComponent* Weapon;                                               // 0x09F8 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Death;                         // 0x0A00 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Attack;                        // 0x0A08 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Idle;                          // 0x0A10 (size: 0x8)
    TArray<TEnumAsByte<EObjectTypeQuery>> StaticWorld_Type;                           // 0x0A18 (size: 0x10)
    class ABP_Barrel_Base_C* MyBarrel;                                                // 0x0A28 (size: 0x8)
    TSubclassOf<class ABP_Barrel_Base_C> BarrelToSpawn;                               // 0x0A30 (size: 0x8)
    bool MetalBarrel;                                                                 // 0x0A38 (size: 0x1)
    bool NoSpecialBarrelLaunch;                                                       // 0x0A39 (size: 0x1)
    class UChildActorComponent* BarrelChildActorComp;                                 // 0x0A40 (size: 0x8)

    bool OnDamage(const FGameplayEventData Payload);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BarrelLaunched(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State: LaunchToDeath_K2Node_ComponentBoundEvent_3_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_BP_CES1069_Engineer(int32 EntryPoint);
}; // Size: 0xA48

#endif
