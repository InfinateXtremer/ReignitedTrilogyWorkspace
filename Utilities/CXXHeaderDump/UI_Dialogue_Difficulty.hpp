#ifndef UE4SS_SDK_UI_Dialogue_Difficulty_HPP
#define UE4SS_SDK_UI_Dialogue_Difficulty_HPP

class UUI_Dialogue_Difficulty_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UUI_Dialogue_Difficulty_Star_C* 001;                                        // 0x0210 (size: 0x8)
    class UUI_Dialogue_Difficulty_Star_C* 002;                                        // 0x0218 (size: 0x8)
    class UUI_Dialogue_Difficulty_Star_C* 003;                                        // 0x0220 (size: 0x8)
    class UUI_Dialogue_Difficulty_Star_C* 004;                                        // 0x0228 (size: 0x8)
    class UUI_Dialogue_Difficulty_Star_C* 005;                                        // 0x0230 (size: 0x8)
    class UHorizontalBox* HorizontalBox_0;                                            // 0x0238 (size: 0x8)
    class USpacer* Spacer_lt;                                                         // 0x0240 (size: 0x8)
    class USpacer* Spacer_rt;                                                         // 0x0248 (size: 0x8)
    class UHorizontalBox* StarBox;                                                    // 0x0250 (size: 0x8)
    class UTextBlock* Text;                                                           // 0x0258 (size: 0x8)
    class UTextBlock* TextBlock_2;                                                    // 0x0260 (size: 0x8)
    int32 difficulty;                                                                 // 0x0268 (size: 0x4)
    float Delay;                                                                      // 0x026C (size: 0x4)

    void Construct();
    void Set Difficulty(int32 difficulty);
    void ExecuteUbergraph_UI_Dialogue_Difficulty(int32 EntryPoint);
}; // Size: 0x270

#endif
