#ifndef UE4SS_SDK_BP_FindParticleSystems_HPP
#define UE4SS_SDK_BP_FindParticleSystems_HPP

class ABP_FindParticleSystems_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)
    bool Loop;                                                                        // 0x0328 (size: 0x1)
    FString Search String;                                                            // 0x0330 (size: 0x10)
    bool SearchToggle;                                                                // 0x0340 (size: 0x1)
    FString Empty String;                                                             // 0x0348 (size: 0x10)
    bool Running;                                                                     // 0x0358 (size: 0x1)

    void UserConstructionScript();
    void InpActEvt_Add_K2Node_InputKeyEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_FindParticleSystems(int32 EntryPoint);
}; // Size: 0x359

#endif
