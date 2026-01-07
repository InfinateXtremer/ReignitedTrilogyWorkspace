#ifndef UE4SS_SDK_MeshModStruct_HPP
#define UE4SS_SDK_MeshModStruct_HPP

struct FMeshModStruct
{
    FText Creator_19_5E0CB5624791D478882B7FB15ADCC223;                                // 0x0000 (size: 0x18)
    FText ModName_20_53B68D2941F825C714372790ACC96B91;                                // 0x0018 (size: 0x18)
    FText ModDescription_21_4C9CDF374C430DFADCB44D9750902819;                         // 0x0030 (size: 0x18)
    FText ModVersion_25_105C57F14A918F4CDE763180BC2ED80F;                             // 0x0048 (size: 0x18)
    class UTexture2D* ModThumbnail_18_36CC1A0C40F877ED19816197161875C2;               // 0x0060 (size: 0x8)
    TSoftObjectPtr<USkeletalMesh> ModMesh_12_ED583E1A477125455744D2955CAF4096;        // 0x0068 (size: 0x28)
    TSubclassOf<class ACharacter> Character_22_CB3B58E741781E189971C5A27DE97970;      // 0x0090 (size: 0x8)
    bool SparxColorsChangeMaterial_28_0432F57842FC78B096E450934A17E2BA;               // 0x0098 (size: 0x1)
    FLinearColor FlameColor_36_0C016D654C90AE9464CABC9B985F9072;                      // 0x009C (size: 0x10)

}; // Size: 0xAC

#endif
