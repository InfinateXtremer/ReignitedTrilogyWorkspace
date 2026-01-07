#ifndef UE4SS_SDK_QuestLevelActor_HPP
#define UE4SS_SDK_QuestLevelActor_HPP

class AQuestLevelActor_C : public AQuestLevelActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03F8 (size: 0x8)
    class UBP_HudDownloadMessageComponent_C* BP_HudDownloadMessageComponent;          // 0x0400 (size: 0x8)
    class UQuestCustomAdjust* QuestCustomAdjust;                                      // 0x0408 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0410 (size: 0x8)
    class UCameraReadjust* CameraReadjust;                                            // 0x0418 (size: 0x8)
    class USpyroReadjust* SpyroReadjust;                                              // 0x0420 (size: 0x8)
    bool Show Minimap;                                                                // 0x0428 (size: 0x1)

    void UserConstructionScript();
    void ClearInput();
    void ReceiveTick(float DeltaSeconds);
    void ShowGemCounter(bool A);
    void HideSparx();
    void ShowSparx();
    void ToggleInvulnerability(bool invuln);
    void ExecuteUbergraph_QuestLevelActor(int32 EntryPoint);
}; // Size: 0x429

#endif
