#ifndef UE4SS_SDK_MediaAssets_HPP
#define UE4SS_SDK_MediaAssets_HPP

#include "MediaAssets_enums.hpp"

struct FMediaCaptureDevice
{
    FText DisplayName;                                                                // 0x0000 (size: 0x18)
    FString URL;                                                                      // 0x0018 (size: 0x10)

}; // Size: 0x28

class UBaseMediaSource : public UMediaSource
{
    FName PlayerName;                                                                 // 0x0030 (size: 0x8)

}; // Size: 0x38

class UFileMediaSource : public UBaseMediaSource
{
    FString FilePath;                                                                 // 0x0038 (size: 0x10)
    bool PrecacheFile;                                                                // 0x0048 (size: 0x1)

    void SetFilePath(FString Path);
}; // Size: 0x50

class UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

    void EnumerateWebcamCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32 Filter);
    void EnumerateVideoCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32 Filter);
    void EnumerateAudioCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32 Filter);
}; // Size: 0x28

class UMediaPlayer : public UObject
{
    FMediaPlayerOnEndReached OnEndReached;                                            // 0x0028 (size: 0x10)
    FMediaPlayerOnMediaClosed OnMediaClosed;                                          // 0x0038 (size: 0x10)
    FMediaPlayerOnMediaOpened OnMediaOpened;                                          // 0x0048 (size: 0x10)
    FMediaPlayerOnMediaOpenFailed OnMediaOpenFailed;                                  // 0x0058 (size: 0x10)
    FMediaPlayerOnPlaybackResumed OnPlaybackResumed;                                  // 0x0068 (size: 0x10)
    FMediaPlayerOnPlaybackSuspended OnPlaybackSuspended;                              // 0x0078 (size: 0x10)
    FMediaPlayerOnSeekCompleted OnSeekCompleted;                                      // 0x0088 (size: 0x10)
    FMediaPlayerOnTracksChanged OnTracksChanged;                                      // 0x0098 (size: 0x10)
    FTimespan CacheAhead;                                                             // 0x00A8 (size: 0x8)
    FTimespan CacheBehind;                                                            // 0x00B0 (size: 0x8)
    FTimespan CacheBehindGame;                                                        // 0x00B8 (size: 0x8)
    bool NativeAudioOut;                                                              // 0x00C0 (size: 0x1)
    bool PlayOnOpen;                                                                  // 0x00C1 (size: 0x1)
    uint8 Shuffle;                                                                    // 0x00C4 (size: 0x1)
    uint8 Loop;                                                                       // 0x00C4 (size: 0x1)
    class UMediaPlaylist* Playlist;                                                   // 0x00C8 (size: 0x8)
    int32 PlaylistIndex;                                                              // 0x00D0 (size: 0x4)
    float HorizontalFieldOfView;                                                      // 0x00D4 (size: 0x4)
    float VerticalFieldOfView;                                                        // 0x00D8 (size: 0x4)
    FRotator ViewRotation;                                                            // 0x00DC (size: 0xC)
    FGuid PlayerGuid;                                                                 // 0x0170 (size: 0x10)

