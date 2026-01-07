#ifndef UE4SS_SDK_BlueprintModStruct_HPP
#define UE4SS_SDK_BlueprintModStruct_HPP

struct FBlueprintModStruct
{
    FText Creator_19_CAD97A424A718B72F36C0EBB67693620;                                // 0x0000 (size: 0x18)
    FText ModName_20_E6889272494FE6E32FB5BEA492F36423;                                // 0x0018 (size: 0x18)
    FText ModDescription_21_E5C119B44C8D93470F47E08444F0C280;                         // 0x0030 (size: 0x18)
    FText ModVersion_26_57438AD844197C0F41F4C9B8490C92C8;                             // 0x0048 (size: 0x18)
    class UTexture2D* ModThumbnail_22_E25EE6F6456E8D883CBD7E858A06C851;               // 0x0060 (size: 0x8)
    TSoftClassPtr<AActor> Blueprint_23_0D2B4ED74CA06C871E23649636589EFE;              // 0x0068 (size: 0x28)
    TEnumAsByte<LevelEnum::Type> UsedLevel_18_2AB493124181DF35210F8B8FC4457DB8;       // 0x0090 (size: 0x1)
    bool HasOptions?_28_027CA2D740648209EC96328AF3A5733B;                             // 0x0091 (size: 0x1)
    TSoftClassPtr<UUserWidget> OptionsWidget_45_25D11BA7420B5723EF0BF6BB278AE13A;     // 0x0098 (size: 0x28)
    bool AutoLoad?_42_06C6780E42064ACEB73F9B989FC29BDC;                               // 0x00C0 (size: 0x1)

}; // Size: 0xC1

#endif
