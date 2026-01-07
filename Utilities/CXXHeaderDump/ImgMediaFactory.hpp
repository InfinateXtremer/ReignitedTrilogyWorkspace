#ifndef UE4SS_SDK_ImgMediaFactory_HPP
#define UE4SS_SDK_ImgMediaFactory_HPP

class UImgMediaSettings : public UObject
{
    float DefaultFps;                                                                 // 0x0028 (size: 0x4)
    float CacheBehindPercentage;                                                      // 0x002C (size: 0x4)
    float CacheSizeGB;                                                                // 0x0030 (size: 0x4)
    int32 CacheThreads;                                                               // 0x0034 (size: 0x4)
    int32 CacheThreadStackSizeKB;                                                     // 0x0038 (size: 0x4)
    uint32 ExrDecoderThreads;                                                         // 0x003C (size: 0x4)
    FString DefaultProxy;                                                             // 0x0040 (size: 0x10)
    bool UseDefaultProxy;                                                             // 0x0050 (size: 0x1)

}; // Size: 0x58

#endif
