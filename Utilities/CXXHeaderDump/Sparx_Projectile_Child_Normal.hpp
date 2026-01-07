#ifndef UE4SS_SDK_Sparx_Projectile_Child_Normal_HPP
#define UE4SS_SDK_Sparx_Projectile_Child_Normal_HPP

class ASparx_Projectile_Child_Normal_C : public ASparx_Projectile_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0358 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent;                      // 0x0360 (size: 0x8)
    class UTfbAkComponent* AkAudio;                                                   // 0x0368 (size: 0x8)

    void UserConstructionScript();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_Sparx_Projectile_Child_Normal(int32 EntryPoint);
}; // Size: 0x370

#endif
