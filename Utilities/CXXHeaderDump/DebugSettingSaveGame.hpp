#ifndef UE4SS_SDK_DebugSettingSaveGame_HPP
#define UE4SS_SDK_DebugSettingSaveGame_HPP

class UDebugSettingSaveGame_C : public USaveGame
{
    TArray<FDebugSettingData> debug setting list;                                     // 0x0028 (size: 0x10)
    bool dirty;                                                                       // 0x0038 (size: 0x1)

}; // Size: 0x39

#endif
