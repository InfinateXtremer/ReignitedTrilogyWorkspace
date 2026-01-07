#ifndef UE4SS_SDK_CNS2198_FishSpectator_HPP
#define UE4SS_SDK_CNS2198_FishSpectator_HPP

class ACNS2198_FishSpectator_C : public ABP_Base_Friendly_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    class UFalconEnemyStateComponent* State_Flamed;                                   // 0x0908 (size: 0x8)
    class UFalconEnemyStateComponent* State_Death;                                    // 0x0910 (size: 0x8)
    class UFalconEnemyStateComponent* State_Cheer;                                    // 0x0918 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__State_Death_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void BndEvt__State_Flamed_K2Node_ComponentBoundEvent_0_StateChangeSignature__DelegateSignature(class UFalconEnemyStateComponent* StateComponent);
    void ExecuteUbergraph_CNS2198_FishSpectator(int32 EntryPoint);
}; // Size: 0x920

#endif
