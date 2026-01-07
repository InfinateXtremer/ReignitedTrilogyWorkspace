#ifndef UE4SS_SDK_BP_Transporter_Generic_HPP
#define UE4SS_SDK_BP_Transporter_Generic_HPP

class ABP_Transporter_Generic_C : public ATeleporter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D0 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent;                      // 0x03D8 (size: 0x8)
    class UTfbAkComponent* AkAudio;                                                   // 0x03E0 (size: 0x8)
    class UAkAudioEvent* SFX_InnerTeleporterLoop;                                     // 0x03E8 (size: 0x8)
    class UAkAudioEvent* Music On Overlap;                                            // 0x03F0 (size: 0x8)

    void UserConstructionScript();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveBeginPlay();
    void OnActivateSFX();
    void OnDeactivateSFX();
    void ExecuteUbergraph_BP_Transporter_Generic(int32 EntryPoint);
}; // Size: 0x3F8

#endif
