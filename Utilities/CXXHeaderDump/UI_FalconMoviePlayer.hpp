#ifndef UE4SS_SDK_UI_FalconMoviePlayer_HPP
#define UE4SS_SDK_UI_FalconMoviePlayer_HPP

class UUI_FalconMoviePlayer_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0208 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0210 (size: 0x8)
    class UMediaPlayer* media player;                                                 // 0x0218 (size: 0x8)
    class UFalconWidget* parent widget;                                               // 0x0220 (size: 0x8)

    void play movie(class UFileMediaSource* Media, class UFalconWidget* parent widget);
    void media opened(FString OpenedUrl);
    void media end();
    void stop movie();
    void ExecuteUbergraph_UI_FalconMoviePlayer(int32 EntryPoint);
}; // Size: 0x228

#endif
