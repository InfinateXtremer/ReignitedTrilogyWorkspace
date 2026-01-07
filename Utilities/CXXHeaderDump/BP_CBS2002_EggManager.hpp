#ifndef UE4SS_SDK_BP_CBS2002_EggManager_HPP
#define UE4SS_SDK_BP_CBS2002_EggManager_HPP

class ABP_CBS2002_EggManager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0320 (size: 0x8)
    TArray<class ATargetPoint*> AvailableSpawns;                                      // 0x0328 (size: 0x10)
    TArray<class TSubclassOf<AActor>> PossibleEggContent;                             // 0x0338 (size: 0x10)
    int32 EggsToSpawn;                                                                // 0x0348 (size: 0x4)
    bool FodderToggle;                                                                // 0x034C (size: 0x1)
    int32 LastSpawnIndex;                                                             // 0x0350 (size: 0x4)
    class ABP_CBS2002_Gulp_C* Gulp;                                                   // 0x0358 (size: 0x8)
    TArray<class ABP_CES1068_MetalBarrel_C*> Barrels;                                 // 0x0360 (size: 0x10)
    TArray<class ABP_Bomb_C*> Bombs;                                                  // 0x0370 (size: 0x10)
    TArray<class ABP_CBS2002_SpitMissile_C*> Rockets;                                 // 0x0380 (size: 0x10)
    TArray<class ABP_CFS1158_Chickens_C*> Chickens;                                   // 0x0390 (size: 0x10)
    class ABP_219_Achievement_C* AchievementBP;                                       // 0x03A0 (size: 0x8)
    bool DidFightStart;                                                               // 0x03A8 (size: 0x1)
    TArray<class TSubclassOf<AActor>> AllPossibleEggClasses;                          // 0x03B0 (size: 0x10)
    int32 NumSpawnedEggsCap;                                                          // 0x03C0 (size: 0x4)

    void CanSpawnEgg(bool& SpawnEgg?);
    void CleanupBarrel(class ABP_LevelActor_Base_C* barrel, TArray<class AActor*>& Target Array, int32& Index);
    void CleanupChicken(class ABP_Base_Enemy_C* Enemy, TArray<class AActor*>& Target Array, int32& Index);
    void GetEggContent(TSubclassOf<class AActor>& Contents);
    void UserConstructionScript();
    void Drop Eggs(int32 stage);
    void SetPossibleEggs(int32 stage);
    void SpawnEggContent(FVector Location, class ABP_CBS2002_GulpEgg_C* egg, TSubclassOf<class AActor> ItemToSpawn);
    void CleanUpSpawns();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_CBS2002_EggManager(int32 EntryPoint);
}; // Size: 0x3C4

#endif
