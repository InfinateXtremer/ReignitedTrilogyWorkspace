#ifndef UE4SS_SDK_BP_SP3_Base_BossFodderManager_HPP
#define UE4SS_SDK_BP_SP3_Base_BossFodderManager_HPP

class ABP_SP3_Base_BossFodderManager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USP3_SpawnManagerComponent* SpawnManager;                                   // 0x0320 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0328 (size: 0x8)
    TSubclassOf<class ABP_Base_Enemy_C> FodderType;                                   // 0x0330 (size: 0x8)
    class ASpyroCharacter* PlayableCharacter;                                         // 0x0338 (size: 0x8)
    int32 MaxFodder;                                                                  // 0x0340 (size: 0x4)
    float SpawnInterval;                                                              // 0x0344 (size: 0x4)

    void IsTimeToSpawnFodder(bool& Result);
    void IsRoomForFodder(bool& Result);
    void IsPlayerLowHealth(bool& Result);
    void ResetLastSpawnTime();
    void PurgeDeadFodder();
    void GetNumFodder();
    void SpawnFodder(FTransform Transform, class ABP_Base_Enemy_C*& Fodder);
    void UserConstructionScript();
    void InitPlayableCharacter();
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_SP3_Base_BossFodderManager(int32 EntryPoint);
}; // Size: 0x348

#endif
