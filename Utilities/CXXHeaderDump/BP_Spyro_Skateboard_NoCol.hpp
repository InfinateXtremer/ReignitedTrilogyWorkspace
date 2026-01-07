#ifndef UE4SS_SDK_BP_Spyro_Skateboard_NoCol_HPP
#define UE4SS_SDK_BP_Spyro_Skateboard_NoCol_HPP

class ABP_Spyro_Skateboard_NoCol_C : public APhasmidSkateboard
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UAkComponent* AkRollLoop;                                                   // 0x0320 (size: 0x8)
    class UAkComponent* AkOneShot;                                                    // 0x0328 (size: 0x8)
    class UPoseableMeshComponent* Mesh;                                               // 0x0330 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x0338 (size: 0x8)

    void UserConstructionScript();
    void OnVFXUpdate(class ACharacter* charOwner, float dt, FName State, float Speed);
    void OnVFXEvent(class ACharacter* charOwner, FName evtName);
    void ExecuteUbergraph_BP_Spyro_Skateboard_NoCol(int32 EntryPoint);
}; // Size: 0x340

#endif
