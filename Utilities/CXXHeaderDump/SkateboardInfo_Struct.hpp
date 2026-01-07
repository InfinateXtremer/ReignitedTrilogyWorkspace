#ifndef UE4SS_SDK_SkateboardInfo_Struct_HPP
#define UE4SS_SDK_SkateboardInfo_Struct_HPP

struct FSkateboardInfo_Struct
{
    TEnumAsByte<SkateboardTypes::Type> Type_8_107A00954426F62362CB02AD9CD638AA;       // 0x0000 (size: 0x1)
    TSubclassOf<class AActor> NoCol_ActorClass_12_EB57E3BC4197445CFA1A078689145B7A;   // 0x0008 (size: 0x8)
    TSubclassOf<class AActor> Dynamic_ActorClass_13_A00511E44F2D49A6D2E3C6A4B0EF5B05; // 0x0010 (size: 0x8)
    FVector BoardSize_15_292518FA41F753FEA72AC09C0B0CA901;                            // 0x0018 (size: 0xC)
    FVector BoardOffset_18_37EB4D7448DBD7B4F116E8B8C0BBD718;                          // 0x0024 (size: 0xC)
    float WheelRadius_19_7E3F93AB49211E926F00AD9594886A87;                            // 0x0030 (size: 0x4)

}; // Size: 0x34

#endif
