#ifndef UE4SS_SDK_BP_BoxingChallenge_HPP
#define UE4SS_SDK_BP_BoxingChallenge_HPP

class ABP_BoxingChallenge_C : public ABoxingChallenge
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0570 (size: 0x8)
    class UAkComponent* sfx;                                                          // 0x0578 (size: 0x8)
    class UFalconAudioBankComponent_C* FalconAudioBankComponent;                      // 0x0580 (size: 0x8)

    class UWidget* OnCreateUI(class APlayerController* plyrCtrl, FName Type, FName param0, float param1);
    void UserConstructionScript();
    void OnVFXEvent(FName evtName);
    void OnUpdateUI(class APlayerController* plyrCtrl, FName Type, class UWidget* Widget, FName param0, float param1);
    void ExecuteUbergraph_BP_BoxingChallenge(int32 EntryPoint);
}; // Size: 0x588

#endif
