#ifndef UE4SS_SDK_tfbSubtitleDataTableRow_HPP
#define UE4SS_SDK_tfbSubtitleDataTableRow_HPP

struct FtfbSubtitleDataTableRow
{
    float TimeBegin_8_FBD7661D4365E0973B38C8AA09407F61;                               // 0x0000 (size: 0x4)
    float TimeEnd_10_1DF6CB294AEBB04F04EF4DA789F80164;                                // 0x0004 (size: 0x4)
    FText DisplayName_4_57F4F34249E7870D47F95994072CE14F;                             // 0x0008 (size: 0x18)
    FText Text_2_E59BF467472B2C3764A9E39E6793BF4F;                                    // 0x0020 (size: 0x18)
    class UDataTable* tfbDialogueDataTable_16_2E1BAC834A5FE7EDFE3BF681AB7E5A39;       // 0x0038 (size: 0x8)
    FName RowName_17_7710E51E4E9953A0A2387BB63FA3566C;                                // 0x0040 (size: 0x8)
    int32 SplitIndex_20_90991CDE48A7B863489552BA1645BAC3;                             // 0x0048 (size: 0x4)

}; // Size: 0x4C

#endif
