#ifndef UE4SS_SDK_BP_CFS3321_Sheep_HPP
#define UE4SS_SDK_BP_CFS3321_Sheep_HPP

class ABP_CFS3321_Sheep_C : public ABP_CFS1166_Sheep_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A80 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleAfterChase;                // 0x0A88 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_BuzzFallIn;                    // 0x0A90 (size: 0x8)
    class USP3_HomingTargetComponent* SP3_HomingTarget;                               // 0x0A98 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_Wander;                        // 0x0AA0 (size: 0x8)
    class UFalconEnemyStateComponent* FalconEnemyState_IdleAlt;                       // 0x0AA8 (size: 0x8)
    float BuzzFallInVelocity;                                                         // 0x0AB0 (size: 0x4)
    int32 BuzzFallIn_BounceCount;                                                     // 0x0AB4 (size: 0x4)
    bool BuzzFallIn_IsLastBounce;                                                     // 0x0AB8 (size: 0x1)
    bool Rynoc_Dead?;                                                                 // 0x0AB9 (size: 0x1)

    void UserConstructionScript();
    void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveTick(float DeltaSeconds);
    void MissionAlert(class AActor* Actor, int32 Value);
    void ExecuteUbergraph_BP_CFS3321_Sheep(int32 EntryPoint);
}; // Size: 0xABA

#endif
