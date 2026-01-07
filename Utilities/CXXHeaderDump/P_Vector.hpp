#ifndef UE4SS_SDK_P_Vector_HPP
#define UE4SS_SDK_P_Vector_HPP

class UP_Vector_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock_C_0;                                 // 0x0210 (size: 0x8)
    class UHorizontalBox* VectorBar;                                                  // 0x0218 (size: 0x8)
    class USpinBox* X;                                                                // 0x0220 (size: 0x8)
    class USpinBox* Y;                                                                // 0x0228 (size: 0x8)
    class USpinBox* Z;                                                                // 0x0230 (size: 0x8)
    FParticleSysParam ParticleParameter;                                              // 0x0240 (size: 0x80)
    FVector varVector;                                                                // 0x02C0 (size: 0xC)
    FName VarName;                                                                    // 0x02D0 (size: 0x8)
    float varVectorX;                                                                 // 0x02D8 (size: 0x4)
    float varVectorZ;                                                                 // 0x02DC (size: 0x4)
    float varVectorY;                                                                 // 0x02E0 (size: 0x4)
    class UParticleSystemComponent* ParticleSystemComponent;                          // 0x02E8 (size: 0x8)

    void UpdateVectorParameter();
    void ChangeParameter(TEnumAsByte<EParticleSysParamType> Selection, FName Name, float Float, FVector Vector, FLinearColor Color, class UMaterialInterface* Material);
    FText GetTypeName();
    FText GetMaterialName();
    ESlateVisibility Get_MaterialBar_Visibility_0();
    ESlateVisibility Get_ActorBar_Visibility_0();
    FText GetActorName();
    ESlateVisibility ColorBarVisibility();
    ESlateVisibility VectorRandomBarVisibility();
    ESlateVisibility VectorBarVisibility();
    ESlateVisibility SetVisibilityFromParameterType(TEnumAsByte<EParticleSysParamType> Type);
    ESlateVisibility ScalarRandomBarVisibility();
    ESlateVisibility ScalarBarVisibility();
    FText TitleText();
    void BndEvt__X_K2Node_ComponentBoundEvent_190_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__Y_K2Node_ComponentBoundEvent_537_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__Z_K2Node_ComponentBoundEvent_558_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void Construct();
    void ExecuteUbergraph_P_Vector(int32 EntryPoint);
}; // Size: 0x2F0

#endif