    bool SupportsSeeking();
    bool SupportsScrubbing();
    bool SupportsRate(float Rate, bool Unthinned);
    bool SetViewRotation(const FRotator& Rotation, bool Absolute);
    bool SetViewField(float Horizontal, float Vertical, bool Absolute);
    bool SetVideoTrackFrameRate(int32 TrackIndex, int32 FormatIndex, float FrameRate);
    bool SetTrackFormat(EMediaPlayerTrack TrackType, int32 TrackIndex, int32 FormatIndex);
    bool SetRate(float Rate);
    bool SetLooping(bool Looping);
    void SetDesiredPlayerName(FName PlayerName);
    bool SelectTrack(EMediaPlayerTrack TrackType, int32 TrackIndex);
    bool Seek(const FTimespan& Time);
    bool Rewind();
    bool Reopen();
    bool Previous();
    bool Play();
    bool Pause();
    bool OpenUrl(FString URL);
    bool OpenSource(class UMediaSource* MediaSource);
    bool OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int32 Index);
    bool OpenPlaylist(class UMediaPlaylist* InPlaylist);
    bool OpenFile(FString FilePath);
    bool Next();
    bool IsReady();
    bool IsPreparing();
    bool IsPlaying();
    bool IsPaused();
    bool IsLooping();
    bool IsConnecting();
    bool IsBuffering();
    bool HasError();
    FRotator GetViewRotation();
    FString GetVideoTrackType(int32 TrackIndex, int32 FormatIndex);
    FFloatRange GetVideoTrackFrameRates(int32 TrackIndex, int32 FormatIndex);
    float GetVideoTrackFrameRate(int32 TrackIndex, int32 FormatIndex);
    FIntPoint GetVideoTrackDimensions(int32 TrackIndex, int32 FormatIndex);
    float GetVideoTrackAspectRatio(int32 TrackIndex, int32 FormatIndex);
    float GetVerticalFieldOfView();
    FString GetUrl();
    FString GetTrackLanguage(EMediaPlayerTrack TrackType, int32 TrackIndex);
    int32 GetTrackFormat(EMediaPlayerTrack TrackType, int32 TrackIndex);
    FText GetTrackDisplayName(EMediaPlayerTrack TrackType, int32 TrackIndex);
    FTimespan GetTime();
    void GetSupportedRates(TArray<FFloatRange>& OutRates, bool Unthinned);
    int32 GetSelectedTrack(EMediaPlayerTrack TrackType);
    float GetRate();
    int32 GetPlaylistIndex();
    class UMediaPlaylist* GetPlaylist();
    FName GetPlayerName();
    int32 GetNumTracks(EMediaPlayerTrack TrackType);
    int32 GetNumTrackFormats(EMediaPlayerTrack TrackType, int32 TrackIndex);
    FText GetMediaName();
    float GetHorizontalFieldOfView();
    FTimespan GetDuration();
    FName GetDesiredPlayerName();
    FString GetAudioTrackType(int32 TrackIndex, int32 FormatIndex);
    int32 GetAudioTrackSampleRate(int32 TrackIndex, int32 FormatIndex);
    int32 GetAudioTrackChannels(int32 TrackIndex, int32 FormatIndex);
    void Close();
    bool CanPlayUrl(FString URL);
    bool CanPlaySource(class UMediaSource* MediaSource);
    bool CanPause();
}; // Size: 0x190

class UMediaPlaylist : public UObject
{
    TArray<class UMediaSource*> Items;                                                // 0x0028 (size: 0x10)

    bool Replace(int32 Index, class UMediaSource* Replacement);
    bool RemoveAt(int32 Index);
    bool Remove(class UMediaSource* MediaSource);
    int32 Num();
    void Insert(class UMediaSource* MediaSource, int32 Index);
    class UMediaSource* GetRandom(int32& OutIndex);
    class UMediaSource* GetPrevious(int32& InOutIndex);
    class UMediaSource* GetNext(int32& InOutIndex);
    class UMediaSource* Get(int32 Index);
    bool AddUrl(FString URL);
    bool AddFile(FString FilePath);
    bool Add(class UMediaSource* MediaSource);
}; // Size: 0x38

class UMediaSoundComponent : public USynthComponent
{
    EMediaSoundChannels Channels;                                                     // 0x06C0 (size: 0x4)
    class UMediaPlayer* MediaPlayer;                                                  // 0x06C8 (size: 0x8)

    void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);
    class UMediaPlayer* GetMediaPlayer();
    bool BP_GetAttenuationSettingsToApply(FSoundAttenuationSettings& OutAttenuationSettings);
}; // Size: 0x740

class UMediaSource : public UObject
{

    bool Validate();
    FString GetUrl();
}; // Size: 0x30

class UMediaTexture : public UTexture
{
    TEnumAsByte<TextureAddress> AddressX;                                             // 0x00B8 (size: 0x1)
    TEnumAsByte<TextureAddress> AddressY;                                             // 0x00B9 (size: 0x1)
    bool AutoClear;                                                                   // 0x00BA (size: 0x1)
    FLinearColor ClearColor;                                                          // 0x00BC (size: 0x10)
    class UMediaPlayer* MediaPlayer;                                                  // 0x00D0 (size: 0x8)

    void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);
    int32 GetWidth();
    class UMediaPlayer* GetMediaPlayer();
    int32 GetHeight();
    float GetAspectRatio();
}; // Size: 0x148

class UPlatformMediaSource : public UMediaSource
{
    class UMediaSource* MediaSource;                                                  // 0x0030 (size: 0x8)

}; // Size: 0x38

class UStreamMediaSource : public UBaseMediaSource
{
    FString StreamUrl;                                                                // 0x0038 (size: 0x10)

}; // Size: 0x48

#endif
