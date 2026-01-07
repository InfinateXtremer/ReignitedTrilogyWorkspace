#ifndef UE4SS_SDK_UI_Text_Box_HPP
#define UE4SS_SDK_UI_Text_Box_HPP

class UUI_Text_Box_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UEditableTextBox* EditableTextBox_0;                                        // 0x0210 (size: 0x8)
    FName Text;                                                                       // 0x0218 (size: 0x8)
    FName Hint Text;                                                                  // 0x0220 (size: 0x8)
    TEnumAsByte<ETextTypes::Type> TextType;                                           // 0x0228 (size: 0x1)
    int32 OverrideTextSize;                                                           // 0x022C (size: 0x4)
    FUI_Text_Box_COnTextChanged OnTextChanged;                                        // 0x0230 (size: 0x10)
    FUI_Text_Box_COnTextCommitted OnTextCommitted;                                    // 0x0240 (size: 0x10)

    void UpdateText();
    void UpdateHintText();
    void SetupFont();
    void Construct();
    void BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_34_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_97_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void ExecuteUbergraph_UI_Text_Box(int32 EntryPoint);
    void OnTextCommitted__DelegateSignature(FText Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void OnTextChanged__DelegateSignature(FText Text);
}; // Size: 0x250

#endif
