#ifndef UE4SS_SDK_CNS2100_FormanMax_HPP
#define UE4SS_SDK_CNS2100_FormanMax_HPP

class ACNS2100_FormanMax_C : public ABP_Base_Friendly_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_CNS2100_FormanMax(int32 EntryPoint);
}; // Size: 0x908

#endif
