#ifndef UE4SS_SDK_UI_Cine_ComboBox_HPP
#define UE4SS_SDK_UI_Cine_ComboBox_HPP

class UUI_Cine_ComboBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UComboBoxString* ComboBoxString_0;                                          // 0x0210 (size: 0x8)
    TEnumAsByte<ETextTypes::Type> TextType;                                           // 0x0218 (size: 0x1)
    int32 OverrideTextSize;                                                           // 0x021C (size: 0x4)
    TArray<FString> Default Options;                                                  // 0x0220 (size: 0x10)
    FString Selected Option;                                                          // 0x0230 (size: 0x10)
    FUI_Cine_ComboBox_COnSelectionChanged OnSelectionChanged;                         // 0x0240 (size: 0x10)

    int32 FindOptionIndex(FString Option);
    FString GetOptionAtIndex(int32 Index);
    void SetSelectedOption(FString Option);
    void RefreshOption();
    bool RemoveOption(FString Option);
    void AddOption(FString Option);
    void UpdateDefaultOptions();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__ComboBoxString_0_K2Node_ComponentBoundEvent_40_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void ExecuteUbergraph_UI_Cine_ComboBox(int32 EntryPoint);
    void OnSelectionChanged__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
}; // Size: 0x250

#endif
