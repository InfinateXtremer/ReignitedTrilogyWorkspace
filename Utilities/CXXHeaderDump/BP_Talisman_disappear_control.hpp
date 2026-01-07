#ifndef UE4SS_SDK_BP_Talisman_disappear_control_HPP
#define UE4SS_SDK_BP_Talisman_disappear_control_HPP

class ABP_Talisman_disappear_control_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)
    int32 SecondaryColor;                                                             // 0x0328 (size: 0x4)
    bool SecondaryColorOrGold;                                                        // 0x032C (size: 0x1)
    int32 Gold;                                                                       // 0x0330 (size: 0x4)
    int32 Color;                                                                      // 0x0334 (size: 0x4)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Talisman_disappear_control(int32 EntryPoint);
}; // Size: 0x338

#endif
