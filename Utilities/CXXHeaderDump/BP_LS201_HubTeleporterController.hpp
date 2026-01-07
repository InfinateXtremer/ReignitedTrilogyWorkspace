#ifndef UE4SS_SDK_BP_LS201_HubTeleporterController_HPP
#define UE4SS_SDK_BP_LS201_HubTeleporterController_HPP

class ABP_LS201_HubTeleporterController_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UTextRenderComponent* HubTeleporterControllerText;                          // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    class AHubWhirlwind_C* 210_Whirlwind;                                             // 0x0330 (size: 0x8)
    class AHubWhirlwind_C* 222_Whirlwind;                                             // 0x0338 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void Hub Portal Check();
    void ExecuteUbergraph_BP_LS201_HubTeleporterController(int32 EntryPoint);
}; // Size: 0x340

#endif
