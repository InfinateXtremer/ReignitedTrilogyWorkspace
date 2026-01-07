#ifndef UE4SS_SDK_SP3_TexturePlayerUI_HPP
#define UE4SS_SDK_SP3_TexturePlayerUI_HPP

class USP3_TexturePlayerUI_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UImage* MovieTexture;                                                       // 0x0210 (size: 0x8)
    class UtfbSubtitlePlayer_C* tfbSubtitlePlayerWidget;                              // 0x0218 (size: 0x8)
    class UUI_LetterBoxBlackBars_C* UI_LetterBoxBlackBars;                            // 0x0220 (size: 0x8)
    class UMediaPlayer* MediaPlayer;                                                  // 0x0228 (size: 0x8)
    class UFileMediaSource* Media;                                                    // 0x0230 (size: 0x8)
    class AActor* ReportActor;                                                        // 0x0238 (size: 0x8)
    bool media opened;                                                                // 0x0240 (size: 0x1)
    bool levelHasEnded;                                                               // 0x0241 (size: 0x1)
    class UtfbSubtitlePlayer_C* tfbSubtitlePlayer;                                    // 0x0248 (size: 0x8)
    class AFalconSubtitleDataSource_C* tfbSubtitleDataSource;                         // 0x0250 (size: 0x8)
    class UDataTable* tfbSubtitleDataTable;                                           // 0x0258 (size: 0x8)
    TMap<class UFileMediaSource*, class UDataTable*> MediaToTfbSubtitleDataTableMap;  // 0x0260 (size: 0x50)

    void SetAnchorBasedOnAspectRatio();
    void MaybeConstructTfbSubtitlePlayer();
    void MissionUpdate(FString String, float Value, class AActor* Actor);
    void MissionReporter(class AActor* Reporter, bool Remove);
    void MissionAlert(class AActor* Actor, int32 Value);
    void MissionStart(class AActor* MasterActor, int32 Value);
    void MissionForceStart(class AActor* RequestingActor, float RequestValue);
    void MissionReset(class AActor* RequestActor);
    void MissionSetup(bool Active);
    void MissionSuspend(bool Suspend);
    void MissionRestore();
    void Construct();
    void MediaOpen(FString OpenedUrl);
    void EndPlayer();
    void MissionEnd(bool Success, bool LevelEnd);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Destruct();
    void ExecuteUbergraph_SP3_TexturePlayerUI(int32 EntryPoint);
}; // Size: 0x2B0

#endif
