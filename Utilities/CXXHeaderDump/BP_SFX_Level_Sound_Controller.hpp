#ifndef UE4SS_SDK_BP_SFX_Level_Sound_Controller_HPP
#define UE4SS_SDK_BP_SFX_Level_Sound_Controller_HPP

class ABP_SFX_Level_Sound_Controller_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent;                      // 0x0320 (size: 0x8)
    class UTfbAkComponent* TfbAk;                                                     // 0x0328 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0330 (size: 0x8)
    class UAkAudioEvent* Level Ambience;                                              // 0x0338 (size: 0x8)
    FName Ambience Group Name;                                                        // 0x0340 (size: 0x8)
    FAmbienceStruct Current Playing Ambience;                                         // 0x0348 (size: 0x20)
    TArray<FAmbienceStruct> Queued Ambiences;                                         // 0x0368 (size: 0x10)
    FAmbienceStruct TmpAmb;                                                           // 0x0378 (size: 0x20)
    FName Sound State Name;                                                           // 0x0398 (size: 0x8)
    int32 Ambience Priority;                                                          // 0x03A0 (size: 0x4)
    bool Interior;                                                                    // 0x03A4 (size: 0x1)
    bool TransitionMusic;                                                             // 0x03A5 (size: 0x1)
    bool EnableMusicTransitions;                                                      // 0x03A6 (size: 0x1)

    void Set Saved Volumes();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void Enter Ambient Zone(FAmbienceStruct New Ambience);
    void Exit Ambient Zone(FAmbienceStruct Ambience);
    void Start Level Audio();
    void Start Level Audio S3();
    void ExecuteUbergraph_BP_SFX_Level_Sound_Controller(int32 EntryPoint);
}; // Size: 0x3A7

#endif
