#ifndef UE4SS_SDK_BP_Base_NPC_HPP
#define UE4SS_SDK_BP_Base_NPC_HPP

class ABP_Base_NPC_C : public ABP_Base_Character_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0830 (size: 0x8)
    class UPhasmidCullComponent* PhasmidCull;                                         // 0x0838 (size: 0x8)
    class UFalconAIMovementCoordinator* FalconAIMovementCoordinator;                  // 0x0840 (size: 0x8)
    class UBlendSpaceBase* LocomotionBlendspace;                                      // 0x0848 (size: 0x8)
    float StartIdleOffset;                                                            // 0x0850 (size: 0x4)

    void UserConstructionScript();
    void On Init Animation();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Base_NPC(int32 EntryPoint);
}; // Size: 0x854

#endif
