#ifndef UE4SS_SDK_BP_LS109_MarcoVsVultures_HPP
#define UE4SS_SDK_BP_LS109_MarcoVsVultures_HPP

class ABP_LS109_MarcoVsVultures_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)
    class ACollectable_Dragon_C* Marco;                                               // 0x0328 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_LS109_MarcoVsVultures(int32 EntryPoint);
}; // Size: 0x330

#endif
