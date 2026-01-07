#ifndef UE4SS_SDK_UI_Cine_SpinBox_HPP
#define UE4SS_SDK_UI_Cine_SpinBox_HPP

class UUI_Cine_SpinBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class USpinBox* SpinBox_0;                                                        // 0x0210 (size: 0x8)
    TEnumAsByte<ETextTypes::Type> TextType;                                           // 0x0218 (size: 0x1)
    int32 OverrideTextSize;                                                           // 0x021C (size: 0x4)
    FUI_Cine_SpinBox_COnValueChanged OnValueChanged;                                  // 0x0220 (size: 0x10)
    FUI_Cine_SpinBox_COnValueCommitted OnValueCommitted;                              // 0x0230 (size: 0x10)

    void BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_Cine_SpinBox(int32 EntryPoint);
    void OnValueCommitted__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void OnValueChanged__DelegateSignature(float InValue);
}; // Size: 0x240

#endif
