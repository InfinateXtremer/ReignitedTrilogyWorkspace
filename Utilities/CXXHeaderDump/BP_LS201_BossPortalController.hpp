#ifndef UE4SS_SDK_BP_LS201_BossPortalController_HPP
#define UE4SS_SDK_BP_LS201_BossPortalController_HPP

class ABP_LS201_BossPortalController_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)
    class ABossTransporter_C* BossPortal;                                             // 0x0328 (size: 0x8)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void Hub Portal Check();
    void ExecuteUbergraph_BP_LS201_BossPortalController(int32 EntryPoint);
}; // Size: 0x330

#endif
