#ifndef UE4SS_SDK_FalconSubtitleDataSource_HPP
#define UE4SS_SDK_FalconSubtitleDataSource_HPP

class AFalconSubtitleDataSource_C : public AActor
{
    class USceneComponent* DefaultSceneRoot;                                          // 0x0318 (size: 0x8)
    class UDataTable* tfbSubtitleDataTable;                                           // 0x0320 (size: 0x8)
    class UDataTable* tfbDisplayNameToColorDataTable;                                 // 0x0328 (size: 0x8)
    TArray<FtfbSubtitleItem> tfbSubtitleData;                                         // 0x0330 (size: 0x10)

    void GetSubtitleData(TArray<FtfbSubtitleItem>& Subtitle Data);
    void DisplayNameToColor(FText DisplayName, FColor& Color);
    void GetSubstringFromSplitIndex(FString StringWithSplits, int32 SplitIndex, FString& String);
    void UserConstructionScript();
}; // Size: 0x340

#endif
