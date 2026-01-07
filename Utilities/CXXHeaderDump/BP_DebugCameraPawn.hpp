#ifndef UE4SS_SDK_BP_DebugCameraPawn_HPP
#define UE4SS_SDK_BP_DebugCameraPawn_HPP

class ABP_DebugCameraPawn_C : public ASpectatorPawn
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A0 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x03A8 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ExecuteUbergraph_BP_DebugCameraPawn(int32 EntryPoint);
}; // Size: 0x3B0

#endif
