#ifndef UE4SS_SDK_BP_LS210_HubTeleporterController_HPP
#define UE4SS_SDK_BP_LS210_HubTeleporterController_HPP

class ABP_LS210_HubTeleporterController_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)
    class AHubWhirlwind_C* 222_Whirlwind_A;                                           // 0x0328 (size: 0x8)
    class AHubWhirlwind_C* 222_Whirlwind_B;                                           // 0x0330 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void Hub Portal Check();
    void ExecuteUbergraph_BP_LS210_HubTeleporterController(int32 EntryPoint);
}; // Size: 0x338

#endif
