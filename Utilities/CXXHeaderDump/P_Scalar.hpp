#ifndef UE4SS_SDK_P_Scalar_HPP
#define UE4SS_SDK_P_Scalar_HPP

class UP_Scalar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class USpinBox* SpinBox_1;                                                        // 0x0210 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock_C_0;                                 // 0x0218 (size: 0x8)
    FParticleSysParam ParticleParameter;                                              // 0x0220 (size: 0x80)
    float varScalar;                                                                  // 0x02A0 (size: 0x4)
    FName VarName;                                                                    // 0x02A8 (size: 0x8)
    class UParticleSystemComponent* ParticleSystemComponent;                          // 0x02B0 (size: 0x8)

    void UpdateScalarParameter(float varScalar);
    void ChangeParameter(TEnumAsByte<EParticleSysParamType> Selection, FName Name, float Float, FVector Vector, FLinearColor Color, class UMaterialInterface* Material);
    void BndEvt__SpinBox_1_K2Node_ComponentBoundEvent_79_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void Construct();
    void ExecuteUbergraph_P_Scalar(int32 EntryPoint);
}; // Size: 0x2B8

#endif
