#ifndef UE4SS_SDK_SK_LS112_Bridge_A_Blueprint_HPP
#define UE4SS_SDK_SK_LS112_Bridge_A_Blueprint_HPP

class ASK_LS112_Bridge_A_Blueprint_C : public ASkeletalMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A0 (size: 0x8)
    class AStaticMeshActor* BridgeA;                                                  // 0x03A8 (size: 0x8)

    void UserConstructionScript();
    void UnrollBridgeA();
    void ExecuteUbergraph_SK_LS112_Bridge_A_Blueprint(int32 EntryPoint);
}; // Size: 0x3B0

#endif
