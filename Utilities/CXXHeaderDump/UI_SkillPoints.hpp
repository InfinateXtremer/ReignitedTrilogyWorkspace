#ifndef UE4SS_SDK_UI_SkillPoints_HPP
#define UE4SS_SDK_UI_SkillPoints_HPP

class UUI_SkillPoints_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* Update;                                                   // 0x0210 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0218 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0220 (size: 0x8)
    class UTextBlock* CenterText;                                                     // 0x0228 (size: 0x8)
    class UBorder* EpilogueBorder;                                                    // 0x0230 (size: 0x8)
    class UPhasmidRichTextBox* openinstructionstext;                                  // 0x0238 (size: 0x8)
    class UBorder* SkillPointsBorder;                                                 // 0x0240 (size: 0x8)
    class UVerticalBox* skillsvbox;                                                   // 0x0248 (size: 0x8)
    class UTextBlock* TopText;                                                        // 0x0250 (size: 0x8)
    class UTextBlock* TopTextShadow;                                                  // 0x0258 (size: 0x8)
    class UUI_Container_001_C* UI_Container_001;                                      // 0x0260 (size: 0x8)
    class UUI_Container_002_C* UI_Container_002;                                      // 0x0268 (size: 0x8)
    class UObject* panel controller;                                                  // 0x0270 (size: 0x8)
    int32 game index;                                                                 // 0x0278 (size: 0x4)
    int32 page index;                                                                 // 0x027C (size: 0x4)
    FText epilogue text;                                                              // 0x0280 (size: 0x18)
    FText epilogue text locked;                                                       // 0x0298 (size: 0x18)
    FText epilogue text unlocked 3;                                                   // 0x02B0 (size: 0x18)
    FText congrats text;                                                              // 0x02C8 (size: 0x18)
    FText instruction text;                                                           // 0x02E0 (size: 0x18)
    FText epilogue text unlocked 1;                                                   // 0x02F8 (size: 0x18)
    FText epilogue text unlocked 2;                                                   // 0x0310 (size: 0x18)

    FText Get_instructiontext_Text_0();
    void get skill points(int32& Count);
    void get required skill points(int32& part 1, int32& part 2);
    void show page details();
    void get skill obtained(ESkillPoint skill, bool& obtained);
    void create skill entry(FSkillPointStruct skill def);
    void get skill def(int32 row index, FSkillPointStruct& skill def, bool& skill found);
    void init skill entries();
    void init game index();
    void UI panel close(bool immediate);
    void UI panel set controller(class UObject* panel controller);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void Construct();
    void ExecuteUbergraph_UI_SkillPoints(int32 EntryPoint);
}; // Size: 0x328

#endif
