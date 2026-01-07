#ifndef UE4SS_SDK_P_Color_HPP
#define UE4SS_SDK_P_Color_HPP

class UP_Color_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UButton* Button_0;                                                          // 0x0210 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock_C_0;                                 // 0x0218 (size: 0x8)
    FParticleSysParam ParticleParameter;                                              // 0x0220 (size: 0x80)
    FColor varColor;                                                                  // 0x02A0 (size: 0x4)
    FName VarName;                                                                    // 0x02A8 (size: 0x8)

    void UpdateButtonColor(FLinearColor InBackgroundColor);
    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature();
    void CustomEvent_0(FLinearColor NewColor);
    void ExecuteUbergraph_P_Color(int32 EntryPoint);
}; // Size: 0x2B0

#endif
