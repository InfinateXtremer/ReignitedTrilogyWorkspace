#ifndef UE4SS_SDK_Spyro_IGC_Struct_HPP
#define UE4SS_SDK_Spyro_IGC_Struct_HPP

struct FSpyro_IGC_Struct
{
    TEnumAsByte<Spyro_IGC_Enum::Type> Category_23_FDB3C2284FDDA8D833D14A8F58DE221E;   // 0x0000 (size: 0x1)
    class ALevelSequenceActor* IGCLevelSequence_2_E61D744E45035F5EAA9D7C84DF2AC37F;   // 0x0008 (size: 0x8)
    bool RequirePrompttostart?_14_FCC40EC1456DA4389F707FA8E18C606D;                   // 0x0010 (size: 0x1)
    int32 NextIGCIndex_5_7ABA09F64B31729F2491E8B2C9D97E81;                            // 0x0014 (size: 0x4)
    bool PlayThisIGCImmediately?_39_232D415B403C26D3DF36F083B526A280;                 // 0x0018 (size: 0x1)
    class ASimpleCamera_C* AltSimpleCamera_46_6806A3094B30DDB4723AC69AC1E5E29A;       // 0x0020 (size: 0x8)
    bool UseDebugIGC?_8_06D724FF486B8E0E10CD88BCD15D038A;                             // 0x0028 (size: 0x1)
    FString DebugString_17_9C1682D747B9B12DC946048815BFFF99;                          // 0x0030 (size: 0x10)
    EInventoryType GoalToWatch_27_3B9DD242495FA908FDF94689BA524360;                   // 0x0040 (size: 0x1)
    int32 GoalValue_30_4CA019ED4F58457D02858E9623C32FF9;                              // 0x0044 (size: 0x4)
    int32 OnGoalReachedSetIndexTo_32_9B9C559446322D6ED9DF65BEB262B176;                // 0x0048 (size: 0x4)
    class AActor* LootObject_52_0BF1174E46B1C9A18734C9BB448BC398;                     // 0x0050 (size: 0x8)
    bool LootUsesSpline_38_A282D20D46D745A7202808AB61C04EE5;                          // 0x0058 (size: 0x1)
    int32 StartSuccessIGCIndex_49_A236EDF74BD8A733566BF6B2E279ED91;                   // 0x005C (size: 0x4)
    int32 StartFailIGCIndex_51_2031D9444FBB503748CC52A9F85A9E49;                      // 0x0060 (size: 0x4)

}; // Size: 0x64

#endif
