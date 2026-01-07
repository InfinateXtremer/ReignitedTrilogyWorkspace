#ifndef UE4SS_SDK_BP_GameMode_Spyro1_HPP
#define UE4SS_SDK_BP_GameMode_Spyro1_HPP

class ABP_GameMode_Spyro1_C : public AFalconGameModeBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x03D8 (size: 0x8)
    bool pie camera start;                                                            // 0x03E0 (size: 0x1)
    bool camPlayer;                                                                   // 0x03E1 (size: 0x1)
    class APlayerController* CameraControllerPlayer;                                  // 0x03E8 (size: 0x8)
    bool SpawnPlayer;                                                                 // 0x03F0 (size: 0x1)

    void get game started from camera position(bool& Result);
    bool MustSpectate(class APlayerController* NewPlayerController);
    class AActor* ChoosePlayerStart(class AController* Player);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void InitializeHUDForPlayer(class APlayerController* NewPlayer);
    void CreateCameraPlayer();
    void DestroyCameraPlayer();
    void HandleStartingNewPlayer(class APlayerController* NewPlayer);
    void ExecuteUbergraph_BP_GameMode_Spyro1(int32 EntryPoint);
}; // Size: 0x3F1

#endif
