#ifndef UE4SS_SDK_CNS2082_BrotherClive_HPP
#define UE4SS_SDK_CNS2082_BrotherClive_HPP

class ACNS2082_BrotherClive_C : public ACNS2081_BrotherArnie_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0958 (size: 0x8)
    int32 DebugTest;                                                                  // 0x0960 (size: 0x4)

    void UserConstructionScript();
    void DialogueControl(bool Start, FString DebugString, class AActor* TalkTarget, class UAnimSequence* VOLipSyncAnim);
    void ExecuteUbergraph_CNS2082_BrotherClive(int32 EntryPoint);
}; // Size: 0x964

#endif
