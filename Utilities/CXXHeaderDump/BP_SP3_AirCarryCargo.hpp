#ifndef UE4SS_SDK_BP_SP3_AirCarryCargo_HPP
#define UE4SS_SDK_BP_SP3_AirCarryCargo_HPP

class ABP_SP3_AirCarryCargo_C : public ASP3_AirCarryObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0360 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x0368 (size: 0x8)
    class USP3_CarryHandleComponent* CarryHandle;                                     // 0x0370 (size: 0x8)
    class UTfbAkComponent* AkAudio;                                                   // 0x0378 (size: 0x8)
    class UParticleSystemComponent* Hilight;                                          // 0x0380 (size: 0x8)
    class USceneComponent* CarryBase;                                                 // 0x0388 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent;                      // 0x0390 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__CarryHandle_K2Node_ComponentBoundEvent_0_OnVFXSetStateSignature__DelegateSignature(FName State);
    void OnObjectDestroyed(class AActor* destroyedBy);
    void ExecuteUbergraph_BP_SP3_AirCarryCargo(int32 EntryPoint);
}; // Size: 0x398

#endif
