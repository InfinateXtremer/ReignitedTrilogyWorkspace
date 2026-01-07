#ifndef UE4SS_SDK_BP_CPS3342_Agent9BombArc_HPP
#define UE4SS_SDK_BP_CPS3342_Agent9BombArc_HPP

class ABP_CPS3342_Agent9BombArc_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UPoseableMeshComponent* SkeletalMesh_Arc;                                   // 0x0320 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem_LandingZone;                       // 0x0328 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0330 (size: 0x8)
    float ThrowAngle;                                                                 // 0x0338 (size: 0x4)
    bool ValidTarget;                                                                 // 0x033C (size: 0x1)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CPS3342_Agent9BombArc(int32 EntryPoint);
}; // Size: 0x33D

#endif
