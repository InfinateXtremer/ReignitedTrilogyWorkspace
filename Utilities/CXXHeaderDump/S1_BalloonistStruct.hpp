#ifndef UE4SS_SDK_S1_BalloonistStruct_HPP
#define UE4SS_SDK_S1_BalloonistStruct_HPP

struct FS1_BalloonistStruct
{
    TEnumAsByte<S1_Balloonist_Enum::Type> Destination_Name_15_D8694891405884337C9A28AB6C25978B; // 0x0000 (size: 0x1)
    FText Text_String_7_65CB7D5C42F22631D12B35B1E38AC0E7;                             // 0x0008 (size: 0x18)
    FDataTableRowHandle TableRow_11_CC94221240DD378D73DDDC958D94DB5E;                 // 0x0020 (size: 0x10)
    FString PartnerPortal_14_0F3817B648A5636840E7D2BD3684874A;                        // 0x0030 (size: 0x10)
    FText Text_DestinationString_18_47D7F6174512028222E2328E4112C6C7;                 // 0x0040 (size: 0x18)

}; // Size: 0x58

#endif
