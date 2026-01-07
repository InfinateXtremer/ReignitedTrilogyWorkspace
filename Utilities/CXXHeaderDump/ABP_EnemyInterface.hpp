#ifndef UE4SS_SDK_ABP_EnemyInterface_HPP
#define UE4SS_SDK_ABP_EnemyInterface_HPP

class IABP_EnemyInterface_C : public IInterface
{

    void SetIdleStartOffset(float OffsetPercent);
    void ISetLocomotionBlendspace(class UBlendSpaceBase* BlendSpace);
}; // Size: 0x28

#endif
