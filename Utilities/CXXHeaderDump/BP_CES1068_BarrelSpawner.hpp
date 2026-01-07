#ifndef UE4SS_SDK_BP_CES1068_BarrelSpawner_HPP
#define UE4SS_SDK_BP_CES1068_BarrelSpawner_HPP

class ABP_CES1068_BarrelSpawner_C : public ABP_LevelActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0448 (size: 0x8)
    class UAkComponent* AkAudio;                                                      // 0x0450 (size: 0x8)
    class UStaticMeshComponent* Cylinder;                                             // 0x0458 (size: 0x8)
    float BarrelSpawn_BarrelZ_C44BAB1E410A075EAA49ECB0DF80EE0D;                       // 0x0460 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> BarrelSpawn__Direction_C44BAB1E410A075EAA49ECB0DF80EE0D; // 0x0464 (size: 0x1)
    class UTimelineComponent* BarrelSpawn;                                            // 0x0468 (size: 0x8)
    class ABP_Barrel_Base_C* MyBarrel;                                                // 0x0470 (size: 0x8)
    bool BarrelReady;                                                                 // 0x0478 (size: 0x1)
    TArray<TEnumAsByte<EObjectTypeQuery>> WorldStatic;                                // 0x0480 (size: 0x10)
    float BarrelRadius;                                                               // 0x0490 (size: 0x4)
    bool MetalBarrel;                                                                 // 0x0494 (size: 0x1)
    TSubclassOf<class ABP_Barrel_Base_C> BarrelToSpawn;                               // 0x0498 (size: 0x8)
    float CustomLaunchArc;                                                            // 0x04A0 (size: 0x4)
    float RespawnTime;                                                                // 0x04A4 (size: 0x4)
    bool DebugPrint;                                                                  // 0x04A8 (size: 0x1)
    bool FirstBarrel;                                                                 // 0x04A9 (size: 0x1)
    bool NoSpecialBarrelLaunch;                                                       // 0x04AA (size: 0x1)
    float TargetingRadius;                                                            // 0x04AC (size: 0x4)
    float TargetingDistance;                                                          // 0x04B0 (size: 0x4)
    float LaunchSpeed;                                                                // 0x04B4 (size: 0x4)
    bool BarrelAboveGround;                                                           // 0x04B8 (size: 0x1)
    TArray<class UChildActorComponent*> BarrelActorComps;                             // 0x04C0 (size: 0x10)
    FTimerHandle BarrelSpawnTimer;                                                    // 0x04D0 (size: 0x8)
    bool DelayStart;                                                                  // 0x04D8 (size: 0x1)

    void ConstructBarrels(int32 Num Barrels);
    void UserConstructionScript();
    void BarrelSpawn__FinishedFunc();
    void BarrelSpawn__UpdateFunc();
    void BarrelHit(class UFalconEnemyStateComponent* StateComponent);
    void OnDestroyed_Event_0(class AActor* DestroyedActor);
    void ReleaseBarrel();
    void PickUpBarrel(class ABP_CES1068_Dockworker_C* BarrelTaker);
    void SpawnBarrel();
    void ReceiveBeginPlay();
    void BarrelLaunch(class UFalconEnemyStateComponent* StateComponent);
    void DelaySpawnBarrel(float Time);
    void StartSpawner();
    void On Cull(class AActor* Actor, bool bIsCulled);
    void ExecuteUbergraph_BP_CES1068_BarrelSpawner(int32 EntryPoint);
}; // Size: 0x4D9

#endif
