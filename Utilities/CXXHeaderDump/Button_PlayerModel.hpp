#ifndef UE4SS_SDK_Button_PlayerModel_HPP
#define UE4SS_SDK_Button_PlayerModel_HPP

class UButton_PlayerModel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UTextBlock* AuthorText;                                                     // 0x0210 (size: 0x8)
    class UButton* Button_136;                                                        // 0x0218 (size: 0x8)
    class UTextBlock* DescriptionText;                                                // 0x0220 (size: 0x8)
    class UTextBlock* ModNameText;                                                    // 0x0228 (size: 0x8)
    class UImage* ThumbnailImage;                                                     // 0x0230 (size: 0x8)
    FText Creator;                                                                    // 0x0238 (size: 0x18)
    FText ModName;                                                                    // 0x0250 (size: 0x18)
    FText ModDescription;                                                             // 0x0268 (size: 0x18)
    FText ModVersion;                                                                 // 0x0280 (size: 0x18)
    class UTexture2D* ModThumbnail;                                                   // 0x0298 (size: 0x8)
    TSoftObjectPtr<USkeletalMesh> ModMesh;                                            // 0x02A0 (size: 0x28)
    TSubclassOf<class ACharacter> Character;                                          // 0x02C8 (size: 0x8)
    bool Duplicate?;                                                                  // 0x02D0 (size: 0x1)
    class UUserWidget* ParentWidget;                                                  // 0x02D8 (size: 0x8)
    bool SparxColorsChangeMaterial;                                                   // 0x02E0 (size: 0x1)
    FLinearColor FlameColor;                                                          // 0x02E4 (size: 0x10)
    FMeshModStruct MeshStruct;                                                        // 0x02F8 (size: 0xB0)

    void InitVariables();
    void SetupFlameColor();
    void SetupSparxColorChange();
    FText Get_DescriptionText_Text_0();
    FText Get_ModNameText();
    FText Get_AuthorText();
    void OnLoaded_83AE4629442F91E8634A39884F95AB85(class UObject* Loaded);
    void PrintString(FString In String, FLinearColor TextColor, float Duration);
    void IChangeFlameColor(FLinearColor NewColor);
    void BndEvt__Button_136_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Button_PlayerModel(int32 EntryPoint);
}; // Size: 0x3A8

#endif
