#ifndef UE4SS_SDK_ClosingIGC_Controller_HPP
#define UE4SS_SDK_ClosingIGC_Controller_HPP

class AClosingIGC_Controller_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UMediaSoundComponent* MediaSound;                                           // 0x0320 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0328 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0330 (size: 0x8)
    float Goofy_Subtitle_Timeline_Simple_Time_A56883EC4BF752DD37AE28BB0E4E407C;       // 0x0338 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Goofy_Subtitle_Timeline__Direction_A56883EC4BF752DD37AE28BB0E4E407C; // 0x033C (size: 0x1)
    class UTimelineComponent* Goofy Subtitle Timeline;                                // 0x0340 (size: 0x8)
    class UFileMediaSource* Media to Play;                                            // 0x0348 (size: 0x8)
    class UUserWidget* CurrentTexturePlayerWidget;                                    // 0x0350 (size: 0x8)
    class UFileMediaSource* Media to Play_Credits;                                    // 0x0358 (size: 0x8)
    int32 Sequence;                                                                   // 0x0360 (size: 0x4)
    class UFileMediaSource* Media to Play_Local;                                      // 0x0368 (size: 0x8)
    bool Active;                                                                      // 0x0370 (size: 0x1)
    bool SkipAvailable;                                                               // 0x0371 (size: 0x1)
    class UDataTable* tfbSubtitleDataTable;                                           // 0x0378 (size: 0x8)

    void UserConstructionScript();
    void Goofy Subtitle Timeline__FinishedFunc();
    void Goofy Subtitle Timeline__UpdateFunc();
    void InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_0(FKey Key);
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void MissionAlert(class AActor* Actor, int32 Value);
    void VODone(int32 EventID, EWwiseEvent WWiseEvent, class UAkComponent* GameObjectID);
    void MissionEnd(bool Success, bool LevelEnd);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_ClosingIGC_Controller(int32 EntryPoint);
}; // Size: 0x380

#endif
