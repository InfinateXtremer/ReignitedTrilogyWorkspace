#ifndef UE4SS_SDK_Button_Blueprint_HPP
#define UE4SS_SDK_Button_Blueprint_HPP

class UButton_Blueprint_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UTextBlock* AuthorText;                                                     // 0x0210 (size: 0x8)
    class UButton* Button_136;                                                        // 0x0218 (size: 0x8)
    class UTextBlock* DescriptionText;                                                // 0x0220 (size: 0x8)
    class UTextBlock* ModNameText;                                                    // 0x0228 (size: 0x8)
    class UButton* OptionsButton;                                                     // 0x0230 (size: 0x8)
    class UImage* ThumbnailImage;                                                     // 0x0238 (size: 0x8)
    FText Creator;                                                                    // 0x0240 (size: 0x18)
    FText ModName;                                                                    // 0x0258 (size: 0x18)
    FText ModDescription;                                                             // 0x0270 (size: 0x18)
    FText ModVersion;                                                                 // 0x0288 (size: 0x18)
    TSoftClassPtr<AActor> Blueprint;                                                  // 0x02A0 (size: 0x28)
    bool HasOptions?;                                                                 // 0x02C8 (size: 0x1)
    TSoftClassPtr<UUserWidget> OptionsWidget;                                         // 0x02D0 (size: 0x28)
    bool AutoLoad?;                                                                   // 0x02F8 (size: 0x1)
    FBlueprintModStruct ModStruct;                                                    // 0x0300 (size: 0xC8)
    class UTexture2D* ModImage;                                                       // 0x03C8 (size: 0x8)
    TEnumAsByte<LevelEnum::Type> UsedLevel;                                           // 0x03D0 (size: 0x1)

    void SpawnAndAssignClass(TSubclassOf<class AActor> Class);
    void ExistsInLevel?(UClass* Class, bool& ExistsInLevel);
    void SetupVariables();
    void OnLoaded_3D93EB6B490A85302F2A53B9661FFB30(UClass* Loaded);
    void OnLoaded_3D93EB6B490A85302F2A53B9DE42A141(UClass* Loaded);
    void OnLoaded_881F949C48579BB985D372AEBFAA544E(UClass* Loaded);
    void PrintString(FString In String, FLinearColor TextColor, float Duration);
    void IChangeFlameColor(FLinearColor NewColor);
    void Construct();
    void BndEvt__Button_136_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__OptionsButton_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Button_Blueprint(int32 EntryPoint);
}; // Size: 0x3D1

#endif
