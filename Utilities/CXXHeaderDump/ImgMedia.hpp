#ifndef UE4SS_SDK_ImgMedia_HPP
#define UE4SS_SDK_ImgMedia_HPP

class UImgMediaSource : public UBaseMediaSource
{
    float FramesPerSecondOverride;                                                    // 0x0038 (size: 0x4)
    FString ProxyOverride;                                                            // 0x0040 (size: 0x10)
    FDirectoryPath SequencePath;                                                      // 0x0050 (size: 0x10)

    void SetSequencePath(FString Path);
    FString GetSequencePath();
    void GetProxies(TArray<FString>& OutProxies);
}; // Size: 0x60

#endif
