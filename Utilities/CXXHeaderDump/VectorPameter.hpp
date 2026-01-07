#ifndef UE4SS_SDK_VectorPameter_HPP
#define UE4SS_SDK_VectorPameter_HPP

class UVectorPameter_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UButton* Button_0;                                                          // 0x0210 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_CineTextBlock_C_0;                                 // 0x0218 (size: 0x8)
    bool init?;                                                                       // 0x0220 (size: 0x1)
    FName MaterialParameterName;                                                      // 0x0228 (size: 0x8)
    class UMaterialInstanceDynamic* Material;                                         // 0x0230 (size: 0x8)
    FLinearColor curValue;                                                            // 0x0238 (size: 0x10)

    void SetMaterialValue(FLinearColor curValue);
    void SetTextboxName();
    void SetButtonColor(FLinearColor curValue);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature();
    void CustomEvent_0(FLinearColor NewColor);
    void Construct();
    void ExecuteUbergraph_VectorPameter(int32 EntryPoint);
}; // Size: 0x248

#endif
