#ifndef UE4SS_SDK_BP_Alt_Dragon_Seq_HPP
#define UE4SS_SDK_BP_Alt_Dragon_Seq_HPP

class ABP_Alt_Dragon_Seq_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    class ACollectable_Dragon_C* Argus;                                               // 0x0330 (size: 0x8)
    class ALevelSequenceActor* Alt_Level_Seq;                                         // 0x0338 (size: 0x8)
    int32 Count;                                                                      // 0x0340 (size: 0x4)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void Player Ready();
    void ExecuteUbergraph_BP_Alt_Dragon_Seq(int32 EntryPoint);
}; // Size: 0x344

#endif
