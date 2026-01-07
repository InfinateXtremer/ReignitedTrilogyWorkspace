#ifndef UE4SS_SDK_tfbSubtitlePlayer_HPP
#define UE4SS_SDK_tfbSubtitlePlayer_HPP

class UtfbSubtitlePlayer_C : public UUserWidget
{
    class UWidgetAnimation* Outro;                                                    // 0x0208 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0210 (size: 0x8)
    class UImage* Background;                                                         // 0x0218 (size: 0x8)
    class UOverlay* Overlay;                                                          // 0x0220 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x0228 (size: 0x8)
    float currentTime;                                                                // 0x0230 (size: 0x4)
    class UDataTable* DisplayNameToColorDataTable;                                    // 0x0238 (size: 0x8)
    class AFalconSubtitleDataSource_C* SubtitleDataSource;                            // 0x0240 (size: 0x8)
    int32 current item index;                                                         // 0x0248 (size: 0x4)
    FtfbSubtitleItem current item;                                                    // 0x0250 (size: 0x38)
    FtfbSubtitleItem prev item;                                                       // 0x0288 (size: 0x38)

    void get item for current time(FtfbSubtitleItem& Item, int32& item index);
    void update subtitle(float current time);
    void GetFirstTimestampForCurrentDisplayName(float& FirstTimestamp);
    void ShouldShowCurrentDisplayName(bool& ShowCurrentDisplayName);
    void GetCurrentDisplayName(FText& CurrentDisplayName);
    void GetCurrentColor(FString& CurrentColor);
    void GetCurrentText(FString& CurrentText);
}; // Size: 0x2C0

#endif
