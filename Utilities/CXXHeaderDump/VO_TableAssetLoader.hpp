#ifndef UE4SS_SDK_VO_TableAssetLoader_HPP
#define UE4SS_SDK_VO_TableAssetLoader_HPP

class AVO_TableAssetLoader_C : public AActor
{
    class USceneComponent* DefaultSceneRoot;                                          // 0x0318 (size: 0x8)
    TArray<class UDataTable*> VOTables;                                               // 0x0320 (size: 0x10)
    TArray<class UAkAudioEvent*> VOLines;                                             // 0x0330 (size: 0x10)
    TArray<class UAnimSequence*> LipAnims;                                            // 0x0340 (size: 0x10)

    void UserConstructionScript();
}; // Size: 0x350

#endif
