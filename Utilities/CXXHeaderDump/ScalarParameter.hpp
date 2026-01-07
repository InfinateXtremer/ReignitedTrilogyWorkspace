#ifndef UE4SS_SDK_ScalarParameter_HPP
#define UE4SS_SDK_ScalarParameter_HPP

class UScalarParameter_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class USpinBox* SpinBox_0;                                                        // 0x0210 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock_C_0;                                 // 0x0218 (size: 0x8)
    class UMaterialInstanceDynamic* Material;                                         // 0x0220 (size: 0x8)
    FName MaterialParameterName;                                                      // 0x0228 (size: 0x8)
    bool init?;                                                                       // 0x0230 (size: 0x1)

    void SetTextboxName();
    void BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_36_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void Construct();
    void ExecuteUbergraph_ScalarParameter(int32 EntryPoint);
}; // Size: 0x231

#endif
