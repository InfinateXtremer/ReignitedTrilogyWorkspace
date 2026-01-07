#ifndef UE4SS_SDK_BP_LS213_DoorDebris_HPP
#define UE4SS_SDK_BP_LS213_DoorDebris_HPP

class ABP_LS213_DoorDebris_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UBP_DestructibleFade_C* BP_DestructibleFade;                                // 0x0320 (size: 0x8)
    class UDestructibleComponent* Destructible_DM;                                    // 0x0328 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0330 (size: 0x8)
    class UDestructibleMesh* Door_DM_Ref;                                             // 0x0338 (size: 0x8)
    bool CinematicDoor;                                                               // 0x0340 (size: 0x1)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_LS213_DoorDebris(int32 EntryPoint);
}; // Size: 0x341

#endif
