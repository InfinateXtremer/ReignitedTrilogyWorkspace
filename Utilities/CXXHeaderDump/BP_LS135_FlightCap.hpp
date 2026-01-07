#ifndef UE4SS_SDK_BP_LS135_FlightCap_HPP
#define UE4SS_SDK_BP_LS135_FlightCap_HPP

class ABP_LS135_FlightCap_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UStaticMeshComponent* Box;                                                  // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_LS135_FlightCap(int32 EntryPoint);
}; // Size: 0x330

#endif
