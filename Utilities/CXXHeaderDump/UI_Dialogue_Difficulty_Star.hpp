#ifndef UE4SS_SDK_UI_Dialogue_Difficulty_Star_HPP
#define UE4SS_SDK_UI_Dialogue_Difficulty_Star_HPP

class UUI_Dialogue_Difficulty_Star_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0210 (size: 0x8)
    class UImage* Star;                                                               // 0x0218 (size: 0x8)
    class UImage* StarBase;                                                           // 0x0220 (size: 0x8)

    void animate in(float Delay);
    void ExecuteUbergraph_UI_Dialogue_Difficulty_Star(int32 EntryPoint);
}; // Size: 0x228

#endif
