#ifndef UE4SS_SDK_SFX_VolumeByElevation_HPP
#define UE4SS_SDK_SFX_VolumeByElevation_HPP

class ASFX_VolumeByElevation_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UTfbAkComponent* TfbAk;                                                     // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    class UAkAudioEvent* AK Sound;                                                    // 0x0330 (size: 0x8)
    FName RTPC Name;                                                                  // 0x0338 (size: 0x8)
    float ZOffset;                                                                    // 0x0340 (size: 0x4)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void Start Sound();
    void ExecuteUbergraph_SFX_VolumeByElevation(int32 EntryPoint);
}; // Size: 0x344

#endif
