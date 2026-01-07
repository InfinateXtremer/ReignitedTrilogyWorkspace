#ifndef UE4SS_SDK_SK_LS112_Bridge_B_Blueprint_HPP
#define UE4SS_SDK_SK_LS112_Bridge_B_Blueprint_HPP

class ASK_LS112_Bridge_B_Blueprint_C : public ASkeletalMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A0 (size: 0x8)
    class AStaticMeshActor* BridgeB;                                                  // 0x03A8 (size: 0x8)

    void UserConstructionScript();
    void UnrollBridgeB();
    void ExecuteUbergraph_SK_LS112_Bridge_B_Blueprint(int32 EntryPoint);
}; // Size: 0x3B0

#endif
