#ifndef UE4SS_SDK_MusicManager_HPP
#define UE4SS_SDK_MusicManager_HPP

class AMusicManager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent;                      // 0x0320 (size: 0x8)
    class UTfbAkComponent* AkAudioComponent;                                          // 0x0328 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0330 (size: 0x8)
    FString LevelMusicString;                                                         // 0x0338 (size: 0x10)
    class UDataTable* MusicDataTable;                                                 // 0x0348 (size: 0x8)
    bool AllowIdleMusic;                                                              // 0x0350 (size: 0x1)
    bool FadeInMusic;                                                                 // 0x0351 (size: 0x1)
    bool MusicHandledThroughQuest;                                                    // 0x0352 (size: 0x1)

    void Set Music Dynamic State(bool On);
    void Get Music Dynamic State(bool& On);
    void Get Music Remix State(bool& New Music);
    void Set Music Remix State(bool remix on);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void Enter Interior();
    void Exit Interior();
    void Charge Start();
    void Charge Stop();
    void Walk Timer();
    void Idle Timer();
    void Play Music(FString Music String);
    void Toggle Music Type();
    void Start Music();
    void Toggle Dynamic Music();
    void Restart Music();
    void Stop Music();
    void Disable Idle Music();
    void Enable Idle Music();
    void ExecuteUbergraph_MusicManager(int32 EntryPoint);
}; // Size: 0x353

#endif
