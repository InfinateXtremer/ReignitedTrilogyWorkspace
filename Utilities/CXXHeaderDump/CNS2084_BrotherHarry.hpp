#ifndef UE4SS_SDK_CNS2084_BrotherHarry_HPP
#define UE4SS_SDK_CNS2084_BrotherHarry_HPP

class ACNS2084_BrotherHarry_C : public ABP_Base_Friendly_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_CNS2084_BrotherHarry(int32 EntryPoint);
}; // Size: 0x908

#endif
