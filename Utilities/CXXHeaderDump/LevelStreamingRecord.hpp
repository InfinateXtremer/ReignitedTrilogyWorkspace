#ifndef UE4SS_SDK_LevelStreamingRecord_HPP
#define UE4SS_SDK_LevelStreamingRecord_HPP

struct FLevelStreamingRecord
{
    FMasterLevelData StreamData_67_69358BEA4FCC654D2CB845B1426E8B6C;                  // 0x0000 (size: 0x20)
    class APortal* SourcePortal_65_1ED4E0C943A083584D99018D2AC2D102;                  // 0x0020 (size: 0x8)
    class APortal* TargetPortal_66_79573AF545D24DCDAA2712A1C88A090D;                  // 0x0028 (size: 0x8)
    bool Load_9_2B90DC62410990E8AD5211972FC8E13E;                                     // 0x0030 (size: 0x1)
    TEnumAsByte<LevelStreamingRecordState::Type> State_13_3983EDDB46583178A8DEBB8FAF8636EB; // 0x0031 (size: 0x1)
    bool UnloadCurrentLevels_20_2B7AB88D4EAC0B2F521D339AD8AF8A34;                     // 0x0032 (size: 0x1)
    FString PlayerStartName_21_192FF66246C9E3B9BF5152BFA4282967;                      // 0x0038 (size: 0x10)
    TEnumAsByte<HomeWorldSlot::Type> HomeWorldSlot_24_AFB0CA154D40B602A1ADBB8B1949A1BB; // 0x0048 (size: 0x1)
    bool TransportSublevelOnly_42_B98FCF0D45BDA261A9FD189FEA3BB11D;                   // 0x0049 (size: 0x1)
    bool NotTransportSublevel_43_AA7119324DC777307DB2C6BDF190AC1C;                    // 0x004A (size: 0x1)
    class APawn* PlayerCharacter_31_E276427D4200D98CDBD8C4BE95EF5DA3;                 // 0x0050 (size: 0x8)
    bool MakeVisible_41_228E5EC24C3076AC38F113B8236E44C1;                             // 0x0058 (size: 0x1)
    bool Respawn_55_EEF8BA4E47196DAE0A23D18785CC9822;                                 // 0x0059 (size: 0x1)
    bool OnlyEnemyDesignSublevels_58_BDA3B2AA4DE154D39992C88D449F9953;                // 0x005A (size: 0x1)
    TEnumAsByte<ELevelTransitionType::Type> leveltransitiontype_61_4D1C230E430FD85FAAFC5985385AF220; // 0x005B (size: 0x1)
    int32 RefCount_64_629A237C45C0D667BD6BD79C0A2032EA;                               // 0x005C (size: 0x4)

}; // Size: 0x60

#endif
