#ifndef UE4SS_SDK_LinearTimecode_HPP
#define UE4SS_SDK_LinearTimecode_HPP

struct FDropTimecode
{
    int32 Hours;                                                                      // 0x0000 (size: 0x4)
    int32 Minutes;                                                                    // 0x0004 (size: 0x4)
    int32 Seconds;                                                                    // 0x0008 (size: 0x4)
    int32 Frame;                                                                      // 0x000C (size: 0x4)
    int32 Drop;                                                                       // 0x0010 (size: 0x4)
    int32 FrameRate;                                                                  // 0x0014 (size: 0x4)
    int32 Clock;                                                                      // 0x0018 (size: 0x4)
    int32 Color;                                                                      // 0x001C (size: 0x4)
    int32 Forward;                                                                    // 0x0020 (size: 0x4)
    int32 NewFrame;                                                                   // 0x0024 (size: 0x4)

}; // Size: 0x28

class UDropTimecodeToStringConversion : public UBlueprintFunctionLibrary
{

    FString Conv_DropTimecodeToString(const FDropTimecode& InTimecode);
}; // Size: 0x28

class ULinearTimecodeComponent : public USceneComponent
{
    class UMediaPlayer* MediaPlayer;                                                  // 0x02A0 (size: 0x8)
    FDropTimecode DropTimecode;                                                       // 0x02A8 (size: 0x28)
    FLinearTimecodeComponentOnTimecodeChange OnTimecodeChange;                        // 0x02D0 (size: 0x10)

    void SetDropTimecodeFrameNumber(const FDropTimecode& Timecode, int32 FrameNumber, FDropTimecode& OutTimecode);
    void GetDropTimeCodeFrameNumber(const FDropTimecode& Timecode, int32& FrameNumber);
    int32 GetDropFrameNumber();
}; // Size: 0x310

#endif
