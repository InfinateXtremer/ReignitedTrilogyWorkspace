#ifndef UE4SS_SDK_BP_Posable_Character_HPP
#define UE4SS_SDK_BP_Posable_Character_HPP

class ABP_Posable_Character_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UPoseableMeshComponent* PoseableMesh;                                       // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    bool UpdatedLocation;                                                             // 0x0330 (size: 0x1)
    class ACharacter* Character;                                                      // 0x0338 (size: 0x8)

    void UpdateMesh(class USkeletalMesh* NewMesh);
    void ProcessData(FString Data);
    void CreatePoseData(FString& PoseData);
    void ParseBoneData(FString BoneData);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Posable_Character(int32 EntryPoint);
}; // Size: 0x340

#endif
