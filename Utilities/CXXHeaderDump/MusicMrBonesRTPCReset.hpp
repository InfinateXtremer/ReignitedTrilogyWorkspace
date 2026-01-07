#ifndef UE4SS_SDK_MusicMrBonesRTPCReset_HPP
#define UE4SS_SDK_MusicMrBonesRTPCReset_HPP

class AMusicMrBonesRTPCReset_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void Start Level();
    void ExecuteUbergraph_MusicMrBonesRTPCReset(int32 EntryPoint);
}; // Size: 0x328

#endif
