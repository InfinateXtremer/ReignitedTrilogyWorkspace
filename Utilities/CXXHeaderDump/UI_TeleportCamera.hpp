#ifndef UE4SS_SDK_UI_TeleportCamera_HPP
#define UE4SS_SDK_UI_TeleportCamera_HPP

class UUI_TeleportCamera_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UEditableTextBox* EditableTextBox_1;                                        // 0x0210 (size: 0x8)
    class UEditableTextBox* EditableTextBox_2;                                        // 0x0218 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_Cine_TextBlock_C_0;                                // 0x0220 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_Cine_TextBlock_C_1;                                // 0x0228 (size: 0x8)
    class UUI_Cine_TextBlock_C* UI_Cine_TextBlock_C_2;                                // 0x0230 (size: 0x8)
    class UUI_Text_Box_C* UI_Text_Box;                                                // 0x0238 (size: 0x8)
    class UCineCameraComponent* Camera;                                               // 0x0240 (size: 0x8)
    class ABP_CameraActor_C* CameraActor;                                             // 0x0248 (size: 0x8)
    TArray<FString> CameraTransforms;                                                 // 0x0250 (size: 0x10)

    FText GetText_0();
    FText GetWorldRotation();
    FText GetWorldLocation();
    void GetCamera();
    void Construct();
    void BndEvt__EditableTextBox_1_K2Node_ComponentBoundEvent_77_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__EditableTextBox_2_K2Node_ComponentBoundEvent_42_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__EditableTextBox_55_K2Node_ComponentBoundEvent_81_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__UI_Text_Box_K2Node_ComponentBoundEvent_112_OnTextCommitted__DelegateSignature(FText Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void ExecuteUbergraph_UI_TeleportCamera(int32 EntryPoint);
}; // Size: 0x260

#endif
