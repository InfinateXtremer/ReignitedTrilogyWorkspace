#ifndef UE4SS_SDK_UI_SkillPoints_Component_HPP
#define UE4SS_SDK_UI_SkillPoints_Component_HPP

class UUI_SkillPoints_Component_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UImage* Base;                                                               // 0x0210 (size: 0x8)
    class UOverlay* CheckmarkOverlay;                                                 // 0x0218 (size: 0x8)
    class UTextBlock* ColonText;                                                      // 0x0220 (size: 0x8)
    class UTextBlock* LevelNameText;                                                  // 0x0228 (size: 0x8)
    class UTextBlock* ObjectiveText;                                                  // 0x0230 (size: 0x8)
    class UTextBlock* TextBlock_1;                                                    // 0x0238 (size: 0x8)
    class UTextBlock* TextBlock_2;                                                    // 0x0240 (size: 0x8)
    class UTextBlock* TextBlock_3;                                                    // 0x0248 (size: 0x8)
    class UHorizontalBox* TextCompletedHB;                                            // 0x0250 (size: 0x8)
    class UHorizontalBox* TextOpenHB;                                                 // 0x0258 (size: 0x8)
    class UImage* Trim;                                                               // 0x0260 (size: 0x8)
    class UUI_HUD_Checkmark_C* UI_HUD_Checkmark;                                      // 0x0268 (size: 0x8)
    FText level name;                                                                 // 0x0270 (size: 0x18)
    FText objective;                                                                  // 0x0288 (size: 0x18)
    bool obtained;                                                                    // 0x02A0 (size: 0x1)

    void Set Obtained();
    FLinearColor Text Color();
    void OnLoaded_9A7B428B48EE3854FF46F9A55EBD15EF(class UObject* Loaded);
    void Construct();
    void ExecuteUbergraph_UI_SkillPoints_Component(int32 EntryPoint);
}; // Size: 0x2A1

#endif
