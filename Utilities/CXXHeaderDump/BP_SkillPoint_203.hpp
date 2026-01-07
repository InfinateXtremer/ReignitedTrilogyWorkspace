#ifndef UE4SS_SDK_BP_SkillPoint_203_HPP
#define UE4SS_SDK_BP_SkillPoint_203_HPP

class ABP_SkillPoint_203_C : public ATriggerSphere
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)

    void UserConstructionScript();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_SkillPoint_203(int32 EntryPoint);
}; // Size: 0x328

#endif
